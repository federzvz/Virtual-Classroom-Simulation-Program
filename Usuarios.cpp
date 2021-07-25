#include "Usuarios.h"
#include "Clases.h"
#include "ColeccionesG/KeyString.h"

Usuarios::Usuarios(int id, string nom, string email, string url, string passwd, IDictionary *asignaturas, IDictionary *clases){
    this->Id=id;
    this->Nombre=nom;
    this->eMail=email;
    this->URL_Imagen=url;
    this->contraseña=passwd;
    this->listaAsignatura=asignaturas;
    this->listaClases=clases;
};

void Usuarios::setId(int id){
    this->Id=id;
};

void Usuarios::setNombre(string nom){
    this->Nombre=nom;
};

void Usuarios::seteMail(string email){
    this->eMail=email;
};

void Usuarios::setImagen(string url){
    this->URL_Imagen=url;
};

void Usuarios::setContra(string passwd){
     this->contraseña=passwd;
};

void Usuarios::setListaClases (IDictionary *clases){
    this->listaClases=clases;
};

void Usuarios::setListaAsig (IDictionary *asignaturas){
    this->listaAsignatura=asignaturas;
};

int Usuarios::getId(){
    return this->Id;
};

string Usuarios::getNombre(){
    return this->Nombre;
};

string Usuarios::geteMail(){
    return this->eMail;
};

string Usuarios::getImagen(){
    return this->URL_Imagen;
};

string Usuarios::getPasswd(){
    return this->contraseña;
};

IDictionary *Usuarios::getListaAsig(){
    return this->listaAsignatura;
    IIterator *iter = this->listaAsignatura->getIteratorKey();
    IDictionary *lista = new ListDicc();
    IKey *key=NULL;
    while(iter->hasNext()){
        Asignaturas* asignaturas=(Asignaturas*) iter->getCurrent();
        key= new KeyString(asignaturas->getCodigo());
        lista->add(asignaturas, key);
        iter->next();
    }
    delete iter;
    return lista;
};

IDictionary *Usuarios::getListaClases(){
    IIterator *iter = this->listaClases->getIteratorKey();
    IDictionary *lista = new ListDicc();
    IKey *key=NULL;
    while(iter->hasNext()){
        Clases* clases=(Clases*) iter->getCurrent();
        key= new KeyInt(clases->getNumero());
        lista->add(clases, key);
        iter->next();
    }
    delete iter;
    return lista;
};
