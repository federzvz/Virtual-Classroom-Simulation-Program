#ifndef CONTROLADORUSUARIOS_H
#define CONTROLADORUSUARIOS_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "Usuarios.h"
#include "string"
#include "iostream";

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
    ICollection* Listarusuario();
    void MostrarUsuarios(IDictionary*);
};


#endif /* CONTROLADORUSUARIOS_H */