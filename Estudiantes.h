#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/IDictionary.h"
#include "ColeccionesG/ListaDicc.h"
#include "ColeccionesG/Lista.h"
#include "ColeccionesG/KeyString.h"
#include "Usuarios.h"
#include "Asignaturas.h"
#include "string"

class Estudiantes: public Usuarios{
private:
    string cedula;
public:
    Estudiantes (int,string, string, string, string, ICollection*, ICollection*, string);
    void setCedula(string);
    string getCedula();
    float asistenciaClaseVivo();
    void finalizaciónAsistenciaVivo();
    void inscripcionAsignatura(IDictionary*);
};

#endif /* ESTUDIANTES_H */
