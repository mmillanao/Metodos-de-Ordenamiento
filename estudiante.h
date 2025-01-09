#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <QString>

class Estudiante {
public:
    Estudiante (const QString &name, const QString &apellido, float nota);

    QString getNombre() const;
    QString getApellido() const;
    float getNota() const;

private:
    QString nombre;
    QString apellido;
    float nota;
};
#endif // ESTUDIANTE_H
