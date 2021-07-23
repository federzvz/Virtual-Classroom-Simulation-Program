#include "ControladorUsuarios.h"

ControladorUsuarios::ControladorUsuarios (ICollection *usuarios){
    
};

void ControladorUsuarios::login(string usuario, string passwd){
    
};

void ControladorUsuarios::listarDocentes(){
    
};

void ControladorUsuarios::listarEstudiantes(){
    
};

void ControladorUsuarios::comenzarClase(){
    
};

void ControladorUsuarios::finalizarClase(){
    
};

void ControladorUsuarios::seleccionTipoUsuario(){
    
};

void ControladorUsuarios::asignacionDocente(){
    
};

void ControladorUsuarios::confirmar(){
    
};

void ControladorUsuarios::cancelar(){
    
};

void ControladorUsuarios::eliminarAsignatura(){
    
};

ICollection* ControladorUsuarios::Listarusuario(){
    IIterator* iter = this->usuarios->iterator();
    ICollection* Lista = new Lista();
    while(iter->hasNext()){
        Usuarios* algo = (Usuarios*) iter->getCurrent();
        Lista->add(algo);
        iter->next();
    }
    delete iter;
    return Lista;
}
