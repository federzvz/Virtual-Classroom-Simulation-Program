#include "ControladorAsignaturas.h"
#include "ColeccionesG/ICollection.h"
#include "Usuarios.h"
#include <iostream>

ControladorAsignaturas::ControladorAsignaturas(IDictionary *asignaturas) {
    this->asignaturas=asignaturas;
};

IDictionary *ControladorAsignaturas::getAsignaturas(){
    return this->asignaturas;
};
void ControladorAsignaturas::setAsignaturas(IDictionary* asignaturas){
    this->asignaturas=asignaturas;
};

bool ControladorAsignaturas::confirmar(){
    char letra;
    bool decision;
    cout<<"Confirmar? (s/n)"<<endl;
    cin>>letra;
    if (letra=='s' || letra=='S'){
        decision=true;
    }
    else{
        decision=false;
    }
    return decision;
};

void ControladorAsignaturas::ListarAsignaturas(IDictionary *asignaturas){
    
};

Asignaturas *ControladorAsignaturas::seleccionAsignatura(string codAsig, IDictionary *asignaturas){
    /*bool found=false;*/
    Asignaturas *asig=NULL;
    IKey *key= new KeyString(codAsig);
    asig= (Asignaturas*) asignaturas->find(key);
    /*IIterator *iter = asignaturas->iterator();
    while(iter->hasNext() && found==false){
        asig=(Asignaturas*) iter->getCurrent();
        if(asig->getCodigo()==codAsig){
            found=true;
        }
        iter->next();
    }
    delete iter;*/
    return asig;
};

void ControladorAsignaturas::mostrarAsignatura(Asignaturas* auxAsig){
    cout<<auxAsig->getNombre()<<endl;
    cout<<"Codigo: ";
    cout<<auxAsig->getCodigo()<<endl;
    if (auxAsig->getTeoricas()==true){
        cout<<"Clases teoricas: Si"<<endl;
    }
    else{
        cout<<"Clases teoricas: No"<<endl;
    }
    if (auxAsig->getPracticas()==true){
        cout<<"Clases practicas: Si"<<endl;
    }
    else{
        cout<<"Clases practicas: No"<<endl;
    }
    if (auxAsig->getMonitoreo()==true){
        cout<<"Clases de monitoreo: Si"<<endl;
    }
    else{
        cout<<"Clases de monitoreo: No"<<endl;
    }
    cout<<endl;
    return;
};

void ControladorAsignaturas::listarEstudiantesInscriptos(Asignaturas* asig){
    IDictionary *estudiantes=asig->getInscriptos();
    IIterator *iter=estudiantes->getIteratorKey();
    Estudiantes *estudiante=NULL;
    cout<<" ID       Nombre "<<endl;
    while(iter->hasNext()){
        estudiante= (Estudiantes*) iter->getCurrent();
        cout<<" "<<estudiante->getId()<<"       "<<estudiante->getNombre()<<endl;
        iter->next();
    }
};