#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/IDictionary.h"
#include "Usuarios.h"
#include "string"

class Administrador : public Usuarios{
private:
    
public:
    Administrador (string, string, string, string, ICollection*, ICollection*, string);
    void altaUsuario();
    void altaAsignatura();
    void asigDocenteAsignatura();
    void eliminarAsignatura();
    double tiempoDictadoClase();
    void inicioDeClase();
    void finalizaciónDeClase();
    double tiempoAsistenciaClase();
};

#endif /* ADMINISTRADOR_H */