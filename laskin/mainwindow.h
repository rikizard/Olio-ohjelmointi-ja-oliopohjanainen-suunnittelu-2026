#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void numberClickHandler();      // Kaikkien numeroiden napit
    void operationClickHandler();   // + - * /
    void clearClickHandler();       // Clear-nappi
    void enterClickHandler();       // Enter-nappi

private:
    Ui::MainWindow *ui;

    // Tehtävänannon mukaiset muuttujat
    QString number1;   // ensimmäinen syötetty numero
    QString number2;   // toinen syötetty numero
    int operand;       // 0=+, 1=-, 2=*, 3=/
    int state;         // 1=syötetään number1, 2=syötetään number2
};

#endif // MAINWINDOW_H
