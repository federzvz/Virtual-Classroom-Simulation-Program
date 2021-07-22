#include <valarray>

#include "Clases.h"

Clases::Clases() {
}

Clases::Clases(const Clases& orig) {
}

Clases::~Clases() {
}

string Clases::getNombre(){
    return this->nombre;
}
int Clases::getNumero(){
    return this->numero;
}
DtTimeStamp Clases::getHoraComienzo(){
    return this->horaDeComienzo;
}
DtTimeStamp Clases::getHoraFinal(){
    return this->horaDeFinalizacion;
}
string Clases::getVideo(){
    return this->linkVideo;
}
Asignaturas Clases::getAsignatura(){
    return *this->asignatura;
}
Docentes Clases::getDocente(){
    return *this->docente;
}
//iDictionary getEstudiantes();
//iDictionary getMensajes();
void Clases::setNombre(string nom){
    this->nombre=nom;
}
void Clases::setNumero(int num){
    this->numero=num;
}
void Clases::setHoraComienzo(DtTimeStamp start){
    this->horaDeComienzo=start;
}
void Clases::setHoraFinal(DtTimeStamp finish){
    this->horaDeFinalizacion=finish;
}
void Clases::setVideo(string Url){
    this->linkVideo=Url;
}
void Clases::setAsignatura(Asignaturas asig){
    *this->asignatura=asig;
}
void Clases::setDocente(Docentes doc){
    *this->docente=doc;
}
//void setEstudiantes(iDictionary);
//void setMensajes(iDictionary);
void envioDeMensaje(int);
void mostrarDatosClase();

