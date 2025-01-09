#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListWidgetItem>
#include "estudiante.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Configurar las columnas del TableWidget
    ui->tableWidget->setColumnCount(3);
    QStringList headers = {"Nombre", "Apellido", "Nota"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    // Establecer el ancho de las columnas en pixeles
    ui->tableWidget->setColumnWidth(0, 100);
    ui->tableWidget->setColumnWidth(1, 100);
    ui->tableWidget->setColumnWidth(2, 45);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Agregar estudiante
void MainWindow::on_addButton_clicked()
{
    // Obtener datos de entrada
    QString nombre = ui->txtNombre->text().trimmed();
    QString apellido = ui->txtApellido->text().trimmed();
    QString notaStr = ui->txtNota->text().trimmed();

    bool isNumeric;
    float nota = notaStr.toFloat(&isNumeric);

    // Validar datos
    if (nombre.isEmpty() || apellido.isEmpty() || !isNumeric || nota < 1.0 || nota > 7.0) {
        QMessageBox::warning(this, "Advertencia", "Completa todos los campos y verifica que la nota sea válida (1.0 - 7.0).");
        return;
    }

    // Crear objeto Estudiante y agregarlo a la lista
    Estudiante estudiante(nombre, apellido, nota);
    estudiantes.push_back(estudiante);

    // Agregar datos al TableWidget
    int rowCount = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(rowCount);
    ui->tableWidget->setItem(rowCount, 0, new QTableWidgetItem(estudiante.getNombre()));
    ui->tableWidget->setItem(rowCount, 1, new QTableWidgetItem(estudiante.getApellido()));
    ui->tableWidget->setItem(rowCount, 2, new QTableWidgetItem(QString::number(estudiante.getNota())));

    // Limpiar inputs
    ui->txtNombre->clear();
    ui->txtApellido->clear();
    ui->txtNota->clear();
}

// Eliminar estudiante seleccionado
void MainWindow::on_removeButton_clicked()
{
    // Obtener la fila seleccionada
    int currentRow = ui->tableWidget->currentRow();

    if (currentRow < 0) {
        QMessageBox::warning(this, "Advertencia", "Selecciona un estudiante para eliminar.");
        return;
    }

    // Eliminar estudiante de la lista y del TableWidget
    estudiantes.erase(estudiantes.begin() + currentRow);
    ui->tableWidget->removeRow(currentRow);
}

// Declaración de heapify
void heapify(std::vector<Estudiante>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Comparar para ordenar de mayor a menor (mayor nota primero)
    if (left < n && arr[left].getNota() < arr[largest].getNota())
        largest = left;

    if (right < n && arr[right].getNota() < arr[largest].getNota())
        largest = right;

    if (largest != i) {
        std::swap(arr[i], arr[largest]);
        heapify(arr, n, largest); // Recursión
    }
}

void MainWindow::on_HeapSortButton_clicked()
{
    // Ordenar usando la función heapify ya definida fuera de MainWindow
    int n = estudiantes.size();

    // Construir el heap (heapify desde la mitad hasta la raíz)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(estudiantes, n, i);
    }

    // Ordenar el heap
    for (int i = n - 1; i > 0; i--) {
        std::swap(estudiantes[0], estudiantes[i]);
        heapify(estudiantes, i, 0);
    }

    // Actualizar la vista de tableWidget1 con los datos ordenados
    ui->tableWidget1->clearContents();
    ui->tableWidget1->setRowCount(0);  // Limpiar las filas anteriores

    // Definir que la tabla tenga 3 columnas:
    ui->tableWidget1->setColumnCount(3);
    ui->tableWidget1->setHorizontalHeaderLabels({"Nombre", "Apellido", "Nota"});

    // Establecer el ancho de las columnas en pixeles
    ui->tableWidget1->setColumnWidth(0, 100);
    ui->tableWidget1->setColumnWidth(1, 100);
    ui->tableWidget1->setColumnWidth(2, 45);

    // Insertar los datos ordenados en tableWidget1
    for (const auto& estudiante : estudiantes) {
        int rowCount = ui->tableWidget1->rowCount();
        ui->tableWidget1->insertRow(rowCount);
        ui->tableWidget1->setItem(rowCount, 0, new QTableWidgetItem(estudiante.getNombre()));
        ui->tableWidget1->setItem(rowCount, 1, new QTableWidgetItem(estudiante.getApellido()));
        ui->tableWidget1->setItem(rowCount, 2, new QTableWidgetItem(QString::number(estudiante.getNota())));
    }
}

