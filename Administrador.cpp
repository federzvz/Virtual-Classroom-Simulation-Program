#include "Administrador.h"
#include "Asignaturas.h"
#include "ColeccionesG/ListDiccIterator.h"
#include "ColeccionesG/KeyString.h"

Administrador::Administrador(int id, string nom, string email, string url, string passwd, IDictionary *asignaturas, IDictionary *clases, string nombre_Instituto) : Usuarios(id, nom, email, url, passwd, asignaturas, clases){

};

void Administrador::altaUsuario(int id, string nom,string mail,string contra,string url, IDictionary* listaUser,IDictionary* listaAdmin, IDictionary* listaDoc, IDictionary* listaEst, IDictionary *asignaturas, IDictionary *clases, int usu_opc, string cedula, string nom_inst){
    if(usu_opc==1){
        Administrador *admin = new Administrador(id,nom,mail,contra,url,asignaturas,clases,nom_inst);
        KeyInt* key = new KeyInt(admin->getId());
        listaAdmin->add(admin,key);
        listaUser->add(admin,key);
    }
    else if(usu_opc==2){
        Usuarios *doc = new Docentes(id,nom,mail,contra,url,asignaturas,clases,nom_inst);
        KeyInt* key = new KeyInt(doc->getId());
        listaDoc->add(doc,key);
        listaUser->add(doc,key);
    }
    else if(usu_opc==3){
        Usuarios *est = new Estudiantes(id,nom,mail,contra,url,asignaturas,clases,cedula);
        KeyInt* key = new KeyInt(est->getId());
        listaEst->add(est,key);
        listaUser->add(est,key);
    }
};

void Administrador::altaAsignatura(string nombre, string codigo, bool teorica, bool practica, bool monitoreo, IDictionary &listaAsignaturas){
    IDictionary *auxInscriptos= new ListDicc(), *auxDocentes= new ListDicc();
    Asignaturas *asignatura= new Asignaturas(nombre, codigo, teorica, practica, monitoreo, auxInscriptos, auxDocentes);
    KeyString *key= new KeyString(codigo);
    IDictionary *aux= &listaAsignaturas;
    aux->add(asignatura, key);
};


void Administrador::asigDocenteAsignatura(int ID, string codAsig, IDictionary* listaDocente, IDictionary* listaAsig){
    KeyInt* keyDoc = new KeyInt(ID);
    KeyString *keyAsig= new KeyString(codAsig);
    Usuarios *Doc_x =  (Usuarios*) listaDocente->find(keyDoc);
    Asignaturas *Asig_x = (Asignaturas*) listaAsig->find(keyAsig), *mostrar_Asig=NULL;
    if (Doc_x->getListaAsig()->member(keyAsig)){
        cout<<endl<<"La asignatura ingresada ya esta asignada al docente en cuestion."<<endl;
    }
    else{
        Doc_x->getListaAsig()->add(Asig_x, keyAsig);    //Asignacion de asignatura al docente
        Asig_x->getDocentes()->add(Doc_x, keyDoc);      //Asignacion del docente a la asignatura
        cout<<endl<<"La asignatura fue asignada exitosamente."<<endl;
        /*
        IIterator *Indice = Doc_x->getListaAsig()->iterator();
        cout<<"Docente: "<<Doc_x->getNombre()<<endl;
        while(Indice->hasNext()){
            mostrar_Asig = (Asignaturas*) Indice->getCurrent();
            //mostrar_Asig->
            cout<<"Nombre: "<<mostrar_Asig->getNombre()<<endl;
            cout<<"ID Asig: "<<mostrar_Asig->getCodigo()<<endl;
            if(mostrar_Asig->getTeoricas()){
                cout<<"Clases Teoricas: Si"<<endl;
            }
            else{
                cout<<"Clases Teoricas: No"<<endl;
            }
            if(mostrar_Asig->getPracticas()){
                cout<<"Clases Practicas: Si"<<endl;
            }
            else{
                cout<<"Clases Practicas: No"<<endl;
            }
            if(mostrar_Asig->getMonitoreo()){
                cout<<"Clases Monitoreo: Si"<<endl;
            }
            else{
                cout<<"Clases Monitoreo: No"<<endl;
            }
            Indice->next();
    }*/
    }
};

void Administrador::eliminarAsignatura(){
    
};

double Administrador::tiempoDictadoClase(){
    double rslt;
    
    return rslt;
};

double Administrador::tiempoAsistenciaClase(){
    double rslt;
    
    return rslt;
};


