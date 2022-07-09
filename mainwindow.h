#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QLabel>
#include<QDragEnterEvent>
#include<QMimeData>
#include<QDropEvent>
#include<QMainWindow>
#include<QMediaPlayer>
#include<QMediaPlaylist>
#include<QVideoWidget>

#include"qmyvideowidget.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

private:
    QMediaPlayer *player;

    QString  durationTime;
    QString  positionTime;

public:
    QLabel *label;
    QMenu *pop_menu;
    QAction *action_open_m;
    QAction *action_close_m;
    QAction *action_grab_m;
    QAction *action_exit_m;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
//自定义槽函数
    void onstateChanged(QMediaPlayer::State state);
    void onDurationChanged(qint64 duration);
    void onPositionChanged(qint64 position);
    void on_btnAdd_clicked();
    void on_btnPlay_clicked();
    void on_btnPause_clicked();
    void on_btnStop_clicked();
    void on_sliderVolumn_valueChanged(int value);
    void on_btnSound_clicked();
    void on_sliderPosition_valueChanged(int value);
    void on_pushButton_clicked();
    void slotGrabWidgetScreen();

    void speed0_5x();
    void speed0_75x();
    void open_menu(const QPoint & pos);
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
