#include "ControladorAsignaturas.h"
#include <iostream>

ControladorAsignaturas::ControladorAsignaturas(IDictionary *asignaturas) {
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

void ControladorAsignaturas::ListarAsignaturas(){
    
};