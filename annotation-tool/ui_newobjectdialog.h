/********************************************************************************
** Form generated from reading UI file 'newobjectdialog.ui'
**
** Created: Mon Mar 17 15:12:53 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWOBJECTDIALOG_H
#define UI_NEWOBJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_chooseObjectDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *insert;

    void setupUi(QDialog *chooseObjectDialog)
    {
        if (chooseObjectDialog->objectName().isEmpty())
            chooseObjectDialog->setObjectName(QString::fromUtf8("chooseObjectDialog"));
        chooseObjectDialog->resize(561, 78);
        horizontalLayout_2 = new QHBoxLayout(chooseObjectDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(chooseObjectDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(chooseObjectDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(150, 0));
        lineEdit->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(lineEdit);

        insert = new QPushButton(chooseObjectDialog);
        insert->setObjectName(QString::fromUtf8("insert"));

        horizontalLayout->addWidget(insert);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(chooseObjectDialog);

        QMetaObject::connectSlotsByName(chooseObjectDialog);
    } // setupUi

    void retranslateUi(QDialog *chooseObjectDialog)
    {
        chooseObjectDialog->setWindowTitle(QApplication::translate("chooseObjectDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("chooseObjectDialog", "Insert the dominant plane (desk, floor, etc.): ", 0, QApplication::UnicodeUTF8));
        insert->setText(QApplication::translate("chooseObjectDialog", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class chooseObjectDialog: public Ui_chooseObjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWOBJECTDIALOG_H
