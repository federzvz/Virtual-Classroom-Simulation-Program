#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/IDictionary.h"
#include "ColeccionesG/IKey.h"
#include "ColeccionesG/KeyInt.h"
#include "Usuarios.h"
#include "Administrador.h"
#include "Docentes.h"
#include "Estudiantes.h"
#include "string"

class Administrador : public Usuarios{
private:
    
public:
    Administrador (int, string, string, string, string, IDictionary*, IDictionary*, string);
    void altaUsuario(int, string, string, string, string, IDictionary*, IDictionary*, IDictionary*, IDictionary*, IDictionary*, IDictionary*, int, string, string);
    void altaAsignatura(string, string, bool, bool, bool, IDictionary &);
    void asigDocenteAsignatura(int,string,IDictionary*,IDictionary*);
    void eliminarAsignatura();
    double tiempoDictadoClase();
    double tiempoAsistenciaClase();
};

#endif /* ADMINISTRADOR_H */

