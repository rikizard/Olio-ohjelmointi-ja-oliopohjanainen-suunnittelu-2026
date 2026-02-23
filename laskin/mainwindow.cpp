#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Alustetaan muuttujat
    number1 = "";
    number2 = "";
    operand = -1;
    state = 1; // Aloitetaan syöttämään number1

    // Vaihe 2: Liitetään numeronapit samaan handleriin
    QPushButton* numberButtons[] = {
        ui->N0, ui->N1, ui->N2, ui->N3, ui->N4,
        ui->N5, ui->N6, ui->N7, ui->N8, ui->N9
    };

    for (int i = 0; i < 10; i++) {
        connect(numberButtons[i], &QPushButton::clicked,
                this, &MainWindow::numberClickHandler);
    }

    // Vaihe 3: Liitetään operaatiot
    connect(ui->add, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::operationClickHandler);
    connect(ui->divBtn, &QPushButton::clicked, this, &MainWindow::operationClickHandler);

    // Vaihe 4: Liitetään Clear ja Enter
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearClickHandler);
    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::enterClickHandler);
}

// Vaihe 5: Slot-funktiot

void MainWindow::numberClickHandler() {
    QPushButton *btn = qobject_cast<QPushButton*>(sender());
    if (!btn) return;

    QString digit = btn->text();

    if (state == 1) {
        number1 += digit;
        ui->num1->setText(number1);
    } else {
        number2 += digit;
        ui->num2->setText(number2);
    }

    qDebug() << "number1:" << number1 << " number2:" << number2;
}

void MainWindow::operationClickHandler() {
    QPushButton *btn = qobject_cast<QPushButton*>(sender());
    if (!btn) return;

    QString op = btn->text();

    if (op == "+") operand = 0;
    else if (op == "-") operand = 1;
    else if (op == "*") operand = 2;
    else if (op == "/") operand = 3;

    state = 2; // siirrytään syöttämään number2
}

void MainWindow::clearClickHandler() {
    number1 = "";
    number2 = "";
    operand = -1;
    state = 1;

    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

void MainWindow::enterClickHandler() {
    if (number1.isEmpty() || number2.isEmpty() || operand == -1) return;

    float n1 = number1.toFloat();
    float n2 = number2.toFloat();
    float res = 0;

    switch (operand) {
    case 0: res = n1 + n2; break;
    case 1: res = n1 - n2; break;
    case 2: res = n1 * n2; break;
    case 3:
        if (n2 != 0) res = n1 / n2;
        else { ui->result->setText("Error"); return; }
        break;
    }

    ui->result->setText(QString::number(res));
}

MainWindow::~MainWindow()
{
    delete ui;
}
