#include "Estudiantes.h"

Estudiantes::Estudiantes (int id, string nom, string email, string url, string passwd, ICollection *asignaturas, ICollection *clases, string cedula) : Usuarios(id, nom, email, url, passwd, asignaturas, clases){
    this->cedula=cedula;
};

void Estudiantes::setCedula(string cedula){
    this->cedula=cedula;
};

string Estudiantes::getCedula(){
    return this->cedula;
};

float Estudiantes::asistenciaClaseVivo(){
    float rslt;
    
    return rslt;
};

void Estudiantes::finalizaciónAsistenciaVivo(){
    
};

void Estudiantes::inscripcionAsignatura(){
    
};

    