#ifndef CONTROLADORUSUARIOS_H
#define CONTROLADORUSUARIOS_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "string"

class ControladorUsuarios{
private:
    ICollection *usuarios;
public:
    ControladorUsuarios (ICollection*);
    void login(string usuario, string passwd);
    void listarDocentes();
    void listarEstudiantes();
    void comenzarClase();
    void finalizarClase();
    void seleccionTipoUsuario();
    void asignacionDocente();
    void confirmar();
    void cancelar();
    void eliminarAsignatura();
};


#endif /* CONTROLADORUSUARIOS_H */

