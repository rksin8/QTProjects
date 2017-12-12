/********************************************************************************
** Form generated from reading UI file 'trace_group_ex.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACE_GROUP_EX_H
#define UI_TRACE_GROUP_EX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "../../qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_trace_group_ex
{
public:
    QVBoxLayout *verticalLayout;
    QCustomPlot *tracePlot;
    QGraphicsView *graphicsView;
    QSplitter *splitter_4;
    QSplitter *splitter;
    QLabel *initrl;
    QSpinBox *spinBox;
    QSplitter *splitter_2;
    QLabel *endtrl;
    QSpinBox *spinBox_2;
    QSplitter *splitter_3;
    QLabel *gainlabel;
    QDoubleSpinBox *spinBox_3;
    QPushButton *pushButton;

    void setupUi(QWidget *trace_group_ex)
    {
        if (trace_group_ex->objectName().isEmpty())
            trace_group_ex->setObjectName(QString::fromUtf8("trace_group_ex"));
        trace_group_ex->resize(1018, 667);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trace_group_ex->sizePolicy().hasHeightForWidth());
        trace_group_ex->setSizePolicy(sizePolicy);
        trace_group_ex->setMaximumSize(QSize(2048, 16777215));
        trace_group_ex->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(trace_group_ex);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tracePlot = new QCustomPlot(trace_group_ex);
        tracePlot->setObjectName(QString::fromUtf8("tracePlot"));
        tracePlot->setMinimumSize(QSize(200, 300));
        tracePlot->setMaximumSize(QSize(2048, 16777215));

        verticalLayout->addWidget(tracePlot);

        graphicsView = new QGraphicsView(trace_group_ex);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        splitter_4 = new QSplitter(trace_group_ex);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_4);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        initrl = new QLabel(splitter);
        initrl->setObjectName(QString::fromUtf8("initrl"));
        splitter->addWidget(initrl);
        spinBox = new QSpinBox(splitter);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimumSize(QSize(100, 0));
        spinBox->setMaximumSize(QSize(100, 16777215));
        spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox->setMinimum(1);
        spinBox->setMaximum(10000000);
        spinBox->setValue(1);
        splitter->addWidget(spinBox);
        splitter_4->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_4);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        endtrl = new QLabel(splitter_2);
        endtrl->setObjectName(QString::fromUtf8("endtrl"));
        splitter_2->addWidget(endtrl);
        spinBox_2 = new QSpinBox(splitter_2);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimumSize(QSize(100, 0));
        spinBox_2->setMaximumSize(QSize(100, 16777215));
        spinBox_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(10000000);
        spinBox_2->setValue(1);
        splitter_2->addWidget(spinBox_2);
        splitter_4->addWidget(splitter_2);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Vertical);
        gainlabel = new QLabel(splitter_3);
        gainlabel->setObjectName(QString::fromUtf8("gainlabel"));
        splitter_3->addWidget(gainlabel);
        spinBox_3 = new QDoubleSpinBox(splitter_3);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimumSize(QSize(100, 0));
        spinBox_3->setMaximumSize(QSize(100, 16777215));
        spinBox_3->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox_3->setDecimals(4);
        spinBox_3->setMaximum(1e+08);
        spinBox_3->setValue(1);
        splitter_3->addWidget(spinBox_3);
        splitter_4->addWidget(splitter_3);
        pushButton = new QPushButton(splitter_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 40));
        pushButton->setMaximumSize(QSize(60, 40));
        splitter_4->addWidget(pushButton);

        verticalLayout->addWidget(splitter_4);

        QWidget::setTabOrder(pushButton, spinBox);
        QWidget::setTabOrder(spinBox, spinBox_2);

        retranslateUi(trace_group_ex);

        QMetaObject::connectSlotsByName(trace_group_ex);
    } // setupUi

    void retranslateUi(QWidget *trace_group_ex)
    {
        trace_group_ex->setWindowTitle(QApplication::translate("trace_group_ex", "Form", 0, QApplication::UnicodeUTF8));
        initrl->setText(QApplication::translate("trace_group_ex", "Initial trace", 0, QApplication::UnicodeUTF8));
        endtrl->setText(QApplication::translate("trace_group_ex", "Number of traces", 0, QApplication::UnicodeUTF8));
        gainlabel->setText(QApplication::translate("trace_group_ex", "Gain", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("trace_group_ex", "Refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class trace_group_ex: public Ui_trace_group_ex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACE_GROUP_EX_H
