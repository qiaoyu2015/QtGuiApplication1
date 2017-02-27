/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION1_H
#define UI_QTGUIAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication1Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame_content;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_button;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QFrame *frame_showbutton;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QFrame *line;
    QPushButton *pushButton_2;
    QFrame *line_2;
    QPushButton *pushButton_3;
    QFrame *line_3;
    QPushButton *pushButton_4;
    QFrame *frame_show;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *frame_showresult;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication1Class)
    {
        if (QtGuiApplication1Class->objectName().isEmpty())
            QtGuiApplication1Class->setObjectName(QStringLiteral("QtGuiApplication1Class"));
        QtGuiApplication1Class->resize(1128, 612);
        centralWidget = new QWidget(QtGuiApplication1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255);"));

        verticalLayout->addWidget(label);

        frame_content = new QFrame(centralWidget);
        frame_content->setObjectName(QStringLiteral("frame_content"));
        frame_content->setFrameShape(QFrame::StyledPanel);
        frame_content->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_content);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_button = new QFrame(frame_content);
        frame_button->setObjectName(QStringLiteral("frame_button"));
        frame_button->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        frame_button->setFrameShape(QFrame::StyledPanel);
        frame_button->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_button);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_button);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        frame_showbutton = new QFrame(frame_button);
        frame_showbutton->setObjectName(QStringLiteral("frame_showbutton"));
        frame_showbutton->setFrameShape(QFrame::StyledPanel);
        frame_showbutton->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_showbutton);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton = new QPushButton(frame_showbutton);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font;
        font.setPointSize(16);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton->setFlat(true);

        verticalLayout_3->addWidget(pushButton);

        line = new QFrame(frame_showbutton);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        pushButton_2 = new QPushButton(frame_showbutton);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_2->setFlat(true);

        verticalLayout_3->addWidget(pushButton_2);

        line_2 = new QFrame(frame_showbutton);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        pushButton_3 = new QPushButton(frame_showbutton);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QFont font1;
        font1.setPointSize(14);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_3->setFlat(true);

        verticalLayout_3->addWidget(pushButton_3);

        line_3 = new QFrame(frame_showbutton);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_3);

        pushButton_4 = new QPushButton(frame_showbutton);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_4->setFlat(true);

        verticalLayout_3->addWidget(pushButton_4);


        verticalLayout_2->addWidget(frame_showbutton);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 10);

        horizontalLayout->addWidget(frame_button);

        frame_show = new QFrame(frame_content);
        frame_show->setObjectName(QStringLiteral("frame_show"));
        frame_show->setFrameShape(QFrame::StyledPanel);
        frame_show->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_show);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(frame_show);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setPointSize(12);
        label_3->setFont(font2);

        horizontalLayout_2->addWidget(label_3);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

        horizontalLayout_2->addWidget(label_5);


        verticalLayout_4->addWidget(frame);

        frame_showresult = new QFrame(frame_show);
        frame_showresult->setObjectName(QStringLiteral("frame_showresult"));
        frame_showresult->setFrameShape(QFrame::StyledPanel);
        frame_showresult->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(frame_showresult);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 10);

        horizontalLayout->addWidget(frame_show);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 8);

        verticalLayout->addWidget(frame_content);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 8);
        QtGuiApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiApplication1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1128, 23));
        QtGuiApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplication1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication1Class);
        QObject::connect(pushButton, SIGNAL(clicked()), QtGuiApplication1Class, SLOT(showPointsClouds()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), QtGuiApplication1Class, SLOT(resizePointsClouds()));

        QMetaObject::connectSlotsByName(QtGuiApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1Class)
    {
        QtGuiApplication1Class->setWindowTitle(QApplication::translate("QtGuiApplication1Class", "QtGuiApplication1", Q_NULLPTR));
        label->setText(QApplication::translate("QtGuiApplication1Class", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600; color:#ffffff;\">\346\234\272 \345\231\250 \344\272\272</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("QtGuiApplication1Class", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-style:italic; color:#ffffff;\">\345\212\237\350\203\275\346\230\276\347\244\272</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QtGuiApplication1Class", "\346\230\276\347\244\272\347\202\271\344\272\221", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QtGuiApplication1Class", "\350\260\203\346\225\264\345\244\247\345\260\217", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("QtGuiApplication1Class", "\346\214\211\351\222\2563", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("QtGuiApplication1Class", "\346\214\211\351\222\2564", Q_NULLPTR));
        label_3->setText(QApplication::translate("QtGuiApplication1Class", "\346\240\207\347\255\2761", Q_NULLPTR));
        label_4->setText(QApplication::translate("QtGuiApplication1Class", "\346\240\207\347\255\2762", Q_NULLPTR));
        label_5->setText(QApplication::translate("QtGuiApplication1Class", "\346\240\207\347\255\2763", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1Class: public Ui_QtGuiApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
