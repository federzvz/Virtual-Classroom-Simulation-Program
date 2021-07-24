#include "ControladorAsignaturas.h"
#include "ColeccionesG/ListaDicc.h"
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
//
//void ControladorAsignaturas::ListarAsignaturas(ICollection* ListaAsignaturas){
//    IIterator* iterador = ListaAsignaturas->iterator();
//    while(iterador->hasNext()){
//        Asignaturas* AsignaturaAux = (Asignaturas*)(iterador->getCurrent());
//        cout<<AsignaturaAux->getNombre()<<endl;
//        iterador->next();
//    }
//};

void ControladorAsignaturas::MostrarAsignaturas(IDictionary* asignaturas_){
    IIterator* iterador = asignaturas_->getIteratorObj();
    IDictionary* lista = new ListDicc();
    while(iterador->hasNext()){
        Asignaturas* AsignaturaAux = (Asignaturas*) iterador->getCurrent();
        cout<<AsignaturaAux->getNombre()<<endl;
        iterador->next();
    }
    delete iterador;
}

IDictionary* ControladorAsignaturas::ListarAsignaturas(){
    IIterator* iterador = this->asignaturas->getIteratorObj();
    IDictionary* lista = new ListDicc();
    while(iterador->hasNext()){
        Asignaturas* AsignaturaAux = (Asignaturas*) iterador->getCurrent();
        lista->add(AsignaturaAux, new KeyString(AsignaturaAux->getCodigo()));
        iterador->next();
    }
    delete iterador;
    return lista;
}

