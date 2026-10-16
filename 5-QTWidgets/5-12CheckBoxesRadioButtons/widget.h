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
    void on_windowsCheckBox_toggled(bool checked);

    void on_beerCheckBox_toggled(bool checked);

    void on_grabDataButton_clicked();

    void on_setDataButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
