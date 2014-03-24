/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Mar 24 11:49:36 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionExit;
    QAction *actionSave_PCD_File;
    QAction *actionAutomatic_plane_detection;
    QAction *actionManual_plane_definition;
    QAction *actionRotate_z_180;
    QAction *actionDesk_segmentation;
    QAction *actionInsert_new_object;
    QAction *actionConfirm_position;
    QAction *actionExport_objects_info;
    QAction *actionImport_objects_info;
    QAction *actionDelete_object;
    QAction *actionHelp;
    QAction *actionCoordinate_system;
    QAction *actionRedefine_object;
    QAction *actionDownsample_point_cloud;
    QAction *actionUp;
    QAction *actionFront;
    QAction *actionLeft;
    QAction *actionRight;
    QAction *actionBack;
    QAction *actionShow_info_messages;
    QAction *actionUndo;
    QAction *actionSave_PCD_and_export_objects_info;
    QAction *actionQSR_values;
    QAction *actionDescription_of_scene_using_QSR;
    QAction *actionSave_QSR_in_txt_file;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QVTKWidget *qvtkWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QTreeWidget *treeWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QToolButton *boxLengthLess;
    QDoubleSpinBox *boxLength;
    QToolButton *boxLengthMore;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QToolButton *boxWidthLess;
    QDoubleSpinBox *boxWidth;
    QToolButton *boxWidthMore;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QToolButton *boxHeightLess;
    QDoubleSpinBox *boxHeight;
    QToolButton *boxHeightMore;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QFrame *line_7;
    QFrame *line;
    QLabel *label;
    QLabel *label_8;
    QPushButton *buttonPitchLess;
    QFrame *line_4;
    QFrame *line_3;
    QPushButton *buttonRollLess;
    QPushButton *buttonYLess;
    QFrame *line_2;
    QPushButton *buttonXMore;
    QPushButton *buttonZLess;
    QPushButton *buttonRollMore;
    QPushButton *buttonYawLess;
    QLabel *label_10;
    QTreeWidget *poseInfo;
    QLabel *label_12;
    QLabel *label_11;
    QPushButton *buttonPitchMore;
    QLabel *label_2;
    QPushButton *buttonYawMore;
    QFrame *line_5;
    QPushButton *buttonYMore;
    QPushButton *buttonXLess;
    QPushButton *buttonZMore;
    QSpacerItem *verticalSpacer_5;
    QMenuBar *menuBar;
    QMenu *menuObjects;
    QMenu *menuEdit;
    QMenu *menuPreferences;
    QMenu *menuFile;
    QMenu *menu_Help;
    QMenu *menu_Display;
    QMenu *menuChange_viewpoint;
    QMenu *menuQSR;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1404, 716);
        MainWindow->setMinimumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/desk.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Actions-document-open-folder-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSave_PCD_File = new QAction(MainWindow);
        actionSave_PCD_File->setObjectName(QString::fromUtf8("actionSave_PCD_File"));
        actionSave_PCD_File->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Actions-document-save-all-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_PCD_File->setIcon(icon2);
        actionAutomatic_plane_detection = new QAction(MainWindow);
        actionAutomatic_plane_detection->setObjectName(QString::fromUtf8("actionAutomatic_plane_detection"));
        actionAutomatic_plane_detection->setEnabled(true);
        actionAutomatic_plane_detection->setIcon(icon);
        actionManual_plane_definition = new QAction(MainWindow);
        actionManual_plane_definition->setObjectName(QString::fromUtf8("actionManual_plane_definition"));
        actionManual_plane_definition->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/pointPicking.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionManual_plane_definition->setIcon(icon3);
        actionRotate_z_180 = new QAction(MainWindow);
        actionRotate_z_180->setObjectName(QString::fromUtf8("actionRotate_z_180"));
        actionRotate_z_180->setEnabled(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/rotate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRotate_z_180->setIcon(icon4);
        actionDesk_segmentation = new QAction(MainWindow);
        actionDesk_segmentation->setObjectName(QString::fromUtf8("actionDesk_segmentation"));
        actionDesk_segmentation->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/Segment.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesk_segmentation->setIcon(icon5);
        actionInsert_new_object = new QAction(MainWindow);
        actionInsert_new_object->setObjectName(QString::fromUtf8("actionInsert_new_object"));
        actionInsert_new_object->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/pencil.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsert_new_object->setIcon(icon6);
        actionConfirm_position = new QAction(MainWindow);
        actionConfirm_position->setObjectName(QString::fromUtf8("actionConfirm_position"));
        actionConfirm_position->setEnabled(true);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/confirm.gif"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfirm_position->setIcon(icon7);
        actionExport_objects_info = new QAction(MainWindow);
        actionExport_objects_info->setObjectName(QString::fromUtf8("actionExport_objects_info"));
        actionExport_objects_info->setEnabled(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_objects_info->setIcon(icon8);
        actionImport_objects_info = new QAction(MainWindow);
        actionImport_objects_info->setObjectName(QString::fromUtf8("actionImport_objects_info"));
        actionImport_objects_info->setEnabled(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/import.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport_objects_info->setIcon(icon9);
        actionDelete_object = new QAction(MainWindow);
        actionDelete_object->setObjectName(QString::fromUtf8("actionDelete_object"));
        actionDelete_object->setEnabled(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_object->setIcon(icon10);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionCoordinate_system = new QAction(MainWindow);
        actionCoordinate_system->setObjectName(QString::fromUtf8("actionCoordinate_system"));
        actionCoordinate_system->setCheckable(true);
        actionCoordinate_system->setChecked(true);
        actionCoordinate_system->setEnabled(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/coordinate_system.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCoordinate_system->setIcon(icon11);
        actionRedefine_object = new QAction(MainWindow);
        actionRedefine_object->setObjectName(QString::fromUtf8("actionRedefine_object"));
        actionDownsample_point_cloud = new QAction(MainWindow);
        actionDownsample_point_cloud->setObjectName(QString::fromUtf8("actionDownsample_point_cloud"));
        actionDownsample_point_cloud->setEnabled(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/downsample.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDownsample_point_cloud->setIcon(icon12);
        actionUp = new QAction(MainWindow);
        actionUp->setObjectName(QString::fromUtf8("actionUp"));
        actionUp->setEnabled(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/viewAbove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUp->setIcon(icon13);
        actionFront = new QAction(MainWindow);
        actionFront->setObjectName(QString::fromUtf8("actionFront"));
        actionFront->setEnabled(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/viewFront.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFront->setIcon(icon14);
        actionLeft = new QAction(MainWindow);
        actionLeft->setObjectName(QString::fromUtf8("actionLeft"));
        actionLeft->setEnabled(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/viewLeft.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLeft->setIcon(icon15);
        actionRight = new QAction(MainWindow);
        actionRight->setObjectName(QString::fromUtf8("actionRight"));
        actionRight->setEnabled(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/viewRight.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRight->setIcon(icon16);
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        actionBack->setEnabled(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/viewBack.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon17);
        actionShow_info_messages = new QAction(MainWindow);
        actionShow_info_messages->setObjectName(QString::fromUtf8("actionShow_info_messages"));
        actionShow_info_messages->setCheckable(true);
        actionShow_info_messages->setChecked(true);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionUndo->setEnabled(false);
        actionSave_PCD_and_export_objects_info = new QAction(MainWindow);
        actionSave_PCD_and_export_objects_info->setObjectName(QString::fromUtf8("actionSave_PCD_and_export_objects_info"));
        actionQSR_values = new QAction(MainWindow);
        actionQSR_values->setObjectName(QString::fromUtf8("actionQSR_values"));
        actionDescription_of_scene_using_QSR = new QAction(MainWindow);
        actionDescription_of_scene_using_QSR->setObjectName(QString::fromUtf8("actionDescription_of_scene_using_QSR"));
        actionSave_QSR_in_txt_file = new QAction(MainWindow);
        actionSave_QSR_in_txt_file->setObjectName(QString::fromUtf8("actionSave_QSR_in_txt_file"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        qvtkWidget = new QVTKWidget(splitter);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));
        qvtkWidget->setMinimumSize(QSize(400, 400));
        splitter->addWidget(qvtkWidget);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(layoutWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setMinimumSize(QSize(250, 0));
        treeWidget->setMaximumSize(QSize(250, 200));

        verticalLayout_6->addWidget(treeWidget);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setFrameShape(QFrame::Panel);
        label_4->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(81, 0));

        horizontalLayout->addWidget(label_3);

        boxLengthLess = new QToolButton(layoutWidget);
        boxLengthLess->setObjectName(QString::fromUtf8("boxLengthLess"));
        boxLengthLess->setMinimumSize(QSize(22, 0));

        horizontalLayout->addWidget(boxLengthLess);

        boxLength = new QDoubleSpinBox(layoutWidget);
        boxLength->setObjectName(QString::fromUtf8("boxLength"));
        boxLength->setDecimals(1);
        boxLength->setSingleStep(1);

        horizontalLayout->addWidget(boxLength);

        boxLengthMore = new QToolButton(layoutWidget);
        boxLengthMore->setObjectName(QString::fromUtf8("boxLengthMore"));
        boxLengthMore->setMinimumSize(QSize(22, 25));

        horizontalLayout->addWidget(boxLengthMore);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        boxWidthLess = new QToolButton(layoutWidget);
        boxWidthLess->setObjectName(QString::fromUtf8("boxWidthLess"));
        boxWidthLess->setMinimumSize(QSize(22, 25));

        horizontalLayout_2->addWidget(boxWidthLess);

        boxWidth = new QDoubleSpinBox(layoutWidget);
        boxWidth->setObjectName(QString::fromUtf8("boxWidth"));
        boxWidth->setDecimals(1);
        boxWidth->setSingleStep(1);

        horizontalLayout_2->addWidget(boxWidth);

        boxWidthMore = new QToolButton(layoutWidget);
        boxWidthMore->setObjectName(QString::fromUtf8("boxWidthMore"));

        horizontalLayout_2->addWidget(boxWidthMore);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(81, 0));

        horizontalLayout_3->addWidget(label_6);

        boxHeightLess = new QToolButton(layoutWidget);
        boxHeightLess->setObjectName(QString::fromUtf8("boxHeightLess"));
        boxHeightLess->setMinimumSize(QSize(22, 25));

        horizontalLayout_3->addWidget(boxHeightLess);

        boxHeight = new QDoubleSpinBox(layoutWidget);
        boxHeight->setObjectName(QString::fromUtf8("boxHeight"));
        boxHeight->setDecimals(1);
        boxHeight->setSingleStep(1);

        horizontalLayout_3->addWidget(boxHeight);

        boxHeightMore = new QToolButton(layoutWidget);
        boxHeightMore->setObjectName(QString::fromUtf8("boxHeightMore"));

        horizontalLayout_3->addWidget(boxHeightMore);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setFrameShape(QFrame::Panel);
        label_7->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label_7);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, -1, -1);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font1;
        font1.setPointSize(12);
        label_9->setFont(font1);

        gridLayout->addWidget(label_9, 13, 1, 1, 1);

        line_7 = new QFrame(layoutWidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShadow(QFrame::Plain);
        line_7->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line_7, 20, 0, 1, 3);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line, 8, 0, 1, 3);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(label, 6, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        gridLayout->addWidget(label_8, 16, 1, 1, 1);

        buttonPitchLess = new QPushButton(layoutWidget);
        buttonPitchLess->setObjectName(QString::fromUtf8("buttonPitchLess"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/less.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonPitchLess->setIcon(icon18);

        gridLayout->addWidget(buttonPitchLess, 16, 0, 1, 1);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line_4, 14, 0, 1, 3);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line_3, 11, 0, 1, 3);

        buttonRollLess = new QPushButton(layoutWidget);
        buttonRollLess->setObjectName(QString::fromUtf8("buttonRollLess"));
        buttonRollLess->setIcon(icon18);

        gridLayout->addWidget(buttonRollLess, 13, 0, 1, 1);

        buttonYLess = new QPushButton(layoutWidget);
        buttonYLess->setObjectName(QString::fromUtf8("buttonYLess"));
        buttonYLess->setIcon(icon18);

        gridLayout->addWidget(buttonYLess, 6, 0, 1, 1);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line_2, 4, 0, 1, 3);

        buttonXMore = new QPushButton(layoutWidget);
        buttonXMore->setObjectName(QString::fromUtf8("buttonXMore"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonXMore->setIcon(icon19);

        gridLayout->addWidget(buttonXMore, 2, 2, 1, 1);

        buttonZLess = new QPushButton(layoutWidget);
        buttonZLess->setObjectName(QString::fromUtf8("buttonZLess"));
        buttonZLess->setIcon(icon18);

        gridLayout->addWidget(buttonZLess, 10, 0, 1, 1);

        buttonRollMore = new QPushButton(layoutWidget);
        buttonRollMore->setObjectName(QString::fromUtf8("buttonRollMore"));
        buttonRollMore->setIcon(icon19);

        gridLayout->addWidget(buttonRollMore, 13, 2, 1, 1);

        buttonYawLess = new QPushButton(layoutWidget);
        buttonYawLess->setObjectName(QString::fromUtf8("buttonYawLess"));
        buttonYawLess->setIcon(icon18);

        gridLayout->addWidget(buttonYawLess, 19, 0, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        gridLayout->addWidget(label_10, 19, 1, 1, 1);

        poseInfo = new QTreeWidget(layoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        poseInfo->setHeaderItem(__qtreewidgetitem);
        QBrush brush(QColor(211, 211, 211, 255));
        brush.setStyle(Qt::SolidPattern);
        QBrush brush1(QColor(190, 190, 190, 255));
        brush1.setStyle(Qt::SolidPattern);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(poseInfo);
        __qtreewidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        __qtreewidgetitem1->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setBackground(1, brush);
        __qtreewidgetitem1->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem1->setBackground(0, brush);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(poseInfo);
        __qtreewidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        __qtreewidgetitem2->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem2->setBackground(1, brush1);
        __qtreewidgetitem2->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem2->setBackground(0, brush1);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(poseInfo);
        __qtreewidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        __qtreewidgetitem3->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem3->setBackground(1, brush);
        __qtreewidgetitem3->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem3->setBackground(0, brush);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(poseInfo);
        __qtreewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        __qtreewidgetitem4->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem4->setBackground(1, brush1);
        __qtreewidgetitem4->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem4->setBackground(0, brush1);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(poseInfo);
        __qtreewidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        __qtreewidgetitem5->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem5->setBackground(1, brush);
        __qtreewidgetitem5->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem5->setBackground(0, brush);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(poseInfo);
        __qtreewidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        __qtreewidgetitem6->setTextAlignment(1, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem6->setBackground(1, brush1);
        __qtreewidgetitem6->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtreewidgetitem6->setBackground(0, brush1);
        poseInfo->setObjectName(QString::fromUtf8("poseInfo"));
        poseInfo->setMaximumSize(QSize(16777215, 141));
        poseInfo->setIndentation(0);

        gridLayout->addWidget(poseInfo, 0, 0, 1, 3);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setFrameShape(QFrame::Panel);
        label_12->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_12, 1, 0, 1, 3);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QPalette palette;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(255, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush3);
        QBrush brush4(QColor(255, 127, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush4);
        QBrush brush5(QColor(255, 63, 63, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        QBrush brush6(QColor(127, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush6);
        QBrush brush7(QColor(170, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette.setBrush(QPalette::Active, QPalette::Text, brush3);
        QBrush brush8(QColor(255, 255, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush8);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        label_11->setPalette(palette);

        gridLayout->addWidget(label_11, 2, 1, 1, 1);

        buttonPitchMore = new QPushButton(layoutWidget);
        buttonPitchMore->setObjectName(QString::fromUtf8("buttonPitchMore"));
        buttonPitchMore->setIcon(icon19);

        gridLayout->addWidget(buttonPitchMore, 16, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 10, 1, 1, 1);

        buttonYawMore = new QPushButton(layoutWidget);
        buttonYawMore->setObjectName(QString::fromUtf8("buttonYawMore"));
        buttonYawMore->setIcon(icon19);

        gridLayout->addWidget(buttonYawMore, 19, 2, 1, 1);

        line_5 = new QFrame(layoutWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setFrameShape(QFrame::HLine);

        gridLayout->addWidget(line_5, 17, 0, 1, 3);

        buttonYMore = new QPushButton(layoutWidget);
        buttonYMore->setObjectName(QString::fromUtf8("buttonYMore"));
        buttonYMore->setIcon(icon19);

        gridLayout->addWidget(buttonYMore, 6, 2, 1, 1);

        buttonXLess = new QPushButton(layoutWidget);
        buttonXLess->setObjectName(QString::fromUtf8("buttonXLess"));
        buttonXLess->setIcon(icon18);

        gridLayout->addWidget(buttonXLess, 2, 0, 1, 1);

        buttonZMore = new QPushButton(layoutWidget);
        buttonZMore->setObjectName(QString::fromUtf8("buttonZMore"));
        buttonZMore->setIcon(icon19);

        gridLayout->addWidget(buttonZMore, 10, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);

        splitter->addWidget(layoutWidget);

        verticalLayout->addWidget(splitter);


        horizontalLayout_4->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1404, 25));
        menuBar->setMaximumSize(QSize(16777215, 16777215));
        menuObjects = new QMenu(menuBar);
        menuObjects->setObjectName(QString::fromUtf8("menuObjects"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuPreferences = new QMenu(menuEdit);
        menuPreferences->setObjectName(QString::fromUtf8("menuPreferences"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_Display = new QMenu(menuBar);
        menu_Display->setObjectName(QString::fromUtf8("menu_Display"));
        menuChange_viewpoint = new QMenu(menu_Display);
        menuChange_viewpoint->setObjectName(QString::fromUtf8("menuChange_viewpoint"));
        menuQSR = new QMenu(menuBar);
        menuQSR->setObjectName(QString::fromUtf8("menuQSR"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::LeftToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menu_Display->menuAction());
        menuBar->addAction(menuObjects->menuAction());
        menuBar->addAction(menuQSR->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menuObjects->addAction(actionInsert_new_object);
        menuObjects->addAction(actionConfirm_position);
        menuObjects->addAction(actionDelete_object);
        menuEdit->addAction(actionUndo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionAutomatic_plane_detection);
        menuEdit->addAction(actionManual_plane_definition);
        menuEdit->addSeparator();
        menuEdit->addAction(actionRotate_z_180);
        menuEdit->addAction(actionDesk_segmentation);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDownsample_point_cloud);
        menuEdit->addSeparator();
        menuEdit->addAction(menuPreferences->menuAction());
        menuPreferences->addAction(actionShow_info_messages);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_PCD_File);
        menuFile->addAction(actionSave_PCD_and_export_objects_info);
        menuFile->addSeparator();
        menuFile->addAction(actionImport_objects_info);
        menuFile->addAction(actionExport_objects_info);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menu_Help->addAction(actionHelp);
        menu_Display->addAction(actionCoordinate_system);
        menu_Display->addAction(menuChange_viewpoint->menuAction());
        menuChange_viewpoint->addAction(actionUp);
        menuChange_viewpoint->addAction(actionFront);
        menuChange_viewpoint->addAction(actionLeft);
        menuChange_viewpoint->addAction(actionRight);
        menuChange_viewpoint->addAction(actionBack);
        menuQSR->addAction(actionDescription_of_scene_using_QSR);
        menuQSR->addAction(actionQSR_values);
        menuQSR->addAction(actionSave_QSR_in_txt_file);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave_PCD_File);
        mainToolBar->addAction(actionImport_objects_info);
        mainToolBar->addAction(actionExport_objects_info);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAutomatic_plane_detection);
        mainToolBar->addAction(actionManual_plane_definition);
        mainToolBar->addAction(actionRotate_z_180);
        mainToolBar->addAction(actionDesk_segmentation);
        mainToolBar->addAction(actionDownsample_point_cloud);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionInsert_new_object);
        mainToolBar->addAction(actionConfirm_position);
        mainToolBar->addAction(actionDelete_object);
        mainToolBar->addSeparator();
        toolBar->addAction(actionCoordinate_system);
        toolBar->addAction(actionUp);
        toolBar->addAction(actionFront);
        toolBar->addAction(actionLeft);
        toolBar->addAction(actionRight);
        toolBar->addAction(actionBack);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open PCD File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Open PCD File (Ctrl+O)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "&Exit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionSave_PCD_File->setText(QApplication::translate("MainWindow", "&Save PCD File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave_PCD_File->setToolTip(QApplication::translate("MainWindow", "Save PCD File (Ctrl+S)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSave_PCD_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionAutomatic_plane_detection->setText(QApplication::translate("MainWindow", "&Automatic plane detection", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAutomatic_plane_detection->setToolTip(QApplication::translate("MainWindow", "Automatic plane detection (Ctrl+P)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAutomatic_plane_detection->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionManual_plane_definition->setText(QApplication::translate("MainWindow", "&Manual plane definition", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionManual_plane_definition->setToolTip(QApplication::translate("MainWindow", "Manual plane definition (Ctrl+M)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionManual_plane_definition->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        actionRotate_z_180->setText(QApplication::translate("MainWindow", "&Rotate z 180\302\272", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRotate_z_180->setToolTip(QApplication::translate("MainWindow", "Rotate z 180\302\272 (Ctrl+R)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRotate_z_180->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionDesk_segmentation->setText(QApplication::translate("MainWindow", "&Plane segmentation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDesk_segmentation->setToolTip(QApplication::translate("MainWindow", "Plane segmentation (Ctrl+D)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDesk_segmentation->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionInsert_new_object->setText(QApplication::translate("MainWindow", "&Annotate new object", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionInsert_new_object->setToolTip(QApplication::translate("MainWindow", "Insert new object (Ctrl+A)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionInsert_new_object->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionConfirm_position->setText(QApplication::translate("MainWindow", "&Confirm position", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionConfirm_position->setToolTip(QApplication::translate("MainWindow", "Confirm position (Ctrl+C)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionConfirm_position->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionExport_objects_info->setText(QApplication::translate("MainWindow", "&Export objects info", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExport_objects_info->setToolTip(QApplication::translate("MainWindow", "Export objects info (Ctrl+E)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExport_objects_info->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionImport_objects_info->setText(QApplication::translate("MainWindow", "&Import objects info", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionImport_objects_info->setToolTip(QApplication::translate("MainWindow", "Import objects info (Ctrl+I)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionImport_objects_info->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        actionDelete_object->setText(QApplication::translate("MainWindow", "&Delete object", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        actionHelp->setShortcut(QApplication::translate("MainWindow", "F1", 0, QApplication::UnicodeUTF8));
        actionCoordinate_system->setText(QApplication::translate("MainWindow", "&Coordinate system", 0, QApplication::UnicodeUTF8));
        actionRedefine_object->setText(QApplication::translate("MainWindow", "Redefine object", 0, QApplication::UnicodeUTF8));
        actionDownsample_point_cloud->setText(QApplication::translate("MainWindow", "D&ownsample point cloud", 0, QApplication::UnicodeUTF8));
        actionUp->setText(QApplication::translate("MainWindow", "Top view", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionUp->setToolTip(QApplication::translate("MainWindow", "Top view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFront->setText(QApplication::translate("MainWindow", "Front view", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFront->setToolTip(QApplication::translate("MainWindow", "Front view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLeft->setText(QApplication::translate("MainWindow", "Left view", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLeft->setToolTip(QApplication::translate("MainWindow", "Left view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRight->setText(QApplication::translate("MainWindow", "Right view", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRight->setToolTip(QApplication::translate("MainWindow", "Right view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBack->setText(QApplication::translate("MainWindow", "Back view", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBack->setToolTip(QApplication::translate("MainWindow", "Back view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShow_info_messages->setText(QApplication::translate("MainWindow", "Show info messages", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("MainWindow", "&Undo", 0, QApplication::UnicodeUTF8));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionSave_PCD_and_export_objects_info->setText(QApplication::translate("MainWindow", "S&ave PCD and export objects info", 0, QApplication::UnicodeUTF8));
        actionSave_PCD_and_export_objects_info->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionQSR_values->setText(QApplication::translate("MainWindow", "QSR values displayed in the terminal", 0, QApplication::UnicodeUTF8));
        actionQSR_values->setShortcut(QApplication::translate("MainWindow", "F3", 0, QApplication::UnicodeUTF8));
        actionDescription_of_scene_using_QSR->setText(QApplication::translate("MainWindow", "Description of scene using QSR", 0, QApplication::UnicodeUTF8));
        actionDescription_of_scene_using_QSR->setShortcut(QApplication::translate("MainWindow", "F2", 0, QApplication::UnicodeUTF8));
        actionSave_QSR_in_txt_file->setText(QApplication::translate("MainWindow", "Save QSR in .txt file", 0, QApplication::UnicodeUTF8));
        actionSave_QSR_in_txt_file->setShortcut(QApplication::translate("MainWindow", "F4", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "Information", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "Table", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "Objects", 0, QApplication::UnicodeUTF8));
        treeWidget->setSortingEnabled(__sortingEnabled);

        label_4->setText(QApplication::translate("MainWindow", "Bounding Box Size", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Length (cm):", 0, QApplication::UnicodeUTF8));
        boxLengthLess->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        boxLengthMore->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Width (cm):  ", 0, QApplication::UnicodeUTF8));
        boxWidthLess->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        boxWidthMore->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Height (cm):", 0, QApplication::UnicodeUTF8));
        boxHeightLess->setText(QApplication::translate("MainWindow", "-", 0, QApplication::UnicodeUTF8));
        boxHeightMore->setText(QApplication::translate("MainWindow", "+", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Object Pose", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">     Roll</p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#00e100;\">        Y</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">     Pitch</p></body></html>", 0, QApplication::UnicodeUTF8));
        buttonPitchLess->setText(QString());
        buttonRollLess->setText(QString());
        buttonYLess->setText(QString());
        buttonXMore->setText(QString());
        buttonZLess->setText(QString());
        buttonRollMore->setText(QString());
        buttonYawLess->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">     Yaw</p></body></html>", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = poseInfo->headerItem();
        ___qtreewidgetitem3->setText(1, QApplication::translate("MainWindow", "Value", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Pose", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = poseInfo->isSortingEnabled();
        poseInfo->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem4 = poseInfo->topLevelItem(0);
        ___qtreewidgetitem4->setText(1, QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "X (m)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = poseInfo->topLevelItem(1);
        ___qtreewidgetitem5->setText(1, QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "Y (m)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = poseInfo->topLevelItem(2);
        ___qtreewidgetitem6->setText(1, QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "Z (m)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = poseInfo->topLevelItem(3);
        ___qtreewidgetitem7->setText(1, QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem7->setText(0, QApplication::translate("MainWindow", "Roll (\302\272)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = poseInfo->topLevelItem(4);
        ___qtreewidgetitem8->setText(1, QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem8->setText(0, QApplication::translate("MainWindow", "Pitch (\302\272)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem9 = poseInfo->topLevelItem(5);
        ___qtreewidgetitem9->setText(1, QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem9->setText(0, QApplication::translate("MainWindow", "Yaw (\302\272)", 0, QApplication::UnicodeUTF8));
        poseInfo->setSortingEnabled(__sortingEnabled1);

        label_12->setText(QApplication::translate("MainWindow", "Pose Interaction", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#ff0000;\">X</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        buttonPitchMore->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#0040c2;\">Z </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        buttonYawMore->setText(QString());
        buttonYMore->setText(QString());
        buttonXLess->setText(QString());
        buttonZMore->setText(QString());
        menuObjects->setTitle(QApplication::translate("MainWindow", "&Objects", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        menuPreferences->setTitle(QApplication::translate("MainWindow", "Pre&ferences", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menu_Display->setTitle(QApplication::translate("MainWindow", "&Display", 0, QApplication::UnicodeUTF8));
        menuChange_viewpoint->setTitle(QApplication::translate("MainWindow", "Perspective", 0, QApplication::UnicodeUTF8));
        menuQSR->setTitle(QApplication::translate("MainWindow", "&QSR", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
