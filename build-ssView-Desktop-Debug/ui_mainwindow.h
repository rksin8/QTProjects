/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreate_model;
    QAction *actionExplore_seq;
    QAction *actionExit;
    QAction *actionConvert_SEGD_to_SEGY;
    QAction *actionAbout;
    QAction *actionCreate_geometry_from_model;
    QAction *actionExplore_SEGY_by_groups;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QListWidget *listWidget;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QMenuBar *menuBar;
    QMenu *menuOpen_Model;
    QMenu *menuModel;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(660, 656);
        MainWindow->setAutoFillBackground(true);
        actionCreate_model = new QAction(MainWindow);
        actionCreate_model->setObjectName(QString::fromUtf8("actionCreate_model"));
        actionExplore_seq = new QAction(MainWindow);
        actionExplore_seq->setObjectName(QString::fromUtf8("actionExplore_seq"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionConvert_SEGD_to_SEGY = new QAction(MainWindow);
        actionConvert_SEGD_to_SEGY->setObjectName(QString::fromUtf8("actionConvert_SEGD_to_SEGY"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionCreate_geometry_from_model = new QAction(MainWindow);
        actionCreate_geometry_from_model->setObjectName(QString::fromUtf8("actionCreate_geometry_from_model"));
        actionCreate_geometry_from_model->setEnabled(false);
        actionExplore_SEGY_by_groups = new QAction(MainWindow);
        actionExplore_SEGY_by_groups->setObjectName(QString::fromUtf8("actionExplore_SEGY_by_groups"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        verticalLayout->addWidget(tableWidget);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listWidget->setTabKeyNavigation(true);
        listWidget->setSelectionRectVisible(false);

        verticalLayout->addWidget(listWidget);

        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 660, 21));
        menuOpen_Model = new QMenu(menuBar);
        menuOpen_Model->setObjectName(QString::fromUtf8("menuOpen_Model"));
        menuModel = new QMenu(menuOpen_Model);
        menuModel->setObjectName(QString::fromUtf8("menuModel"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuOpen_Model->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuOpen_Model->addAction(menuModel->menuAction());
        menuOpen_Model->addAction(actionExit);
        menuModel->addAction(actionCreate_model);
        menuModel->addAction(actionConvert_SEGD_to_SEGY);
        menuModel->addAction(actionExplore_seq);
        menuModel->addAction(actionExplore_SEGY_by_groups);
        menuModel->addAction(actionCreate_geometry_from_model);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionCreate_model->setText(QApplication::translate("MainWindow", "Create model", 0, QApplication::UnicodeUTF8));
        actionExplore_seq->setText(QApplication::translate("MainWindow", "Explore SEGY sequentially", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionConvert_SEGD_to_SEGY->setText(QApplication::translate("MainWindow", "Convert SEGD to SEGY", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionCreate_geometry_from_model->setText(QApplication::translate("MainWindow", "Create geometry from model", 0, QApplication::UnicodeUTF8));
        actionExplore_SEGY_by_groups->setText(QApplication::translate("MainWindow", "Explore SEGY by groups", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "EBCDIC", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "Binary Header", 0, QApplication::UnicodeUTF8));
        menuOpen_Model->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuModel->setTitle(QApplication::translate("MainWindow", "SEGY", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
