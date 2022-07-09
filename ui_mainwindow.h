/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qmyvideowidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_open;
    QAction *action_close;
    QAction *action_exit;
    QAction *action0_5x;
    QAction *action0_75x;
    QAction *action1_0x;
    QAction *action1_25x;
    QAction *action1_5x;
    QAction *action2_0x;
    QAction *action_grab;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QmyVideoWidget *videoWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnPause;
    QPushButton *btnPlay;
    QPushButton *btnStop;
    QPushButton *btnSound;
    QSlider *sliderVolumn;
    QPushButton *pushButton;
    QFrame *line;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *LabCurMedia;
    QSlider *sliderPosition;
    QLabel *LabRatio;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(828, 502);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50);"));
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QString::fromUtf8("action_open"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        action_open->setFont(font);
        action_close = new QAction(MainWindow);
        action_close->setObjectName(QString::fromUtf8("action_close"));
        action_close->setFont(font);
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QString::fromUtf8("action_exit"));
        action_exit->setFont(font);
        action0_5x = new QAction(MainWindow);
        action0_5x->setObjectName(QString::fromUtf8("action0_5x"));
        action0_75x = new QAction(MainWindow);
        action0_75x->setObjectName(QString::fromUtf8("action0_75x"));
        action1_0x = new QAction(MainWindow);
        action1_0x->setObjectName(QString::fromUtf8("action1_0x"));
        action1_25x = new QAction(MainWindow);
        action1_25x->setObjectName(QString::fromUtf8("action1_25x"));
        action1_5x = new QAction(MainWindow);
        action1_5x->setObjectName(QString::fromUtf8("action1_5x"));
        action2_0x = new QAction(MainWindow);
        action2_0x->setObjectName(QString::fromUtf8("action2_0x"));
        action_grab = new QAction(MainWindow);
        action_grab->setObjectName(QString::fromUtf8("action_grab"));
        action_grab->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        videoWidget = new QmyVideoWidget(groupBox);
        videoWidget->setObjectName(QString::fromUtf8("videoWidget"));
        videoWidget->setMaximumSize(QSize(16777215, 16777215));
        videoWidget->setToolTipDuration(0);
        videoWidget->setAutoFillBackground(false);
        videoWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(60,60,60);\n"
