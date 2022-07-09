#include"mainwindow.h"
#include"ui_mainwindow.h"
#include<QFileDialog>
#include<QScreen>
#include<QPixmap>
#include<QTime>
#include<QMenu>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){

    ui->setupUi(this);
    //setWindowFlags(Qt::FramelessWindowHint);
    player = new QMediaPlayer(this);
    player->setNotifyInterval(1000);
    player->setVideoOutput(ui->videoWidget);

    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &MainWindow::customContextMenuRequested, this, &MainWindow::open_menu);

    ui->videoWidget->setMediaPlayer(player);
    this->setAcceptDrops(true);

    connect(player,SIGNAL(stateChanged(QMediaPlayer::State)),this, SLOT(onstateChanged(QMediaPlayer::State)));
    connect(player,SIGNAL(positionChanged(qint64)),this, SLOT(onPositionChanged(qint64)));
    connect(player,SIGNAL(durationChanged(qint64)),this, SLOT(onDurationChanged(qint64)));
    connect(ui->action_open, &QAction::triggered, this, &MainWindow::on_btnAdd_clicked);
    connect(ui->action_close, &QAction::triggered, this, &MainWindow::on_btnStop_clicked);
    connect(ui->action_grab, &QAction::triggered, this, &MainWindow::slotGrabWidgetScreen);
    connect(ui->action_exit, &QAction::triggered, this, &MainWindow::close);
    //connect(ui->action0_5x, &QAction::triggered, this, &MainWindow::speed0_5x);
    //connect(ui->action0_75x, &QAction::triggered, this, &MainWindow::speed0_75x);
}
void MainWindow::open_menu(const QPoint & pos){
    QMenu menu;
    menu.setStyleSheet("background-color: rgb(50,50,50);color: rgb(255,255,255);");
    connect(menu.addAction("打开.."), &QAction::triggered, this, &MainWindow::on_btnAdd_clicked);
    connect(menu.addAction("关闭"), &QAction::triggered, this, &MainWindow::on_btnStop_clicked);
    connect(menu.addAction("退出"), &QAction::triggered, this, &MainWindow::close);
    connect(menu.addAction("截屏"), &QAction::triggered, this, &MainWindow::slotGrabWidgetScreen);
    menu.exec(QCursor::pos());
}
MainWindow::~MainWindow(){delete ui;}
void MainWindow::slotGrabWidgetScreen(){
        QString filePathName = "";
        filePathName += QDateTime::currentDateTime().toString("yyyy-MM-dd hh-mm-ss-zzz");
        QScreen *screen=QGuiApplication::primaryScreen();
        QPixmap pixmap=screen->grabWindow(ui->videoWidget->winId());
        QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),filePathName,"png文件(*.png);;jpg文件(*.jpg);;所有文件(*.*)");
        pixmap.save(fileName);
}

void MainWindow::onstateChanged(QMediaPlayer::State state){
    ui->btnPlay->setEnabled(!(state==QMediaPlayer::PlayingState));
    ui->btnPause->setEnabled(state==QMediaPlayer::PlayingState);
    ui->btnStop->setEnabled(state==QMediaPlayer::PlayingState);
}
void MainWindow::speed0_5x(){
    //player->setInterval(0.5);
}
void MainWindow::speed0_75x(){
    //player->setPlaybackSpeed(0.5);
}
void MainWindow::dragEnterEvent(QDragEnterEvent *event){
    event->acceptProposedAction();
}
void MainWindow::dropEvent(QDropEvent *event){
    QString name = event->mimeData()->urls().first().toLocalFile();
    if (name.isEmpty())return;

    QFileInfo fileInfo(name);
    ui->LabCurMedia->setText(fileInfo.fileName());
    player->setMedia(QUrl::fromLocalFile(name));
    player->play();
}
void MainWindow::onDurationChanged(qint64 duration){
    ui->sliderPosition->setMaximum(duration);
    int secs=duration/1000;
    int mins=secs/60;
    secs=secs%60;
    durationTime=QString::asprintf("%d:%d",mins,secs);
    ui->LabRatio->setText(positionTime+"/"+durationTime);
}
void MainWindow::onPositionChanged(qint64 position){
    if (ui->sliderPosition->isSliderDown())return;
    ui->sliderPosition->setSliderPosition(position);
    int secs=position/1000;
    int mins=secs/60;
    secs=secs%60;
    positionTime=QString::asprintf("%d:%d",mins,secs);
    ui->LabRatio->setText(positionTime+"/"+durationTime);
}
void MainWindow::on_btnAdd_clicked(){
    QString curPath=QDir::homePath();
    QString dlgTitle="选择音频文件";
    QString filter="mp3文件(*.mp3);;mp4文件(*.mp4);;wmv文件(*.wmv);;所有文件(*.*)";
    QString aFile=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
    if (aFile.isEmpty())return;
    QFileInfo fileInfo(aFile);
    ui->LabCurMedia->setText(fileInfo.fileName());
    player->setMedia(QUrl::fromLocalFile(aFile));
    player->play();
}

void MainWindow::on_btnPlay_clicked(){player->play();}
void MainWindow::on_btnPause_clicked(){player->pause();}
void MainWindow::on_btnStop_clicked(){player->stop();}
void MainWindow::on_sliderVolumn_valueChanged(int value){
    if(value>0)ui->btnSound->setIcon(QIcon(":/images/images/volumn.png"));
    player->setVolume(value);
}
void MainWindow::on_btnSound_clicked(){
    bool mute=player->isMuted();
    player->setMuted(!mute);
    if (mute)
        ui->btnSound->setIcon(QIcon(":/images/images/volumn.png"));
    else
        ui->btnSound->setIcon(QIcon(":/images/images/mute.png"));
}
void MainWindow::on_sliderPosition_valueChanged(int value){player->setPosition(value);}
void MainWindow::on_pushButton_clicked(){ui->videoWidget->setFullScreen(true);}
