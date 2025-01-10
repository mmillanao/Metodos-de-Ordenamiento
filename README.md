![v-escudo-color-gradiente-oscuro](https://github.com/user-attachments/assets/120df3c2-1c02-425c-968f-3cdbbf2b46bc)

##Proyecto: Métodos de ordenamiento utilizando Qt Creator
Implementación de tres métodos de ordenamiento: Heapsort, Quicksort y Shellsort, adaptados para Qt Creator con una interfaz gráfica básica. El programa permite gestionar y ordenar listas de estudiantes por sus calificaciones, mostrando los resultados en orden descendente (de mayor a menor nota).


###Tecnologías utilizadas
####Qt Creator
IDE (Entorno de Desarrollo Integrado) utilizado para el diseño y desarrollo de aplicaciones con interfaz gráfica mediante el framework Qt. Incluye la herramienta Qt Designer, que facilita la creación de elementos gráficos como botones, cuadros de texto y tablas. También permite gestionar eventos mediante señales y slots para conectar la lógica del programa con la interfaz.
####Lenguaje C++
Lenguaje de programación empleado para implementar los algoritmos de ordenamiento (Heapsort, Quicksort y Shellsort) y gestionar la clase "estudiante", que encapsula la información de los alumnos (nombre, apellido y nota).
###Métodos de ordenamiento
MONSE
###Estructura del proyecto
El proyecto se organiza en varios archivos que implementan la lógica, su interfaz  gráfica y los algoritmos de ordenamiento. A continuación se describe brevemente la función de cada uno.
####estudiante.h y estudiante.cpp
Estos archivos define la clase Estudiante, que encapsula los atributos de un estudiante:
* `nombre`: Nombre del estudiante, ya sea el primer o segundo nombre.
* `apellido`: Primer apellido del estudiante.
* `nota`: Calificación del estudiante.

Se implementan métodos para acceder a estos atributos:
* `getNombre` : Ingresa al atributo nombre y devuelve el nombre del estudiante.
* `getApellido` : Ingresa al atributo apellido y devuelve el apellido del estudiante.
* `getNota` : Ingresa al atributo nota y devuelve la calificación del estudiante.

####mainwindow.h y mainwindow.cpp
Contienen la definición y la lógica principal de la ventana principal de la aplicación, incluyendo:
* `void MainWindow::on_addButton_clicked()` : Función para agregar y mostrar a los estudiantes en la primera tabla de almacenamiento (tableWidget).
*  `void MainWindow::on_removeButton_clicked()` : Función para eliminar al estudiante seleccionado en la primera tabla de almacenamiento (tableWidget).
*  `void heapify` : Función principal del algoritmo Heapsort, este construye el heap y ordena la lista.
*  `void MainWindow::on_HeapSortButton_clicked()` : Ordena los estudiantes usando Heapsort y muestra los resultados en la segunda tabla.
*  `void MainWindow::on_QuickSortButton_clicked()` : Ordena los estudiantes usando Quicksort y muestra los resultados en la tercera tabla.
*  `void MainWindow::on_ShellSortButton_clicked()` : Ordena los estudiantes usando Quicksort y muestra los resultados en la tercera tabla.
*  `void updateTabla();` : Función que actualiza las tablas de la interfaz gráfica con los datos procesados.

####main.cpp
Archivo principal que inicializa la aplicación, crea la ventana principal y la muestra al usuario.
####mainwindow.ui
Archivo generado automáticamente por Qt Designer, que define la interfaz gráfica de la aplicación. Incluye:
* Botones: Vinculados a las funciones que ejecutan los algoritmos y gestionan la lista de estudiantes.
* Tablas: Diseñadas para mostrar y organizar los datos.

Interfaz intuitiva que permite:

Seleccionar el algoritmo a ejecutar.

Ingresar el número de elementos y sus respectivos atributos.
