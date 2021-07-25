#include "ControladorUsuarios.h"

ControladorUsuarios::ControladorUsuarios (IDictionary *usuarios){
    this->usuarios=usuarios;
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

Usuarios *ControladorUsuarios::seleccionTipoUsuario(int id, IDictionary *usuarios){
    Usuarios *user=NULL;
    IKey *key= new KeyInt(id);
    user= (Usuarios*) usuarios->find(key);
    return user;
};

Estudiantes *ControladorUsuarios::seleccionTipoEstudiante(int id, IDictionary *usuarios){
    Estudiantes *user=NULL;
    IKey *key= new KeyInt(id);
    user= (Estudiantes*) usuarios->find(key);
    return user;        
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
    IIterator *iter = this->usuarios->getIteratorKey();
    ICollection *lista = new Lista();
    while(iter->hasNext()){
        Usuarios* algo = (Usuarios*) iter->getCurrent();
        lista->add(algo);
        iter->next();
    }
    delete iter;
    return lista;
};

void ControladorUsuarios::mostrarUsuarios(IDictionary* usuarios){
    IIterator *iter=usuarios->getIteratorObj();
    Usuarios *user=NULL;
    cout<<" ID      Nombre"<<endl;
    while(iter->hasNext()){
        user= (Usuarios*) iter->getCurrent();
        cout<<" "<<user->getId()<<"      ";
        cout<<user->getNombre()<<endl;
        iter->next();
    }
};

/*
void ControladorUsuarios::mostrarUsuarios(IDictionary *listaUsuarios){
IIterator* iter = listaUsuarios->getIteratorObj();
while(iter->hasNext()){
    Usuarios* algo = (Usuarios*) iter->getCurrent();
    cout<<"Nombre: "<<algo->getNombre()<<endl;
    cout<<"Email: "<<algo->geteMail()<<endl;
    cout<<"Url Imagen: "<<algo->getImagen()<<endl;
    cout<<"Contrasenia: "<<algo->getPasswd()<<endl;
    cout<<"ID: "<<algo->getId()<<endl;
    iter->next();
}
};*/ 

