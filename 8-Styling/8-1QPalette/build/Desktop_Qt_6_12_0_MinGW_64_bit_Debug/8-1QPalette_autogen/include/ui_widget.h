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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *activeButton;
    QPushButton *disabledButton;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(549, 61);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        activeButton = new QPushButton(Widget);
        activeButton->setObjectName("activeButton");

        horizontalLayout->addWidget(activeButton);

        disabledButton = new QPushButton(Widget);
        disabledButton->setObjectName("disabledButton");
        disabledButton->setEnabled(false);

        horizontalLayout->addWidget(disabledButton);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(Widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        activeButton->setText(QCoreApplication::translate("Widget", "Active", nullptr));
        disabledButton->setText(QCoreApplication::translate("Widget", "Disabled", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Some Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
