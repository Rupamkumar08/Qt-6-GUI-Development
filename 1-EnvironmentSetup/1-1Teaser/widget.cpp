#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_SubmitButton_clicked()
{
    qDebug() << "Hello there";
    qDebug() <<"FirstName : " << ui->FirstNameLineEdit->text();
    qDebug() <<"LastName : " << ui->LastNameLineEdit->text();
    qDebug() <<"Message : " << ui->messageTextEdit->toPlainText();

}

