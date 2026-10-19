#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget() override;

private slots:
    void on_chooseDirButton_clicked();

    void on_createDirButton_clicked();

    void on_dirExistsButton_clicked();

    void on_dirOrFileButton_clicked();

    void on_folderContent_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
