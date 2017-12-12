/********************************************************************************
** Form generated from reading UI file 'geom_ex.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEOM_EX_H
#define UI_GEOM_EX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "../../qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_geom_ex
{
public:
    QGridLayout *gridLayout;
    QLabel *ycoord;
    QLabel *xcoord;
    QSpacerItem *horizontalSpacer;
    QCustomPlot *mapplot;

    void setupUi(QWidget *geom_ex)
    {
        if (geom_ex->objectName().isEmpty())
            geom_ex->setObjectName(QString::fromUtf8("geom_ex"));
        geom_ex->resize(750, 700);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(geom_ex->sizePolicy().hasHeightForWidth());
        geom_ex->setSizePolicy(sizePolicy);
        geom_ex->setMinimumSize(QSize(400, 400));
        gridLayout = new QGridLayout(geom_ex);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ycoord = new QLabel(geom_ex);
        ycoord->setObjectName(QString::fromUtf8("ycoord"));
        ycoord->setMaximumSize(QSize(100, 25));
        QFont font;
        font.setPointSize(10);
        ycoord->setFont(font);

        gridLayout->addWidget(ycoord, 2, 3, 1, 1);

        xcoord = new QLabel(geom_ex);
        xcoord->setObjectName(QString::fromUtf8("xcoord"));
        xcoord->setMaximumSize(QSize(100, 25));
        xcoord->setFont(font);

        gridLayout->addWidget(xcoord, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 2);

        mapplot = new QCustomPlot(geom_ex);
        mapplot->setObjectName(QString::fromUtf8("mapplot"));
        mapplot->setMinimumSize(QSize(300, 300));
        mapplot->setCursor(QCursor(Qt::CrossCursor));

        gridLayout->addWidget(mapplot, 0, 0, 1, 4);


        retranslateUi(geom_ex);

        QMetaObject::connectSlotsByName(geom_ex);
    } // setupUi

    void retranslateUi(QWidget *geom_ex)
    {
        geom_ex->setWindowTitle(QApplication::translate("geom_ex", "Geometry Map", 0, QApplication::UnicodeUTF8));
        ycoord->setText(QApplication::translate("geom_ex", "Y=", 0, QApplication::UnicodeUTF8));
        xcoord->setText(QApplication::translate("geom_ex", "X=", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class geom_ex: public Ui_geom_ex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEOM_EX_H
