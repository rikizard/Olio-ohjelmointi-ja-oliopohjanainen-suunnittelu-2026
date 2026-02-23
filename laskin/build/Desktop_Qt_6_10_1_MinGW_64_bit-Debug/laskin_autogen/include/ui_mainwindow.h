/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *num2;
    QLineEdit *result;
    QPushButton *mul;
    QPushButton *N1;
    QPushButton *N3;
    QPushButton *add;
    QPushButton *N9;
    QLineEdit *num1;
    QPushButton *sub;
    QPushButton *N0;
    QPushButton *enter;
    QPushButton *N;
    QLabel *label_3;
    QLabel *label;
    QPushButton *N8;
    QLabel *label_2;
    QPushButton *N4;
    QPushButton *N2;
    QPushButton *N5;
    QPushButton *N6;
    QPushButton *divBtn;
    QPushButton *enter_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(320, 110, 254, 266));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        num2 = new QLineEdit(gridLayoutWidget);
        num2->setObjectName("num2");

        gridLayout->addWidget(num2, 1, 1, 1, 1);

        result = new QLineEdit(gridLayoutWidget);
        result->setObjectName("result");

        gridLayout->addWidget(result, 2, 1, 1, 1);

        mul = new QPushButton(gridLayoutWidget);
        mul->setObjectName("mul");

        gridLayout->addWidget(mul, 2, 2, 1, 1);

        N1 = new QPushButton(gridLayoutWidget);
        N1->setObjectName("N1");

        gridLayout->addWidget(N1, 5, 1, 1, 1);

        N3 = new QPushButton(gridLayoutWidget);
        N3->setObjectName("N3");

        gridLayout->addWidget(N3, 6, 0, 1, 1);

        add = new QPushButton(gridLayoutWidget);
        add->setObjectName("add");

        gridLayout->addWidget(add, 0, 2, 1, 1);

        N9 = new QPushButton(gridLayoutWidget);
        N9->setObjectName("N9");

        gridLayout->addWidget(N9, 8, 0, 1, 1);

        num1 = new QLineEdit(gridLayoutWidget);
        num1->setObjectName("num1");

        gridLayout->addWidget(num1, 0, 1, 1, 1);

        sub = new QPushButton(gridLayoutWidget);
        sub->setObjectName("sub");

        gridLayout->addWidget(sub, 1, 2, 1, 1);

        N0 = new QPushButton(gridLayoutWidget);
        N0->setObjectName("N0");

        gridLayout->addWidget(N0, 5, 0, 1, 1);

        enter = new QPushButton(gridLayoutWidget);
        enter->setObjectName("enter");

        gridLayout->addWidget(enter, 3, 1, 1, 1);

        N = new QPushButton(gridLayoutWidget);
        N->setObjectName("N");

        gridLayout->addWidget(N, 7, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        N8 = new QPushButton(gridLayoutWidget);
        N8->setObjectName("N8");

        gridLayout->addWidget(N8, 7, 2, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        N4 = new QPushButton(gridLayoutWidget);
        N4->setObjectName("N4");

        gridLayout->addWidget(N4, 6, 1, 1, 1);

        N2 = new QPushButton(gridLayoutWidget);
        N2->setObjectName("N2");

        gridLayout->addWidget(N2, 5, 2, 1, 1);

        N5 = new QPushButton(gridLayoutWidget);
        N5->setObjectName("N5");

        gridLayout->addWidget(N5, 6, 2, 1, 1);

        N6 = new QPushButton(gridLayoutWidget);
        N6->setObjectName("N6");

        gridLayout->addWidget(N6, 7, 0, 1, 1);

        divBtn = new QPushButton(gridLayoutWidget);
        divBtn->setObjectName("divBtn");

        gridLayout->addWidget(divBtn, 3, 2, 1, 1);

        enter_2 = new QPushButton(gridLayoutWidget);
        enter_2->setObjectName("enter_2");

        gridLayout->addWidget(enter_2, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        num2->setText(QCoreApplication::translate("MainWindow", "num2", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "result", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        num1->setText(QCoreApplication::translate("MainWindow", "num1", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        N->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number1:", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number2:", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        divBtn->setText(QCoreApplication::translate("MainWindow", ":", nullptr));
        enter_2->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