"\n"
""));

        verticalLayout->addWidget(videoWidget);


        verticalLayout_2->addWidget(groupBox);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 35));
        widget->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(9);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        btnAdd = new QPushButton(widget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        btnAdd->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon1);
        btnAdd->setIconSize(QSize(40, 20));
        btnAdd->setFlat(true);

        horizontalLayout->addWidget(btnAdd);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnPause = new QPushButton(widget);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/622.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon2);
        btnPause->setFlat(true);

        horizontalLayout->addWidget(btnPause);

        btnPlay = new QPushButton(widget);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/620.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlay->setIcon(icon3);
        btnPlay->setIconSize(QSize(35, 35));
        btnPlay->setFlat(true);

        horizontalLayout->addWidget(btnPlay);

        btnStop = new QPushButton(widget);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/624.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon4);
        btnStop->setFlat(true);

        horizontalLayout->addWidget(btnStop);

        btnSound = new QPushButton(widget);
        btnSound->setObjectName(QString::fromUtf8("btnSound"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/volumn.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSound->setIcon(icon5);
        btnSound->setIconSize(QSize(20, 20));
        btnSound->setFlat(true);

        horizontalLayout->addWidget(btnSound);

        sliderVolumn = new QSlider(widget);
        sliderVolumn->setObjectName(QString::fromUtf8("sliderVolumn"));
        sliderVolumn->setLayoutDirection(Qt::LeftToRight);
        sliderVolumn->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal{\n"
"width:8px;\n"
"background-color:rgb(255,255,255);\n"
"margin:-8px 0px -8px 0px;\n"
"border-radius:1px;\n"
"}\n"
"QSlider::groove:horizontal{\n"
"height:2px;\n"
"background-color:rgb(219,219,219);\n"
"}\n"
"QSlider::add-page:horizontal{\n"
"background-color:rgb(219,219,219);\n"
"}\n"
"QSlider::sub-page:horizontal{\n"
"background-color:rgb(26,217,110);\n"
"}\n"
" "));
        sliderVolumn->setMaximum(100);
        sliderVolumn->setValue(100);
        sliderVolumn->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderVolumn);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/full.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon6);
        pushButton->setIconSize(QSize(20, 20));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addWidget(widget);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 25));
        widget_2->setWindowOpacity(1.000000000000000);
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(1, 1, 1, 1);
        LabCurMedia = new QLabel(widget_2);
        LabCurMedia->setObjectName(QString::fromUtf8("LabCurMedia"));
        LabCurMedia->setMinimumSize(QSize(100, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light"));
        font1.setStyleStrategy(QFont::PreferDefault);
        LabCurMedia->setFont(font1);
        LabCurMedia->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);"));
        LabCurMedia->setTextFormat(Qt::AutoText);

        horizontalLayout_2->addWidget(LabCurMedia);

        sliderPosition = new QSlider(widget_2);
        sliderPosition->setObjectName(QString::fromUtf8("sliderPosition"));
        sliderPosition->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal{\n"
"width:12px;\n"
"background-color:rgb(7,103,242);\n"
"margin:-5px 0px -5px 0px;\n"
"border-radius:6px;\n"
"}\n"
"QSlider::groove:horizontal{\n"
"height:2px;\n"
"background-color:rgb(219,219,219);\n"
"}\n"
"QSlider::add-page:horizontal{background-color:rgb(219,219,219);}\n"
"QSlider::sub-page:horizontal{background-color:rgb(26,217,110);}\n"
" "));
        sliderPosition->setTracking(false);
        sliderPosition->setOrientation(Qt::Horizontal);
        sliderPosition->setTickPosition(QSlider::NoTicks);
        sliderPosition->setTickInterval(0);

        horizontalLayout_2->addWidget(sliderPosition);

        LabRatio = new QLabel(widget_2);
        LabRatio->setObjectName(QString::fromUtf8("LabRatio"));
        LabRatio->setMinimumSize(QSize(80, 0));
        LabRatio->setFont(font);
        LabRatio->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);"));

        horizontalLayout_2->addWidget(LabRatio);


        verticalLayout_2->addWidget(widget_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 828, 23));
        menuBar->setMouseTracking(true);
        menuBar->setTabletTracking(true);
        menuBar->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setTabletTracking(true);
        menu->setAutoFillBackground(false);
        menu->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255);"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(action_open);
        menu->addAction(action_close);
        menu->addAction(action_exit);
        menu->addAction(action_grab);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\351\237\263\351\242\221\346\222\255\346\224\276\345\231\250", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        action_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\226\207\344\273\266", nullptr));
        action_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        action0_5x->setText(QCoreApplication::translate("MainWindow", "0.5x", nullptr));
        action0_75x->setText(QCoreApplication::translate("MainWindow", "0.75x", nullptr));
        action1_0x->setText(QCoreApplication::translate("MainWindow", "1.0x", nullptr));
        action1_25x->setText(QCoreApplication::translate("MainWindow", "1.25x", nullptr));
        action1_5x->setText(QCoreApplication::translate("MainWindow", "1.5x", nullptr));
        action2_0x->setText(QCoreApplication::translate("MainWindow", "2.0x", nullptr));
        action_grab->setText(QCoreApplication::translate("MainWindow", "\346\210\252\345\233\276", nullptr));
        groupBox->setTitle(QString());
        btnAdd->setText(QString());
        btnPause->setText(QString());
        btnPlay->setText(QString());
        btnStop->setText(QString());
        btnSound->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\217", nullptr));
        LabCurMedia->setText(QCoreApplication::translate("MainWindow", "\346\227\240\346\233\262\347\233\256", nullptr));
        LabRatio->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\272\246", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
