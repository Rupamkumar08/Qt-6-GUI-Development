#include "widget.h"
#include "ui_widget.h"
#include <QFileDialog>

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

void Widget::on_chooseButton_clicked()
{
    //getExistingDirectory

    // This is a static function that will return an existing directory
    // selected by the user
    // This function creates a modal file dialog with the given parent
    // widget. If the parent is not nullptr, the dialog will be shown
    // centered over the parent widget
    // If we select a directory the path to that directory will be returned as
    // a QString
    // By default it will open a directory where our binary was built
    // We can provide standard paths as well

    /*
    QString dir = QFileDialog::getExistingDirectory(this, "Open Directory",
                                                      QString(),
                                                      QFileDialog::ShowDirsOnly
                                                      | QFileDialog::DontResolveSymlinks);
    if(!dir.isEmpty()){
        qDebug() << "Your chosed dir is : " << dir;
    }else{
        qDebug() << "You didn't choose anything...";
    }
    */

    //getOpenFileName
    // Allows user to open a file that user would probably want to work with in the application
    /*
    QString fileName = QFileDialog::getOpenFileName(this, "Open File",
                                                      QString(),
                                                      tr("Images (*.png *.xpm *.jpg)"));
    qDebug() << "Your chosed file is : " << fileName;
    */

    //getOpenFileNames
    // Allows us to choose multiple files with specified format
    /*QStringList files = QFileDialog::getOpenFileNames(
                              this,
                              "Select one or more files to open",
                              QString(),
                              "Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)");
    // qDebug() << "Your chosen files are : " << files;*/
    /*for( auto f : files){
        qDebug() <<  f ;
    }*/



    //getSaveFileName
    QString fileName = QFileDialog::getSaveFileName(this, "Save File",
                                                    QString(),
                                                    tr("Images (*.png *.xpm *.jpg)"));
    qDebug() << "Your chosen filename is  : " << fileName;


}

