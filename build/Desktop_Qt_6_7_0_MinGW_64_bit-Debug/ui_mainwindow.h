/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *HeapSortButton;
    QPushButton *QuickSortButton;
    QPushButton *ShellSortButton;
    QPushButton *removeButton;
    QLabel *label;
    QLineEdit *txtNombre;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtApellido;
    QLineEdit *txtNota;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget1;
    QTableWidget *tableWidget2;
    QTableWidget *tableWidget3;
    QPushButton *addButton;
    QLabel *label_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1259, 550);
        QFont font;
        font.setFamilies({QString::fromUtf8("Cooper")});
        font.setBold(true);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(52, 143, 128);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        HeapSortButton = new QPushButton(centralwidget);
        HeapSortButton->setObjectName("HeapSortButton");
        HeapSortButton->setGeometry(QRect(420, 100, 181, 29));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cooper")});
        font1.setPointSize(10);
        font1.setBold(true);
        HeapSortButton->setFont(font1);
        HeapSortButton->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 144, 144);"));
        QuickSortButton = new QPushButton(centralwidget);
        QuickSortButton->setObjectName("QuickSortButton");
        QuickSortButton->setGeometry(QRect(720, 100, 181, 29));
        QuickSortButton->setFont(font1);
        QuickSortButton->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 144, 144);"));
        ShellSortButton = new QPushButton(centralwidget);
        ShellSortButton->setObjectName("ShellSortButton");
        ShellSortButton->setGeometry(QRect(1020, 100, 171, 29));
        ShellSortButton->setFont(font1);
        ShellSortButton->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 144, 144);"));
        removeButton = new QPushButton(centralwidget);
        removeButton->setObjectName("removeButton");
        removeButton->setGeometry(QRect(240, 90, 83, 29));
        removeButton->setFont(font1);
        removeButton->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 144, 144);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 10, 201, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cooper")});
        font2.setPointSize(12);
        font2.setBold(true);
        label->setFont(font2);
        txtNombre = new QLineEdit(centralwidget);
        txtNombre->setObjectName("txtNombre");
        txtNombre->setGeometry(QRect(110, 40, 121, 28));
        txtNombre->setFont(font1);
        txtNombre->setStyleSheet(QString::fromUtf8("background-color: rgb(130, 130, 130);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 81, 20));
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 80, 81, 20));
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 110, 61, 20));
        label_4->setFont(font1);
        txtApellido = new QLineEdit(centralwidget);
        txtApellido->setObjectName("txtApellido");
        txtApellido->setGeometry(QRect(110, 70, 121, 28));
        txtApellido->setFont(font1);
        txtApellido->setStyleSheet(QString::fromUtf8("background-color: rgb(130, 130, 130);"));
        txtNota = new QLineEdit(centralwidget);
        txtNota->setObjectName("txtNota");
        txtNota->setGeometry(QRect(110, 100, 71, 28));
        txtNota->setFont(font1);
        txtNota->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 217, 217);background-color: rgb(130, 130, 130);"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(50, 140, 271, 381));
        tableWidget->setFont(font1);
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 144, 144);"));
        tableWidget1 = new QTableWidget(centralwidget);
        tableWidget1->setObjectName("tableWidget1");
        tableWidget1->setGeometry(QRect(370, 140, 271, 381));
        tableWidget1->setFont(font1);
        tableWidget1->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 144, 144);"));
        tableWidget2 = new QTableWidget(centralwidget);
        tableWidget2->setObjectName("tableWidget2");
        tableWidget2->setGeometry(QRect(670, 140, 271, 381));
        tableWidget2->setFont(font1);
        tableWidget2->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 144, 144);"));
        tableWidget3 = new QTableWidget(centralwidget);
        tableWidget3->setObjectName("tableWidget3");
        tableWidget3->setGeometry(QRect(970, 140, 271, 381));
        tableWidget3->setFont(font1);
        tableWidget3->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 144, 144);"));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName("addButton");
        addButton->setGeometry(QRect(240, 40, 83, 29));
        addButton->setFont(font1);
        addButton->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 144, 144);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(600, 20, 401, 71));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Cooper")});
        font3.setPointSize(18);
        font3.setBold(true);
        label_5->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        HeapSortButton->setText(QCoreApplication::translate("MainWindow", "M\303\251todo HeapSort", nullptr));
        QuickSortButton->setText(QCoreApplication::translate("MainWindow", "M\303\251todo QuickSort", nullptr));
        ShellSortButton->setText(QCoreApplication::translate("MainWindow", "M\303\251todo ShellSort", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Introduce los datos", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nombre :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Apellido :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", " Nota :", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "A\303\261adir", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "M\303\251todos de ordenamiento", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
