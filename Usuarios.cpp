#include "Usuarios.h"

Usuarios::Usuarios(int id, string nom, string email, string url, string passwd, ICollection *asignaturas, ICollection *clases){
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

void Usuarios::setListaClases (ICollection *clases){
    this->listaClases=clases;
};

void Usuarios::setListaAsig (ICollection *asignaturas){
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

ICollection *Usuarios::getListaAsig(){
    return this->listaAsignatura;
};

ICollection *Usuarios::getListaClases(){
    return this->listaClases;
};
