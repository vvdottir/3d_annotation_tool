/********************************************************************************
** Form generated from reading UI file 'selectobjectdialog.ui'
**
** Created: Mon Mar 17 15:12:53 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTOBJECTDIALOG_H
#define UI_SELECTOBJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_selectObject
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *objectSelected;

    void setupUi(QDialog *selectObject)
    {
        if (selectObject->objectName().isEmpty())
            selectObject->setObjectName(QString::fromUtf8("selectObject"));
        selectObject->resize(344, 62);
        verticalLayout = new QVBoxLayout(selectObject);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(selectObject);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(selectObject);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        objectSelected = new QPushButton(selectObject);
        objectSelected->setObjectName(QString::fromUtf8("objectSelected"));

        horizontalLayout->addWidget(objectSelected);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(selectObject);

        QMetaObject::connectSlotsByName(selectObject);
    } // setupUi

    void retranslateUi(QDialog *selectObject)
    {
        selectObject->setWindowTitle(QApplication::translate("selectObject", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("selectObject", "Select object: ", 0, QApplication::UnicodeUTF8));
        objectSelected->setText(QApplication::translate("selectObject", "Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class selectObject: public Ui_selectObject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTOBJECTDIALOG_H
