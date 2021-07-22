
#include <valarray>

#include "Reproducciones.h"

Reproducciones::Reproducciones(Estudiantes *estudiante, Clases *clase, DtFecha fecha, DtTimeStamp hora) {
    this->estudiante=estudiante;
    this->clase=clase;
    this->fecha=fecha;
    this->hora=hora;
}

Reproducciones::Reproducciones(const Reproducciones& orig) {
}

Reproducciones::~Reproducciones() {
}

void Reproducciones::setClase(Clases clase_x){
    *this->clase=clase_x;
}
void Reproducciones::setEstudiante(Estudiantes estudiante_x){
    *this->estudiante=estudiante_x;
}
void Reproducciones::setFecha(DtFecha fecha_x){
    this->fecha=fecha_x;
}
void Reproducciones::setDtTimeStamp(DtTimeStamp hora_x){
    this->hora=hora_x;
}
Clases Reproducciones::getClase(){
    return *this->clase;
}
Estudiantes Reproducciones::getEstudiante(){
    return *this->estudiante;
}
DtFecha Reproducciones::getFecha(){
    return this->fecha;
}
DtTimeStamp Reproducciones::getHora(){
    return this->hora;
}
