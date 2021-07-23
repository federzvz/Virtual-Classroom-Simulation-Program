#include "Asignaturas.h"

Asignaturas::Asignaturas(string nombre, string codigo, bool teorica, bool practica, bool monitoreo) {
    this->nombre=nombre;
    this->codigo=codigo;
    this->clasesTeoricas=teorica;
    this->clasesPracticas=practica;
    this->clasesDeMonitoreo=monitoreo;
};

string Asignaturas::getNombre(){
    return this->nombre;
};

string Asignaturas::getCodigo(){
    return this->codigo; 
};

bool Asignaturas::getTeoricas(){
    return this->clasesTeoricas;    
};

bool Asignaturas::getPracticas(){
    return this->clasesPracticas;    
};

bool Asignaturas::getMonitoreo(){
    return this->clasesDeMonitoreo;
};

void Asignaturas::setNombre(string nombre){
    this->nombre=nombre;
};

void Asignaturas::setCodigo(string codigo){
    this->codigo=codigo;
};

void Asignaturas::setTeoricas(bool teoricas){
    this->clasesTeoricas=teoricas;
};

void Asignaturas::setPracticas(bool practicas){
    this->clasesPracticas=practicas;
};

void Asignaturas::setMonitoreo(bool monitoreo){
    this->clasesDeMonitoreo=monitoreo;
};
