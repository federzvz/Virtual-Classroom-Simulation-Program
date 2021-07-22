#include "Estudiantes.h"

Estudiantes::Estudiantes (string nom, string email, string url, string passwd, iDictionary asignaturas, iCollection clases, string cedula) : Usuarios(nom, email, url, passwd, asignaturas, clases){
    this->cedula=cedula;
};

void Estudiantes::setCedula(string cedula){
    this->cedula=cedula;
};

string Estudiantes::getCedula(){
    return this->cedula;
};

float Estudiantes::asistenciaClaseVivo(){
    
};

void Estudiantes::finalizaciónAsistenciaVivo(){
    
};

void Estudiantes::inscripcionAsignatura(){
    
};

    