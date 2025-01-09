#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "estudiante.h"

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
    void on_addButton_clicked();
    void on_removeButton_clicked();
    void on_HeapSortButton_clicked();
    void on_QuickSortButton_clicked();
    void on_ShellSortButton_clicked();

private:
    void updateTabla();  // Función para actualizar la tabla
    Ui::MainWindow *ui;
    std::vector<Estudiante> estudiantes; // Declaración de la lista de estudiantes
};

#endif // MAINWINDOW_H
