#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/IDictionary.h"
#include "ColeccionesG/ListaDicc.h"
#include "Usuarios.h"
#include "string"
#include <iostream>

class Estudiantes: public Usuarios{
private:
    string cedula;
public:
    Estudiantes (int, string, string, string, string, IDictionary*, IDictionary*, string);
    void setCedula(string);
    string getCedula();
    float asistenciaClaseVivo();
    void finalizaciónAsistenciaVivo();
    void inscripcionAsignatura(IDictionary*);
};

#endif /* ESTUDIANTES_H */

