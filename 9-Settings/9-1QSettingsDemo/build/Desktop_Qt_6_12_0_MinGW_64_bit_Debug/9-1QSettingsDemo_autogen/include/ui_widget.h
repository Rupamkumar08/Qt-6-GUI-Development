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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *buttonOne;
    QPushButton *buttonTwo;
    QPushButton *buttonThree;
    QPushButton *buttonFour;
    QPushButton *buttonFive;
    QPushButton *buttonSix;
    QPushButton *buttonSeven;
    QPushButton *buttonEight;
    QPushButton *buttonNine;
    QPushButton *saveButton;
    QPushButton *loadButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(685, 237);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        buttonOne = new QPushButton(Widget);
        buttonOne->setObjectName("buttonOne");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonOne->sizePolicy().hasHeightForWidth());
        buttonOne->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonOne, 0, 0, 1, 1);

        buttonTwo = new QPushButton(Widget);
        buttonTwo->setObjectName("buttonTwo");
        sizePolicy.setHeightForWidth(buttonTwo->sizePolicy().hasHeightForWidth());
        buttonTwo->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonTwo, 0, 1, 1, 1);

        buttonThree = new QPushButton(Widget);
        buttonThree->setObjectName("buttonThree");
        sizePolicy.setHeightForWidth(buttonThree->sizePolicy().hasHeightForWidth());
        buttonThree->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonThree, 0, 2, 1, 1);

        buttonFour = new QPushButton(Widget);
        buttonFour->setObjectName("buttonFour");
        sizePolicy.setHeightForWidth(buttonFour->sizePolicy().hasHeightForWidth());
        buttonFour->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonFour, 1, 0, 1, 1);

        buttonFive = new QPushButton(Widget);
        buttonFive->setObjectName("buttonFive");
        sizePolicy.setHeightForWidth(buttonFive->sizePolicy().hasHeightForWidth());
        buttonFive->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonFive, 1, 1, 1, 1);

        buttonSix = new QPushButton(Widget);
        buttonSix->setObjectName("buttonSix");
        sizePolicy.setHeightForWidth(buttonSix->sizePolicy().hasHeightForWidth());
        buttonSix->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonSix, 1, 2, 1, 1);

        buttonSeven = new QPushButton(Widget);
        buttonSeven->setObjectName("buttonSeven");
        sizePolicy.setHeightForWidth(buttonSeven->sizePolicy().hasHeightForWidth());
        buttonSeven->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonSeven, 2, 0, 1, 1);

        buttonEight = new QPushButton(Widget);
        buttonEight->setObjectName("buttonEight");
        sizePolicy.setHeightForWidth(buttonEight->sizePolicy().hasHeightForWidth());
        buttonEight->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonEight, 2, 1, 1, 1);

        buttonNine = new QPushButton(Widget);
        buttonNine->setObjectName("buttonNine");
        sizePolicy.setHeightForWidth(buttonNine->sizePolicy().hasHeightForWidth());
        buttonNine->setSizePolicy(sizePolicy);

        gridLayout->addWidget(buttonNine, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        saveButton = new QPushButton(Widget);
        saveButton->setObjectName("saveButton");

        verticalLayout->addWidget(saveButton);

        loadButton = new QPushButton(Widget);
        loadButton->setObjectName("loadButton");

        verticalLayout->addWidget(loadButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        buttonOne->setText(QCoreApplication::translate("Widget", "One", nullptr));
        buttonTwo->setText(QCoreApplication::translate("Widget", "Two", nullptr));
        buttonThree->setText(QCoreApplication::translate("Widget", "Three", nullptr));
        buttonFour->setText(QCoreApplication::translate("Widget", "Four", nullptr));
        buttonFive->setText(QCoreApplication::translate("Widget", "Five", nullptr));
        buttonSix->setText(QCoreApplication::translate("Widget", "Six", nullptr));
        buttonSeven->setText(QCoreApplication::translate("Widget", "Seven", nullptr));
        buttonEight->setText(QCoreApplication::translate("Widget", "Eight", nullptr));
        buttonNine->setText(QCoreApplication::translate("Widget", "Nine", nullptr));
        saveButton->setText(QCoreApplication::translate("Widget", "Save Settings", nullptr));
        loadButton->setText(QCoreApplication::translate("Widget", "Load Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
