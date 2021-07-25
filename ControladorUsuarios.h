#ifndef CONTROLADORUSUARIOS_H
#define CONTROLADORUSUARIOS_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/Lista.h"
#include "Usuarios.h"
#include "string"
#include "Estudiantes.h"
#include "ColeccionesG/IKey.h"
#include "ColeccionesG/KeyInt.h"

class ControladorUsuarios{
private:
    IDictionary *usuarios;
public:
    ControladorUsuarios (IDictionary*);
    void login(string usuario, string passwd);
    void listarDocentes();
    void listarEstudiantes();
    void comenzarClase();
    void finalizarClase();
    Usuarios *seleccionTipoUsuario(int, IDictionary*);
    Estudiantes *seleccionTipoEstudiante(int, IDictionary*);
    void asignacionDocente();
    void confirmar();
    void cancelar();
    void eliminarAsignatura();
    ICollection *listarusuario();
    void mostrarUsuarios(IDictionary*);
};


#endif /* CONTROLADORUSUARIOS_H */

