#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

using namespace std;
#include "string"
#include "Usuarios.h"

class Administrador: public Usuarios{
public:
    Administrador (string, string, string, string, iDictionary, iCollection, string);
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

