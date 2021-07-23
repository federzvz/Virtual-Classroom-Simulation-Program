#include "Administrador.h"
#include "ColeccionesG/KeyInt.h"

Administrador::Administrador(int cod,string nom, string email, string url, string passwd, ICollection *asignaturas, ICollection *clases) : Usuarios(cod,nom, email, url, passwd, asignaturas, clases){
    
};

void Administrador::altaUsuario(string nom,string mail,string contra,string url,IDictionary* listaAdmin,IDictionary* listaDoc, IDictionary* listaEst,ICollection *asignaturas,ICollection *clases,int usu_opc,string cedula,string nom_inst){
    int i=0;
    if(usu_opc==1){
        //Administrador(i,nom,mail,contra,url,asignaturas,clases);
        Usuarios *Admin = new Administrador(i,nom,mail,contra,url,asignaturas,clases);
        KeyInt* key = new KeyInt(Admin->getID());
        listaAdmin->add(Admin,key);
    }
    else if(usu_opc==2){
        Usuarios *Doc = new Docentes(i,nom,mail,contra,url,asignaturas,clases,nom_inst);
        KeyInt* key = new KeyInt(Doc->getID());
        listaDoc->add(Doc,key);
    }
    else if(usu_opc==3){
        Usuarios *Est = new Estudiantes(i,nom,mail,contra,url,asignaturas,clases,cedula);
        KeyInt* key = new KeyInt(Est->getID());
        listaEst->add(Est,key);
    }
};

void Administrador::altaAsignatura(){
    
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

