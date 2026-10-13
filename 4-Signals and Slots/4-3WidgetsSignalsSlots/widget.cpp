#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //String notation
    // Here we are connecting one signal to multiple slots

    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
            ui->progressBar,SLOT(setValue(int)));

    // We can have our own slot also setup
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),
           this,SLOT(respond(int)));

    //Functor Notation : Regular Slots
    /*
    connect(ui->horizontalSlider,&QSlider::valueChanged,
            ui->progressBar,&QProgressBar::setValue);
    connect(ui->horizontalSlider,&QSlider::valueChanged,
            this,&Widget::respond);
    */

    //Functor Notation : Lambas
    /*
    connect(ui->horizontalSlider,&QSlider::valueChanged,
            [=] (){
                ui->progressBar->setValue(ui->horizontalSlider->value());
                respond(ui->horizontalSlider->value());
            });
    */

}

Widget::~Widget()
{
    delete ui;
}

void Widget::respond(int value)
{
    qDebug() << "value : " << value;
}