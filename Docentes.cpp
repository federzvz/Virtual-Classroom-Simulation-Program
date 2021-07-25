#include "Docentes.h"
#include "ClasesTeoricas.h"
#include "ClasesPracticas.h"
#include "ClasesMonitoreo.h"

Docentes::Docentes (int id, string nom, string email, string url, string passwd, IDictionary* asignaturas, IDictionary* clases, string nombre_Instituto) : Usuarios(id, nom, email, url, passwd, asignaturas, clases){
    this->nombre_Instituto=nombre_Instituto;
};

void Docentes::setNombre_Instituto(string nom){
    this->nombre_Instituto=nom;
};

string Docentes::getNombre_Instituto(){
    return this->nombre_Instituto;
};

//Archivos editados: asignaturas, docentes, main, clases (con sus subclases), usuarios
void Docentes::inicioDeClase(string nombre, int id, Asignaturas *asignatura, Docentes &docente, string modalidad, IDictionary *listaHabilitados, DtTimeStamp *horaDeComienzo, int cant, IDictionary &listaClases, IDictionary &listaClasesTeoricas, IDictionary &listaClasesPracticas, IDictionary &listaClasesMonitoreo){
    string linkVideo="NULL";
    Docentes *auxDoc=&docente;
    IDictionary *mensajes=NULL, *aux=NULL, *estudiantes=NULL;
    DtTimeStamp *horaDeFinalizacion=NULL;
    KeyInt *key=NULL;
    key= new KeyInt(id);
    if (modalidad=="Teorica"){
        ClasesTeoricas *claseTeorica= new ClasesTeoricas(nombre, id, asignatura, auxDoc, modalidad, estudiantes, mensajes, horaDeComienzo, horaDeFinalizacion, linkVideo, cant);
        aux= &listaClasesTeoricas;
        aux->add(claseTeorica, key); 
        aux= &listaClases;
        aux->add(claseTeorica, key);
        aux= docente.getListaClases();
        aux->add(claseTeorica, key);
    }
    else{
        if (modalidad=="Practica"){
            ClasesPracticas *clasePractica= new ClasesPracticas(nombre, id, asignatura, auxDoc, modalidad, estudiantes, mensajes, horaDeComienzo, horaDeFinalizacion, linkVideo);
            aux= &listaClasesPracticas;
            aux->add(clasePractica, key);
            aux= &listaClases;
            aux->add(clasePractica, key);
            aux= docente.getListaClases();
            aux->add(clasePractica, key);
        }
        else{
            if (modalidad=="Monitoreo"){
                ClasesMonitoreo *claseMonitoreo= new ClasesMonitoreo(nombre, id, asignatura, auxDoc, modalidad, estudiantes, mensajes, horaDeComienzo, horaDeFinalizacion, linkVideo, listaHabilitados);
                aux= &listaClasesMonitoreo;
                aux->add(claseMonitoreo, key);
                aux= &listaClases;
                aux->add(claseMonitoreo, key);
                aux= docente.getListaClases();
                aux->add(claseMonitoreo, key);
            }
        }
    }
};

void Docentes::finalizaciónDeClase(IKey *idClase, DtTimeStamp *fechaFinal, string urlVideo, unsigned int cantAsist, IDictionary &listaClases, IDictionary &listaClasesTeoricas, IDictionary &listaClasesPracticas, IDictionary &listaClasesMonitoreo){
    Clases *auxClase=NULL;
    ClasesTeoricas *claseT=NULL;
    ClasesPracticas *claseP=NULL;
    ClasesMonitoreo *claseM=NULL;
    auxClase=(Clases*)listaClases.find(idClase);
    //agregarDatosFinalizacion
    auxClase->setHoraFinal(*fechaFinal);
    auxClase->setVideo(urlVideo);
    if (auxClase->getModalidad()=="Teorica"){
        claseT=(ClasesTeoricas*)listaClasesTeoricas.find(idClase);
        claseT->setHoraFinal(*fechaFinal);
        claseT->setVideo(urlVideo);
        claseT->setCant_Asistentes(cantAsist);
    }
    else{
        if (auxClase->getModalidad()=="Practica"){
            claseP=(ClasesPracticas*)listaClasesPracticas.find(idClase);
            claseP->setHoraFinal(*fechaFinal);
            claseP->setVideo(urlVideo);
        }
        else{
            claseM=(ClasesMonitoreo*)listaClasesMonitoreo.find(idClase);
            claseM->setHoraFinal(*fechaFinal);
            claseM->setVideo(urlVideo);
        }
    }
};

double Docentes::tiempoAsistenciaClase(){
    double rslt;
    
    return rslt;
};

    
    ;
    
    