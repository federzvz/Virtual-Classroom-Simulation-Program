#include "Administrador.h"
#include "Asignaturas.h"
#include "ColeccionesG/ListDiccIterator.h"
#include "ColeccionesG/KeyString.h"

Administrador::Administrador(int id, string nom, string email, string url, string passwd, ICollection *asignaturas, ICollection *clases, string nombre_Instituto) : Usuarios(id, nom, email, url, passwd, asignaturas, clases){
    
};

void Administrador::altaUsuario(){
    
};

void Administrador::altaAsignatura(string nombre, string codigo, bool teorica, bool practica, bool monitoreo, IDictionary &listaAsignaturas){
    Asignaturas *asignatura= new Asignaturas(nombre, codigo, teorica, practica, monitoreo);
    KeyString *key= new KeyString(codigo);
    IDictionary *aux= &listaAsignaturas;
    aux->add(asignatura, key);
};


void Administrador::asigDocenteAsignatura(){
    
};

void Administrador::eliminarAsignatura(){
    
};

double Administrador::tiempoDictadoClase(){
    double rslt;
    
    return rslt;
};

void Administrador::inicioDeClase(){
    
};

void Administrador::finalizaciónDeClase(){
    
};

double Administrador::tiempoAsistenciaClase(){
    double rslt;
    
    return rslt;
};


