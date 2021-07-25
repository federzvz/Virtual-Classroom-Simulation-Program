#include "ControladorClases.h"
#include "Clases.h"

ControladorClases::ControladorClases(IDictionary *clases) {
    this->listaClases=clases;
};

void ControladorClases::envioDeMensaje(int identificadordetipo) { //Si es de respuesta o no
    
};

void ControladorClases::mostrarDatosClase(Clases *clase) {
    cout<<endl<<"ID: "<<clase->getNumero()<<endl;   
    cout<<"Nombre: "<<clase->getNombre()<<endl;     
    cout<<"Asignatura: "<<clase->getAsignatura().getNombre()<<endl;
    cout<<"Modalidad: "<<clase->getModalidad()<<endl;
    cout<<"Fecha: ";
    clase->getHoraComienzo().getFecha().mostrarFecha();
    cout<<endl;
    cout<<"Hora de comienzo: ";
    clase->getHoraComienzo().mostrarHora();
    cout<<endl;        
};

void ControladorClases::listarMensajes() {
    
};

void ControladorClases::listarClasesEnVivo(Docentes* docente, Asignaturas* asignatura) {
    
};

bool ControladorClases::confirmar(){
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