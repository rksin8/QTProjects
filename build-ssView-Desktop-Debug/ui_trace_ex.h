/********************************************************************************
** Form generated from reading UI file 'trace_ex.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACE_EX_H
#define UI_TRACE_EX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QSplitter>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "../../qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_trace_ex
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_3;
    QTableWidget *tableWidgettr;
    QCustomPlot *tracePlot;
    QSplitter *splitter_2;
    QCustomPlot *specPlot;
    QCustomPlot *wvPlot;
    QSplitter *splitter;
    QSlider *horizontalSlider;
    QLabel *label;

    void setupUi(QWidget *trace_ex)
    {
        if (trace_ex->objectName().isEmpty())
            trace_ex->setObjectName(QString::fromUtf8("trace_ex"));
        trace_ex->resize(1114, 762);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trace_ex->sizePolicy().hasHeightForWidth());
        trace_ex->setSizePolicy(sizePolicy);
        trace_ex->setMaximumSize(QSize(2048, 16777215));
        trace_ex->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(trace_ex);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter_3 = new QSplitter(trace_ex);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        tableWidgettr = new QTableWidget(splitter_3);
        tableWidgettr->setObjectName(QString::fromUtf8("tableWidgettr"));
        tableWidgettr->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidgettr->sizePolicy().hasHeightForWidth());
        tableWidgettr->setSizePolicy(sizePolicy1);
        tableWidgettr->setMinimumSize(QSize(100, 300));
        tableWidgettr->setMaximumSize(QSize(400, 1400));
        tableWidgettr->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgettr->setDragDropOverwriteMode(false);
        splitter_3->addWidget(tableWidgettr);
        tracePlot = new QCustomPlot(splitter_3);
        tracePlot->setObjectName(QString::fromUtf8("tracePlot"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tracePlot->sizePolicy().hasHeightForWidth());
        tracePlot->setSizePolicy(sizePolicy2);
        tracePlot->setMinimumSize(QSize(200, 150));
        tracePlot->setMaximumSize(QSize(350, 1400));
        splitter_3->addWidget(tracePlot);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        specPlot = new QCustomPlot(splitter_2);
        specPlot->setObjectName(QString::fromUtf8("specPlot"));
        specPlot->setMinimumSize(QSize(200, 150));
        specPlot->setMaximumSize(QSize(1600, 600));
        splitter_2->addWidget(specPlot);
        wvPlot = new QCustomPlot(splitter_2);
        wvPlot->setObjectName(QString::fromUtf8("wvPlot"));
        wvPlot->setMinimumSize(QSize(200, 150));
        wvPlot->setMaximumSize(QSize(1600, 600));
        splitter_2->addWidget(wvPlot);
        splitter_3->addWidget(splitter_2);

        verticalLayout->addWidget(splitter_3);

        splitter = new QSplitter(trace_ex);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        horizontalSlider = new QSlider(splitter);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximumSize(QSize(16777215, 40));
        horizontalSlider->setOrientation(Qt::Horizontal);
        splitter->addWidget(horizontalSlider);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(150, 0));
        label->setMaximumSize(QSize(150, 16777215));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setFrameShape(QFrame::Box);
        label->setAlignment(Qt::AlignCenter);
        splitter->addWidget(label);

        verticalLayout->addWidget(splitter);


        retranslateUi(trace_ex);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(trace_ex);
    } // setupUi

    void retranslateUi(QWidget *trace_ex)
    {
        trace_ex->setWindowTitle(QApplication::translate("trace_ex", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("trace_ex", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class trace_ex: public Ui_trace_ex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACE_EX_H
