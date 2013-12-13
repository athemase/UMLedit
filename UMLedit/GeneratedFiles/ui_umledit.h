/********************************************************************************
** Form generated from reading UI file 'umledit.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UMLEDIT_H
#define UI_UMLEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UMLeditClass
{
public:
    QAction *actionExport_File;
    QAction *actionSet_Name;
    QAction *actionUngroup;
    QAction *actionGroup;
    QWidget *centralWidget;
    QGraphicsView *DrawWindow;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UMLeditClass)
    {
        if (UMLeditClass->objectName().isEmpty())
            UMLeditClass->setObjectName(QString::fromUtf8("UMLeditClass"));
        UMLeditClass->resize(976, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UMLeditClass->sizePolicy().hasHeightForWidth());
        UMLeditClass->setSizePolicy(sizePolicy);
        actionExport_File = new QAction(UMLeditClass);
        actionExport_File->setObjectName(QString::fromUtf8("actionExport_File"));
        actionSet_Name = new QAction(UMLeditClass);
        actionSet_Name->setObjectName(QString::fromUtf8("actionSet_Name"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("image/Text.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSet_Name->setIcon(icon);
        actionUngroup = new QAction(UMLeditClass);
        actionUngroup->setObjectName(QString::fromUtf8("actionUngroup"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("image/Ungroup.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUngroup->setIcon(icon1);
        actionGroup = new QAction(UMLeditClass);
        actionGroup->setObjectName(QString::fromUtf8("actionGroup"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("image/Group.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGroup->setIcon(icon2);
        centralWidget = new QWidget(UMLeditClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        DrawWindow = new QGraphicsView(centralWidget);
        DrawWindow->setObjectName(QString::fromUtf8("DrawWindow"));
        DrawWindow->setGeometry(QRect(0, 0, 941, 551));
        UMLeditClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(UMLeditClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 976, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        UMLeditClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(UMLeditClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy1);
        mainToolBar->setMovable(false);
        UMLeditClass->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(UMLeditClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        UMLeditClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionExport_File);
        mainToolBar->addAction(actionSet_Name);
        mainToolBar->addAction(actionGroup);
        mainToolBar->addAction(actionUngroup);
        mainToolBar->addSeparator();

        retranslateUi(UMLeditClass);

        QMetaObject::connectSlotsByName(UMLeditClass);
    } // setupUi

    void retranslateUi(QMainWindow *UMLeditClass)
    {
        UMLeditClass->setWindowTitle(QApplication::translate("UMLeditClass", "UMLedit", 0, QApplication::UnicodeUTF8));
        actionExport_File->setText(QApplication::translate("UMLeditClass", "Export File", 0, QApplication::UnicodeUTF8));
        actionSet_Name->setText(QApplication::translate("UMLeditClass", "Set_Name", 0, QApplication::UnicodeUTF8));
        actionUngroup->setText(QApplication::translate("UMLeditClass", "Ungroup", 0, QApplication::UnicodeUTF8));
        actionGroup->setText(QApplication::translate("UMLeditClass", "Group", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("UMLeditClass", "File", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("UMLeditClass", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UMLeditClass: public Ui_UMLeditClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UMLEDIT_H
