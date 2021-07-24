#include "Administrador.h"
#include "Asignaturas.h"
#include "ColeccionesG/ListDiccIterator.h"
#include "ColeccionesG/KeyString.h"
int i=1;
Administrador::Administrador(int id, string nom, string email, string url, string passwd, ICollection *asignaturas, ICollection *clases, string nombre_Instituto) : Usuarios(id, nom, email, url, passwd, asignaturas, clases){
    
};

void Administrador::altaUsuario(string nom,string mail,string contra,string url,IDictionary* listaUser,IDictionary* listaAdmin,IDictionary* listaDoc, IDictionary* listaEst,ICollection *asignaturas,ICollection *clases,int usu_opc,string cedula,string nom_inst){
    int i=0;
    if(usu_opc==1){
        //Administrador(i,nom,mail,contra,url,asignaturas,clases);
        Administrador *Admin = new Administrador(i,nom,mail,contra,url,asignaturas,clases);
        KeyInt* key = new KeyInt(Admin->getID());
        listaAdmin->add(Admin,key);
        listaUser->add(Admin,key);
        i++;
    }
    else if(usu_opc==2){
        Usuarios *Doc = new Docentes(i,nom,mail,contra,url,asignaturas,clases,nom_inst);
        KeyInt* key = new KeyInt(Doc->getID());
        listaDoc->add(Doc,key);
        listaUser->add(Doc,key);
        i++;
    }
    else if(usu_opc==3){
        Usuarios *Est = new Estudiantes(i,nom,mail,contra,url,asignaturas,clases,cedula);
        KeyInt* key = new KeyInt(Est->getID());
        listaEst->add(Est,key);
        listaUser->add(Est,key);
        i++;
    }
};


void Administrador::altaAsignatura(string nombre, string codigo, bool teorica, bool practica, bool monitoreo, IDictionary &listaAsignaturas){
    Asignaturas *asignatura= new Asignaturas(nombre, codigo, teorica, practica, monitoreo);
    KeyString *key= new KeyString(codigo);
    IDictionary *aux= &listaAsignaturas;
    aux->add(asignatura, key);
};


void Administrador::asigDocenteAsignatura(int ID,string codAsig,IDictionary* listaDocente,IDictionary* listaAsig){
    KeyInt* keyDoc = new KeyInt(ID);
    KeyString *keyAsig= new KeyString(codAsig);
    
    Usuarios *Doc_x =  (Usuarios*) listaDocente->find(keyDoc);
    Asignaturas *Asig_x = (Asignaturas*) listaAsig->find(keyAsig);
        
    Doc_x->addListaClases(Asig_x);
    
    IIterator *Indice = Doc_x->getListaAsig()->iterator();
    
    cout<<"Docente: "<<Doc_x->getNombre()<<endl;
    while(Indice->hasNext()){
        Asignaturas* Mostrar_Asig = (Asignaturas*) Indice->getCurrent();
        cout<<"Nombre: "<<Mostrar_Asig->getNombre()<<endl;
        cout<<"ID Asig: "<<Mostrar_Asig->getCodigo()<<endl;
        if(Mostrar_Asig->getTeoricas()){
            cout<<"Clases Teoricas: Si"<<endl;
        }
        else
            cout<<"Clases Teoricas: No"<<endl;
        if(Mostrar_Asig->getPracticas()){
            cout<<"Clases Practicas: Si"<<endl;
        }
        else
            cout<<"Clases Practicas: No"<<endl;
        if(Mostrar_Asig->getMonitoreo()){
            cout<<"Clases Monitoreo: Si"<<endl;
        }
        else
            cout<<"Clases Monitoreo: No"<<endl;
        Indice->next();
    }
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


