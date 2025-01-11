![v-escudo-color-gradiente-oscuro](https://github.com/user-attachments/assets/120df3c2-1c02-425c-968f-3cdbbf2b46bc)

## Proyecto: Métodos de ordenamiento utilizando Qt Creator
Implementación de tres métodos de ordenamiento: Heapsort, Quicksort y Shellsort, adaptados para Qt Creator con una interfaz gráfica básica. El programa permite gestionar y ordenar listas de estudiantes por sus calificaciones, mostrando los resultados en orden descendente (de mayor a menor nota).
### Como ejecutar
1. Descargue e instale el software Qt Creator desde su página oficial `<link>` : <https://www.qt.io/download-dev>
2.Descargue el repositorio del proyecto como un archivo comprimido y descomprímalo en una carpeta.
3. Abra la aplicación de Qt Creator, seleccione la opción *Open Project* ,  busque la carpeta descomprimida y seleccione todos los archivos, excepto el readme.
4. El asistente de configuración del proyecto le redirigirá a la ventana de selección del kit de compilación. En esta etapa, seleccione *Desktop Qt 6.7.0 MinGW 64-bit* y haga clic en Configure Project. Esto abrirá una interfaz similar a la siguiente: ![Captura de pantalla 2025-01-10 194443](https://github.com/user-attachments/assets/659caf67-1fe9-4242-9534-b3df1424a185)
5. Para ejecutar el proyecto, haga click en el botón *Run* , el cual se encuentra en la esquina inferior izquierda. Si se produce un error de crasheo al intentar ejecutar el proyecto, verifique la configuración del depurador (Debug). Es posible que se esté utilizando el depurador incorrecto, como el de Windows en lugar del especificado en el paso anterior (*Desktop Qt 6.7.0 MinGW 64-bit*).
![imagen_2025-01-10_200606630](https://github.com/user-attachments/assets/7ff6313e-2527-4c83-930c-ad834edd71ba)

Una vez que la aplicación se inicie correctamente, verá la ventana principal:
![imagen_2025-01-10_202403449](https://github.com/user-attachments/assets/ffc42df3-1ea5-4ac6-a75c-262480e5b6d3)

 Donde podrá realizar lo siguiente:
* Ingresar los datos de los estudiantes(Nombre, Apellido y nota).
* Seleccionar uno de los métodos de ordenamiento (Heapsort, Quicksort o Shellsort).
* Visualizar los resultados en las tablas correspondientes. 
### Ejemplo y resultado
![imagen_2025-01-10_205014685](https://github.com/user-attachments/assets/a4aae893-02c7-4038-a72b-3c112f5128f9)

### Métodos de ordenamiento
#### Método Shellsort  
El método **Shellsort** es un algoritmo de ordenamiento basado en inserciones directas, que mejora el rendimiento dividiendo la lista en **sublistas** y ordenándolas utilizando **intervalos decrecientes**. En este caso, el intervalo comienza como la mitad del tamaño del vector y se reduce sucesivamente. Los elementos separados por el intervalo se comparan, y si un elemento es menor, se mueve hacia adelante. Al reducir el intervalo a 1, el algoritmo se convierte en una inserción directa, pero como la lista ya está casi ordenada, el número de movimientos necesarios es mínimo.  

El algoritmo inicia cuando el usuario ingresa los nombres y notas de los estudiantes. Se validan las notas para asegurarse de que estén dentro del rango permitido. Posteriormente, los estudiantes se ordenan por nota de mayor a menor, aplicando el algoritmo Shellsort con intervalos decrecientes y comparaciones basadas en las notas. Finalmente, se imprime la lista ordenada.  

#### Método Quicksort  
Es un algoritmo de ordenamiento eficiente que funciona seleccionando un **pivote** y dividiendo la lista en dos sublistas: una con las notas mayores o iguales al pivote y otra con las notas menores.  
Cuando el usuario agrega estudiantes a la lista, se validan sus respectivas notas para asegurarse de que estén dentro del rango asignado en el código, que en este caso es entre **1 y 7**.  
El proceso recursivo divide la lista según el valor del pivote. La condición base de la recursión se cumple cuando la sublista tiene un solo elemento o está vacía. Durante la partición, las notas de los estudiantes se organizan alrededor del pivote, colocando los elementos mayores o iguales al pivote a la izquierda (o hacia arriba) y los menores a la derecha (o hacia abajo), devolviendo la posición final del pivote.  
Finalmente, el algoritmo recorre el vector ordenado e imprime la lista de estudiantes, ordenada por nota de mayor a menor.  

#### Método Heapsort  
Organiza los elementos utilizando la estructura de datos **MAX HEAP**. Se emplea un método privado para reorganizar el vector de estudiantes, el cual verifica si el nodo padre es el mayor comparado con sus hijos izquierdo y derecho. Si el nodo padre no es el mayor, intercambia la raíz con el hijo mayor y aplica **heapify** en el subárbol afectado. Luego, se reduce el tamaño del **HEAP** y se vuelve a aplicar **heapify** para restablecer la propiedad del **MAX HEAP**. Finalmente, el algoritmo recorre el vector ordenado y muestra la lista de estudiantes con sus respectivas notas, organizada de manera descendente.  

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

### Tecnologías utilizadas
#### Qt Creator
IDE (Entorno de Desarrollo Integrado) utilizado para el diseño y desarrollo de aplicaciones con interfaz gráfica mediante el framework Qt. Incluye la herramienta Qt Designer, que facilita la creación de elementos gráficos como botones, cuadros de texto y tablas. También permite gestionar eventos mediante señales y slots para conectar la lógica del programa con la interfaz.
#### Lenguaje C++
Lenguaje de programación empleado para implementar los algoritmos de ordenamiento (Heapsort, Quicksort y Shellsort) y gestionar la clase "estudiante", que encapsula la información de los alumnos (nombre, apellido y nota).
