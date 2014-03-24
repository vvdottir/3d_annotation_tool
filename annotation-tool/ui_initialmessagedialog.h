/********************************************************************************
** Form generated from reading UI file 'initialmessagedialog.ui'
**
** Created: Mon Mar 17 15:12:53 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITIALMESSAGEDIALOG_H
#define UI_INITIALMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_initialmessagedialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QPushButton *pushButton;

    void setupUi(QDialog *initialmessagedialog)
    {
        if (initialmessagedialog->objectName().isEmpty())
            initialmessagedialog->setObjectName(QString::fromUtf8("initialmessagedialog"));
        initialmessagedialog->resize(464, 138);
        horizontalLayout_2 = new QHBoxLayout(initialmessagedialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(initialmessagedialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QPalette palette;
        QBrush brush(QColor(242, 241, 240, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        textBrowser->setPalette(palette);
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox = new QCheckBox(initialmessagedialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout->addWidget(checkBox);

        pushButton = new QPushButton(initialmessagedialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(initialmessagedialog);

        QMetaObject::connectSlotsByName(initialmessagedialog);
    } // setupUi

    void retranslateUi(QDialog *initialmessagedialog)
    {
        initialmessagedialog->setWindowTitle(QApplication::translate("initialmessagedialog", "Dialog", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("initialmessagedialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The 3D annotation tool has been designed to annotate objects in a point cloud scene, specifically, to annotate the objects on a desk. To know more about the usage of the application read the user's guide, which can be found in the help menu.</p></body></html>", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("initialmessagedialog", "Don't show me this information next time.", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("initialmessagedialog", "Start", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class initialmessagedialog: public Ui_initialmessagedialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITIALMESSAGEDIALOG_H
