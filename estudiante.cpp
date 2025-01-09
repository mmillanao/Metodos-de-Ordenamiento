#include "estudiante.h"

Estudiante::Estudiante(const QString &nombre, const QString &apellido, float nota)
    : nombre(nombre), apellido(apellido), nota(nota) {}

QString Estudiante::getNombre() const {
    return nombre;
}

QString Estudiante::getApellido() const {
    return apellido;
}

float Estudiante::getNota() const {
    return nota;
}
