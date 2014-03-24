/********************************************************************************
** Form generated from reading UI file 'filtervaluesdialog.ui'
**
** Created: Mon Mar 17 15:12:53 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERVALUESDIALOG_H
#define UI_FILTERVALUESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_filtervaluesdialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *leafSize;
    QPushButton *pushButton;

    void setupUi(QDialog *filtervaluesdialog)
    {
        if (filtervaluesdialog->objectName().isEmpty())
            filtervaluesdialog->setObjectName(QString::fromUtf8("filtervaluesdialog"));
        filtervaluesdialog->resize(282, 62);
        horizontalLayout_2 = new QHBoxLayout(filtervaluesdialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(filtervaluesdialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        leafSize = new QDoubleSpinBox(filtervaluesdialog);
        leafSize->setObjectName(QString::fromUtf8("leafSize"));
        leafSize->setDecimals(2);

        horizontalLayout->addWidget(leafSize);

        pushButton = new QPushButton(filtervaluesdialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(filtervaluesdialog);

        QMetaObject::connectSlotsByName(filtervaluesdialog);
    } // setupUi

    void retranslateUi(QDialog *filtervaluesdialog)
    {
        filtervaluesdialog->setWindowTitle(QApplication::translate("filtervaluesdialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("filtervaluesdialog", "Leaf size (cm):", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("filtervaluesdialog", "Filter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class filtervaluesdialog: public Ui_filtervaluesdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERVALUESDIALOG_H