void MainWindow::on_QuickSortButton_clicked()
{
    // Implementación del Quicksort
    std::function<void(int, int)> quicksort = [&](int low, int high) {
        if (low < high) {
            // Elegir el pivote
            float pivot = estudiantes[high].getNota();
            int i = low - 1;

            // Reordenar los elementos
            for (int j = low; j < high; j++) {
                if (estudiantes[j].getNota() > pivot) {
                    i++;
                    std::swap(estudiantes[i], estudiantes[j]);
                }
            }
            std::swap(estudiantes[i + 1], estudiantes[high]);
            int pi = i + 1;

            // Llamadas recursivas para las particiones
            quicksort(low, pi - 1);
            quicksort(pi + 1, high);
        }
    };

    // Llamar al algoritmo quicksort
    quicksort(0, estudiantes.size() - 1);

    // Limpiar tableWidget2
    ui->tableWidget2->clearContents();
    ui->tableWidget2->setRowCount(0);  // Limpiar las filas anteriores

    // Definir que la tabla tenga 3 columnas:
    ui->tableWidget2->setColumnCount(3);
    ui->tableWidget2->setHorizontalHeaderLabels({"Nombre", "Apellido", "Nota"});

    // Establecer el ancho de las columnas en pixeles
    ui->tableWidget2->setColumnWidth(0, 100);
    ui->tableWidget2->setColumnWidth(1, 100);
    ui->tableWidget2->setColumnWidth(2, 45);

    // Insertar los datos ordenados en tableWidget2
    for (const auto& estudiante : estudiantes) {
        int rowCount = ui->tableWidget2->rowCount();
        ui->tableWidget2->insertRow(rowCount);
        ui->tableWidget2->setItem(rowCount, 0, new QTableWidgetItem(estudiante.getNombre()));
        ui->tableWidget2->setItem(rowCount, 1, new QTableWidgetItem(estudiante.getApellido()));
        ui->tableWidget2->setItem(rowCount, 2, new QTableWidgetItem(QString::number(estudiante.getNota())));
    }
}

void MainWindow::on_ShellSortButton_clicked()
{
    // Aplicar el algoritmo ShellSort
    int n = estudiantes.size();
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            Estudiante temp = estudiantes[i];
            int j;
            for (j = i; j >= gap && estudiantes[j - gap].getNota() > temp.getNota(); j -= gap) {
                estudiantes[j] = estudiantes[j - gap];
            }
            estudiantes[j] = temp;
        }
    }

    // Limpiar tableWidget3
    ui->tableWidget3->clearContents();
    ui->tableWidget3->setRowCount(0);  // Limpiar las filas anteriores

    // Definir que la tabla tenga 3 columnas:
    ui->tableWidget3->setColumnCount(3);
    ui->tableWidget3->setHorizontalHeaderLabels({"Nombre", "Apellido", "Nota"});

    // Establecer el ancho de las columnas en pixeles
    ui->tableWidget3->setColumnWidth(0, 100);
    ui->tableWidget3->setColumnWidth(1, 100);
    ui->tableWidget3->setColumnWidth(2, 45);

    // Insertar los datos ordenados en tableWidget3
    for (const auto& estudiante : estudiantes) {
        int rowCount = ui->tableWidget3->rowCount();
        ui->tableWidget3->insertRow(rowCount);
        ui->tableWidget3->setItem(rowCount, 0, new QTableWidgetItem(estudiante.getNombre()));
        ui->tableWidget3->setItem(rowCount, 1, new QTableWidgetItem(estudiante.getApellido()));
        ui->tableWidget3->setItem(rowCount, 2, new QTableWidgetItem(QString::number(estudiante.getNota())));
    }
}
