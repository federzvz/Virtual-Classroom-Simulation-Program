#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/IDictionary.h"
#include "Usuarios.h"
#include "Estudiantes.h"
#include "Docentes.h"
#include "string"

class Administrador : public Usuarios{
private:
    
public:
    Administrador (int, string, string, string, string, ICollection*, ICollection*, string);
    void altaUsuario(string,string,string,string,IDictionary*,IDictionary*,IDictionary*,IDictionary*,ICollection*,ICollection*,int,string,string);
    void altaAsignatura(string, string, bool, bool, bool, IDictionary &);
    void asigDocenteAsignatura();
    void asigDocenteAsignatura(int,string,IDictionary*,IDictionary*);
    void eliminarAsignatura();
    double tiempoDictadoClase();
    void inicioDeClase();
    void finalizaciónDeClase();
    double tiempoAsistenciaClase();
};

#endif /* ADMINISTRADOR_H */