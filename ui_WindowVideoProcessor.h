/********************************************************************************
** Form generated from reading UI file 'WindowVideoProcessor.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWVIDEOPROCESSOR_H
#define UI_WINDOWVIDEOPROCESSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowVideoProcessor
{
public:
    QWidget *centralwidget;
    QPushButton *btn_pause;
    QLabel *lbl_frameNumber;
    QLabel *label;
    QPushButton *btn_resume;
    QLabel *label_3;
    QLabel *lbl_frameSize;
    QLabel *label_4;
    QLabel *lbl_fpathVid;
    QLabel *lbl_imgVis;
    QLabel *label_5;
    QLabel *lbl_approxNframes;
    QPlainTextEdit *target_printg;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowVideoProcessor)
    {
        if (WindowVideoProcessor->objectName().isEmpty())
            WindowVideoProcessor->setObjectName(QString::fromUtf8("WindowVideoProcessor"));
        WindowVideoProcessor->resize(1331, 842);
        centralwidget = new QWidget(WindowVideoProcessor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_pause = new QPushButton(centralwidget);
        btn_pause->setObjectName(QString::fromUtf8("btn_pause"));
        btn_pause->setGeometry(QRect(600, 50, 93, 28));
        lbl_frameNumber = new QLabel(centralwidget);
        lbl_frameNumber->setObjectName(QString::fromUtf8("lbl_frameNumber"));
        lbl_frameNumber->setGeometry(QRect(150, 10, 141, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 81, 16));
        btn_resume = new QPushButton(centralwidget);
        btn_resume->setObjectName(QString::fromUtf8("btn_resume"));
        btn_resume->setGeometry(QRect(760, 50, 93, 28));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 40, 71, 16));
        lbl_frameSize = new QLabel(centralwidget);
        lbl_frameSize->setObjectName(QString::fromUtf8("lbl_frameSize"));
        lbl_frameSize->setGeometry(QRect(150, 40, 131, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 60, 61, 16));
        lbl_fpathVid = new QLabel(centralwidget);
        lbl_fpathVid->setObjectName(QString::fromUtf8("lbl_fpathVid"));
        lbl_fpathVid->setGeometry(QRect(150, 60, 431, 16));
        lbl_imgVis = new QLabel(centralwidget);
        lbl_imgVis->setObjectName(QString::fromUtf8("lbl_imgVis"));
        lbl_imgVis->setGeometry(QRect(30, 100, 791, 471));
        lbl_imgVis->setFrameShape(QFrame::Box);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(360, 20, 121, 16));
        lbl_approxNframes = new QLabel(centralwidget);
        lbl_approxNframes->setObjectName(QString::fromUtf8("lbl_approxNframes"));
        lbl_approxNframes->setGeometry(QRect(490, 20, 211, 16));
        target_printg = new QPlainTextEdit(centralwidget);
        target_printg->setObjectName(QString::fromUtf8("target_printg"));
        target_printg->setGeometry(QRect(870, 100, 441, 471));
        WindowVideoProcessor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowVideoProcessor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1331, 26));
        WindowVideoProcessor->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowVideoProcessor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowVideoProcessor->setStatusBar(statusbar);

        retranslateUi(WindowVideoProcessor);

        QMetaObject::connectSlotsByName(WindowVideoProcessor);
    } // setupUi

    void retranslateUi(QMainWindow *WindowVideoProcessor)
    {
        WindowVideoProcessor->setWindowTitle(QCoreApplication::translate("WindowVideoProcessor", "MainWindow", nullptr));
        btn_pause->setText(QCoreApplication::translate("WindowVideoProcessor", "Pause video", nullptr));
        lbl_frameNumber->setText(QCoreApplication::translate("WindowVideoProcessor", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("WindowVideoProcessor", "Frame number", nullptr));
        btn_resume->setText(QCoreApplication::translate("WindowVideoProcessor", "Resume video", nullptr));
        label_3->setText(QCoreApplication::translate("WindowVideoProcessor", "Frame size", nullptr));
        lbl_frameSize->setText(QCoreApplication::translate("WindowVideoProcessor", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("WindowVideoProcessor", "Video path", nullptr));
        lbl_fpathVid->setText(QCoreApplication::translate("WindowVideoProcessor", "TextLabel", nullptr));
        lbl_imgVis->setText(QCoreApplication::translate("WindowVideoProcessor", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("WindowVideoProcessor", "Approx total # frames:", nullptr));
        lbl_approxNframes->setText(QCoreApplication::translate("WindowVideoProcessor", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowVideoProcessor: public Ui_WindowVideoProcessor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWVIDEOPROCESSOR_H
