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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button7;
    QPushButton *button9;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(676, 74);
        button1 = new QPushButton(Widget);
        button1->setObjectName("button1");
        button1->setGeometry(QRect(90, 50, 56, 18));
        button2 = new QPushButton(Widget);
        button2->setObjectName("button2");
        button2->setGeometry(QRect(200, 50, 56, 18));
        button3 = new QPushButton(Widget);
        button3->setObjectName("button3");
        button3->setGeometry(QRect(330, 50, 56, 18));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy);
        button4 = new QPushButton(Widget);
        button4->setObjectName("button4");
        button4->setGeometry(QRect(90, 100, 56, 18));
        button5 = new QPushButton(Widget);
        button5->setObjectName("button5");
        button5->setGeometry(QRect(200, 100, 56, 18));
        button7 = new QPushButton(Widget);
        button7->setObjectName("button7");
        button7->setGeometry(QRect(100, 150, 56, 18));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button7->sizePolicy().hasHeightForWidth());
        button7->setSizePolicy(sizePolicy1);
        button9 = new QPushButton(Widget);
        button9->setObjectName("button9");
        button9->setGeometry(QRect(330, 150, 56, 18));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        button1->setText(QCoreApplication::translate("Widget", "One", nullptr));
        button2->setText(QCoreApplication::translate("Widget", "Two", nullptr));
        button3->setText(QCoreApplication::translate("Widget", "Three", nullptr));
        button4->setText(QCoreApplication::translate("Widget", "Four", nullptr));
        button5->setText(QCoreApplication::translate("Widget", "Five", nullptr));
        button7->setText(QCoreApplication::translate("Widget", "Seven", nullptr));
        button9->setText(QCoreApplication::translate("Widget", "Nine", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
