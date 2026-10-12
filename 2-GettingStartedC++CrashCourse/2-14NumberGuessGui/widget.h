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
    void on_guessButton_clicked();
    void on_startOverButton_clicked();

private:
    Ui::Widget *ui;
    int secret_number;
    int guess_number;
};
#endif // WIDGET_H
