#include "Docentes.h"

Docentes::Docentes (int cod, string nom, string email, string url, string passwd, ICollection *asignaturas, ICollection *clases, string nombre_Instituto) : Usuarios(cod,nom, email, url, passwd, asignaturas, clases){
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
