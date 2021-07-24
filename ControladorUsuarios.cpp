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

ICollection *ControladorUsuarios::listarusuario(){
    IIterator *iter = this->usuarios->iterator();
    ICollection *lista = new Lista();
    while(iter->hasNext()){
        Usuarios* algo = (Usuarios*) iter->getCurrent();
        lista->add(algo);
        iter->next();
    }
    delete iter;
    return lista;
};
void ControladorUsuarios::MostrarUsuarios(IDictionary *listaUsuarios){
IIterator* iter = listaUsuarios->getIteratorObj();
while(iter->hasNext()){
    Usuarios* algo = (Usuarios*) iter->getCurrent();
    cout<<"Nombre: "<<algo->getNombre()<<endl;
    cout<<"Email: "<<algo->geteMail()<<endl;
    cout<<"Url Imagen: "<<algo->getImagen()<<endl;
    cout<<"Contrasenia: "<<algo->getPasswd()<<endl;
    cout<<"ID: "<<algo->getID()<<endl;
    iter->next();
}
}
