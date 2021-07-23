#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/IDictionary.h"
#include "Usuarios.h"
#include "string"

class Estudiantes: public Usuarios{
private:
    string cedula;
public:
    Estudiantes (string, string, string, string, ICollection*, ICollection*, string);
    void setCedula(string);
    string getCedula();
    float asistenciaClaseVivo();
    void finalizaciónAsistenciaVivo();
    void inscripcionAsignatura();
};

#endif /* ESTUDIANTES_H */
