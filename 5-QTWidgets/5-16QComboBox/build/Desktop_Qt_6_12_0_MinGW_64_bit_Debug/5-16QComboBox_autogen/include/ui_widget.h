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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout;
    QPushButton *captureButton;
    QPushButton *setButton;
    QPushButton *listValuesButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(683, 94);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName("comboBox");

        horizontalLayout->addWidget(comboBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        captureButton = new QPushButton(Widget);
        captureButton->setObjectName("captureButton");

        verticalLayout->addWidget(captureButton);

        setButton = new QPushButton(Widget);
        setButton->setObjectName("setButton");

        verticalLayout->addWidget(setButton);

        listValuesButton = new QPushButton(Widget);
        listValuesButton->setObjectName("listValuesButton");

        verticalLayout->addWidget(listValuesButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        captureButton->setText(QCoreApplication::translate("Widget", "Capture Current Value", nullptr));
        setButton->setText(QCoreApplication::translate("Widget", "Set Current Value", nullptr));
        listValuesButton->setText(QCoreApplication::translate("Widget", "List All Values", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
