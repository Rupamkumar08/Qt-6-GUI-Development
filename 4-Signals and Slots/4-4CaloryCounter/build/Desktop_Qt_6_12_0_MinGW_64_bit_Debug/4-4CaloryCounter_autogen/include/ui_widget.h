/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QLabel *caloryCountLabel;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QDoubleSpinBox *speedSpinBox;
    QLabel *label_9;
    QComboBox *comboBox_2;
    QDoubleSpinBox *timeSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *weightSpinBox;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(567, 256);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        Widget->setFont(font);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setObjectName("gridLayout_2");
        caloryCountLabel = new QLabel(Widget);
        caloryCountLabel->setObjectName("caloryCountLabel");
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        caloryCountLabel->setFont(font1);
        caloryCountLabel->setStyleSheet(QString::fromUtf8("color: rgb(200, 16, 65);"));

        gridLayout_2->addWidget(caloryCountLabel, 0, 1, 1, 1);

        label = new QLabel(Widget);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_10 = new QLabel(Widget);
        label_10->setObjectName("label_10");
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(false);
        label_10->setFont(font2);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);

        horizontalLayout_4->addWidget(label_6);

        speedSpinBox = new QDoubleSpinBox(Widget);
        speedSpinBox->setObjectName("speedSpinBox");
        speedSpinBox->setFont(font2);
        speedSpinBox->setValue(6.000000000000000);

        horizontalLayout_4->addWidget(speedSpinBox);


        gridLayout->addLayout(horizontalLayout_4, 1, 3, 1, 2);

        label_9 = new QLabel(Widget);
        label_9->setObjectName("label_9");
        label_9->setFont(font2);

        gridLayout->addWidget(label_9, 0, 3, 1, 1);

        comboBox_2 = new QComboBox(Widget);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setFont(font2);

        gridLayout->addWidget(comboBox_2, 0, 4, 1, 1);

        timeSpinBox = new QDoubleSpinBox(Widget);
        timeSpinBox->setObjectName("timeSpinBox");
        timeSpinBox->setFont(font2);
        timeSpinBox->setValue(1.000000000000000);

        gridLayout->addWidget(timeSpinBox, 0, 1, 1, 1);

        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        weightSpinBox = new QDoubleSpinBox(Widget);
        weightSpinBox->setObjectName("weightSpinBox");
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        font3.setKerning(false);
        weightSpinBox->setFont(font3);
        weightSpinBox->setValue(70.000000000000000);

        gridLayout->addWidget(weightSpinBox, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Calories Counter", nullptr));
        caloryCountLabel->setText(QCoreApplication::translate("Widget", "100", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Calories Count :", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "Time (h) :", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "Speed (km/h) :", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "Slope :", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Widget", "Level", nullptr));

        label_4->setText(QCoreApplication::translate("Widget", "Weight (Kg) :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
