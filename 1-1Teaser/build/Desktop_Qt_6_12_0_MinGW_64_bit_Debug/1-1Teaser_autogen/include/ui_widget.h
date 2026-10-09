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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *FirstNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *LastNameLineEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QTextEdit *messageTextEdit;
    QPushButton *SubmitButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(637, 299);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(Widget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        FirstNameLineEdit = new QLineEdit(Widget);
        FirstNameLineEdit->setObjectName("FirstNameLineEdit");

        horizontalLayout_3->addWidget(FirstNameLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        LastNameLineEdit = new QLineEdit(Widget);
        LastNameLineEdit->setObjectName("LastNameLineEdit");

        horizontalLayout_2->addWidget(LastNameLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        messageTextEdit = new QTextEdit(Widget);
        messageTextEdit->setObjectName("messageTextEdit");

        horizontalLayout->addWidget(messageTextEdit);


        verticalLayout->addLayout(horizontalLayout);

        SubmitButton = new QPushButton(Widget);
        SubmitButton->setObjectName("SubmitButton");

        verticalLayout->addWidget(SubmitButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "FirstName :", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "LastName :", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Message :", nullptr));
        SubmitButton->setText(QCoreApplication::translate("Widget", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
