![v-escudo-color-gradiente-oscuro](https://github.com/user-attachments/assets/120df3c2-1c02-425c-968f-3cdbbf2b46bc)

## Proyecto: Métodos de ordenamiento utilizando Qt Creator
Implementación de tres métodos de ordenamiento: Heapsort, Quicksort y Shellsort, adaptados para Qt Creator con una interfaz gráfica básica. El programa permite gestionar y ordenar listas de estudiantes por sus calificaciones, mostrando los resultados en orden descendente (de mayor a menor nota).


### Tecnologías utilizadas
#### Qt Creator
IDE (Entorno de Desarrollo Integrado) utilizado para el diseño y desarrollo de aplicaciones con interfaz gráfica mediante el framework Qt. Incluye la herramienta Qt Designer, que facilita la creación de elementos gráficos como botones, cuadros de texto y tablas. También permite gestionar eventos mediante señales y slots para conectar la lógica del programa con la interfaz.
#### Lenguaje C++
Lenguaje de programación empleado para implementar los algoritmos de ordenamiento (Heapsort, Quicksort y Shellsort) y gestionar la clase "estudiante", que encapsula la información de los alumnos (nombre, apellido y nota).
### Métodos de ordenamiento
MONSE
### Estructura del proyecto
El proyecto se organiza en varios archivos que implementan la lógica, su interfaz  gráfica y los algoritmos de ordenamiento. A continuación se describe brevemente la función de cada uno.
#### estudiante.h y estudiante.cpp
Estos archivos define la clase Estudiante, que encapsula los atributos de un estudiante:
* `nombre`: Nombre del estudiante, ya sea el primer o segundo nombre.
* `apellido`: Primer apellido del estudiante.
* `nota`: Calificación del estudiante.

Se implementan métodos para acceder a estos atributos:
* `getNombre` : Ingresa al atributo nombre y devuelve el nombre del estudiante.
* `getApellido` : Ingresa al atributo apellido y devuelve el apellido del estudiante.
* `getNota` : Ingresa al atributo nota y devuelve la calificación del estudiante.

#### mainwindow.h y mainwindow.cpp
Contienen la definición y la lógica principal de la ventana principal de la aplicación, incluyendo:
* `void MainWindow::on_addButton_clicked()` : Función para agregar y mostrar a los estudiantes en la primera tabla de almacenamiento (tableWidget).
*  `void MainWindow::on_removeButton_clicked()` : Función para eliminar al estudiante seleccionado en la primera tabla de almacenamiento (tableWidget).
*  `void heapify` : Función principal del algoritmo Heapsort, este construye el heap y ordena la lista.
*  `void MainWindow::on_HeapSortButton_clicked()` : Ordena los estudiantes usando Heapsort y muestra los resultados en la segunda tabla.
*  `void MainWindow::on_QuickSortButton_clicked()` : Ordena los estudiantes usando Quicksort y muestra los resultados en la tercera tabla.
*  `void MainWindow::on_ShellSortButton_clicked()` : Ordena los estudiantes usando Quicksort y muestra los resultados en la tercera tabla.
*  `void updateTabla();` : Función que actualiza las tablas de la interfaz gráfica con los datos procesados.

#### main.cpp
Archivo principal que inicializa la aplicación, crea la ventana principal y la muestra al usuario.
#### mainwindow.ui
Archivo generado automáticamente por Qt Designer, que define la interfaz gráfica de la aplicación. Incluye:
* Botones: Vinculados a las funciones que ejecutan los algoritmos y gestionan la lista de estudiantes.
* Tablas: Diseñadas para mostrar y organizar los datos.
### Como ejecutar
1. Descargue e instale el software Qt Creator desde su página oficial `<link>` : <https://www.qt.io/download-dev>
2.Descargue el repositorio del proyecto como un archivo comprimido y descomprímalo en una carpeta.
3. Abra la aplicación de Qt Creator, seleccione la opción *Open Project* ,  busque la carpeta descomprimida y seleccione todos los archivos, excepto el readme.
4. Esto lo rediccionará a la configuración del projecto, donde se le preguntará que constructor utilizará, en este caso seleccione *Desktop Qt 6.7.0 MinGw 64-bit*  y haga clic en *Configure Project*. Debería aparecer una interfaz similar a la siguiente: ![Captura de pantalla 2025-01-10 194443](https://github.com/user-attachments/assets/659caf67-1fe9-4242-9534-b3df1424a185)
5. Para ejecutar el proyecto, haga click en el botón *Run* , el cual se encuentra en la esquina inferior izquierda. Si aparece un error de crasheo, debe de cambiar el Debug, ya que posiblemente esté utilizando el de window y no el del Qt, por lo que debe de seleccionar el que se mencionó en la instrucción anterior.

![imagen_2025-01-10_200606630](https://github.com/user-attachments/assets/7ff6313e-2527-4c83-930c-ad834edd71ba)
   
6.Una vez que la aplicación se inicie correctamente, verá la ventana principal, donde podrá:
* Ingresar los datos de los estudiantes.
* Seleccionar uno de los métodos de ordenamiento (Heapsort, Quicksort o Shellsort).
* Visualizar los resultados en las tablas correspondientes. ![imagen_2025-01-10_202403449](https://github.com/user-attachments/assets/ffc42df3-1ea5-4ac6-a75c-262480e5b6d3)
### Ejemplo y resultado
![imagen_2025-01-10_205014685](https://github.com/user-attachments/assets/a4aae893-02c7-4038-a72b-3c112f5128f9)
