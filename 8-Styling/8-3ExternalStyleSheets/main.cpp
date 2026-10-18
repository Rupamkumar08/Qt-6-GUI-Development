#include "widget.h"

#include <QApplication>
#include <QFile>

// Reads the CSS file from the specified file path
// And returns a QString

QString readTextFile(QString path)
{
    QFile file(path);

    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        return in.readAll();
    }
    return "";
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Path - :/styles/style.css
    QString css = readTextFile(":/styles/style.css");
    if(css.length() > 0){
        a.setStyleSheet(css);
    }
    Widget w;
    w.show();
    return QApplication::exec();
}
