#include "Clases.h"

Clases::Clases(string nombre, int numero, Asignaturas *asignatura, Docentes *docente, string modalidad, IDictionary *estudiantes, IDictionary *mensajes, DtTimeStamp *horaComienzo, DtTimeStamp *horaFinal, string linkVideo) {
    this->nombre=nombre;
    this->id=numero;
    this->asignatura=asignatura;
    this->docente=docente;
    this->modalidad=modalidad;
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
    return this->id;
};

DtTimeStamp Clases::getHoraComienzo(){
    return *this->horaDeComienzo;
};

DtTimeStamp *Clases::getHoraFinal(){
    return this->horaDeFinalizacion;
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

string Clases::getModalidad(){
    return this->modalidad;
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
    this->id=num;
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

void Clases::setModalidad(string mod){
    this->modalidad=mod;
};

void setEstudiantes(IDictionary *estudiantes){
    
};

void setMensajes(IDictionary *mensajes){
    
};

void envioDeMensaje(int){
    
};

void mostrarDatosClase(){
    
};

