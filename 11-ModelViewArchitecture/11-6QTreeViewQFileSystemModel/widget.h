#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileSystemModel>
#include <QStandardItemModel>

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
    void on_readDataButton_clicked();

private:
    Ui::Widget *ui;
    QFileSystemModel * dir_model;
    QStandardItemModel * standard_item_tree_model;
};
#endif // WIDGET_H
