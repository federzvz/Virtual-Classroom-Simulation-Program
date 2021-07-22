#include "Docentes.h"

Docentes::Docentes (string nom, string email, string url, string passwd, iDictionary asignaturas, iCollection clases, string nombre_Instituto) : Usuarios(nom, email, url, passwd, asignaturas, clases){
    this->nombre_Instituto=nom;
};

void Docentes::setNombre_Instituto(string nom){
    this->nombre_Instituto=nom;
};

string Docentes::getNombre_Instituto(){
    return this->nombre_Instituto;
};

void Docentes::inicioDeClase(){
    
};

void Docentes::finalizaciónDeClase(){
    
};

double Docentes::tiempoAsistenciaClase(){
    
};