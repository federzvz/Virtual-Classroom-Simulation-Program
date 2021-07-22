#ifndef CONTROLADORUSUARIOS_H
#define CONTROLADORUSUARIOS_H

using namespace std;
#include "string"

class ControladorUsuarios{
private:
    iCollection *usuarios;
public:
    ControladorUsuarios (iCollection);
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

