#include "Clases.h"

Clases::Clases(string nombre, int numero, Asignaturas *asignatura, Docentes *docente, IDictionary *estudiantes, IDictionary *mensajes, DtTimeStamp *horaComienzo, DtTimeStamp *horaFinal, string linkVideo) {
    this->nombre=nombre;
    this->numero=numero;
    this->asignatura=asignatura;
    this->docente=docente;
    this->estudiantes=estudiantes;
    this->mensajes=mensajes;
    this->horaDeComienzo=horaComienzo;
    this->horaDeFinalizacion=horaFinal;
    this->linkVideo=linkVideo;
};

string Clases::getNombre(){
    return this->nombre;
};

int Clases::getNumero(){
    return this->numero;
};

DtTimeStamp Clases::getHoraComienzo(){
    return *this->horaDeComienzo;
};

DtTimeStamp Clases::getHoraFinal(){
    return *this->horaDeFinalizacion;
};

string Clases::getVideo(){
    return this->linkVideo;
};

Asignaturas Clases::getAsignatura(){
    return *this->asignatura;
};

Docentes Clases::getDocente(){
    return *this->docente;
};

IDictionary *Clases::getEstudiantes(){
    IDictionary *rslt;
    
    return rslt;
};

IDictionary *Clases::getMensajes(){
    IDictionary *rslt;
    
    return rslt;
};

void Clases::setNombre(string nom){
    this->nombre=nom;
};

void Clases::setNumero(int num){
    this->numero=num;
};

void Clases::setHoraComienzo(DtTimeStamp start){
    this->horaDeComienzo=&start;
};

void Clases::setHoraFinal(DtTimeStamp finish){
    this->horaDeFinalizacion=&finish;
};

void Clases::setVideo(string Url){
    this->linkVideo=Url;
};

void Clases::setAsignatura(Asignaturas asig){
    *this->asignatura=asig;
};

void Clases::setDocente(Docentes doc){
    *this->docente=doc;
};

void setEstudiantes(IDictionary *estudiantes){
    
};

void setMensajes(IDictionary *mensajes){
    
};

void envioDeMensaje(int){
    
};

void mostrarDatosClase(){
    
};

