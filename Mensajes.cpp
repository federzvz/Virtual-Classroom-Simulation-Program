
#include "Mensajes.h"

Mensajes::Mensajes() {
}

Mensajes::Mensajes(int id, DtFecha fecha, DtTimeStamp hora){
    this->id=id;
    this->fecha_envio=fecha;
    this->hora_envio=hora;
}

Mensajes::Mensajes(const Mensajes& orig) {
}

Mensajes::~Mensajes() {
}

void Mensajes::setID(int num){
    this->id=num;
}
int Mensajes::getID(){
    return this->id;
}
void Mensajes::setFecha(DtFecha fecha_x){
    this->fecha_envio=fecha_x;
}
void Mensajes::setHora(DtTimeStamp hora_x){
    this->hora_envio=hora_x;
}
DtFecha Mensajes::getFecha(){
    return this->fecha_envio;
}
DtTimeStamp Mensajes::getHora(){
    return this->hora_envio;
}
