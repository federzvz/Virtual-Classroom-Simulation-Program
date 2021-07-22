#include "Usuarios.h"

Usuarios::Usuarios(string nom, string email, string url, string passwd, iDictionary asignaturas, iCollection clases){
    this->Nombre=nom;
    this->eMail=email;
    this->URL_Imagen=url;
    this->contraseña=passwd;
    this->listaAsignatura=asignaturas;
    this->listaClases=clases;
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

void Usuarios::setListaClases(iCollection clases){
    this->listaClases=clases;
};

void Usuarios::setListaAsig(iDictionary asignaturas){
    this->listaAsignatura=asignaturas;
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

iDictionary Usuarios::getListaAsig(){
    return this->listaAsignatura;
};

iCollection Usuarios::getListaClases(){
    return this->listaClases;
};
