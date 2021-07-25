#include "Estudiantes.h"
#include "ColeccionesG/KeyString.h"

Estudiantes::Estudiantes (int id, string nom, string email, string url, string passwd, IDictionary *asignaturas, IDictionary *clases, string cedula) : Usuarios(id, nom, email, url, passwd, asignaturas, clases){
    this->cedula=cedula;
};

void Estudiantes::setCedula(string cedula){
    this->cedula=cedula;
};

string Estudiantes::getCedula(){
    return this->cedula;
};

float Estudiantes::asistenciaClaseVivo(){
    float rslt;
    
    return rslt;
};

void Estudiantes::finalizaciónAsistenciaVivo(){
    
};

void Estudiantes::inscripcionAsignatura(IDictionary* asignaturasTotales){
    char decision;
    Asignaturas *asignaturaAux1=NULL, *asignaturaAux2=NULL;
    IDictionary* nuevaListaAsignatura = new ListDicc();
    IIterator *iterador=NULL, *iterador2=NULL, *iterador3=NULL;
    IKey *key=NULL;
    nuevaListaAsignatura=this->getListaAsig(); 
    if(this->getListaAsig()->size()==0){ //Si no está inscripto a ninguna, se muestran todas las asignaturas.
        iterador=asignaturasTotales->getIteratorObj();
        while(iterador->hasNext()){
            asignaturaAux1= (Asignaturas*) iterador->getCurrent();
            cout<<asignaturaAux1->getCodigo()<<") "<<asignaturaAux1->getNombre()<<endl;
            iterador->next();
        }
        cout<<"---- ASIGNATURAS DISPONIBLES ----\n";
        iterador = asignaturasTotales->getIteratorObj();
        while(iterador->hasNext()){
            asignaturaAux1 = (Asignaturas*) iterador->getCurrent();
            cout<<"Desea inscribirse a "<<asignaturaAux1->getNombre()<<"? s/n"<<endl;
            cin>>decision;
            if(decision=='s' || decision=='S'){
                key= new KeyString(asignaturaAux1->getCodigo());
                nuevaListaAsignatura->add(asignaturaAux1, key);
            }
            iterador->next();
        }
        delete iterador;
        
        this->setListaAsig(nuevaListaAsignatura);
        return ;
    }else{ //En el caso contrario, se muestran aquellas asignaturas a las que no está inscripto
        iterador = asignaturasTotales->getIteratorObj();
        iterador2 = this->getListaAsig()->getIteratorKey();
        IDictionary* lista = new ListDicc();
        string AsignaturasInscriptas[100], AsignaturasDisponibles[100];
        int i=0,cantidad=0;
        bool inscripto;
        while(iterador2->hasNext()){ //Rrecorro todas las asignaturas y obtengo el nombre de las mismas
            asignaturaAux2 = (Asignaturas*) iterador2->getCurrent();
            AsignaturasInscriptas[i]=asignaturaAux2->getNombre();
            i++;
            iterador2->next();
        }
        delete iterador2;
        cout<<"---- ASIGNATURAS DISPONIBLES ----\n";
        while(iterador->hasNext()){ //Voy rrecorriendo todas las asignaturas y solo muestro aquellas aparezcan en el array de nombres
            inscripto=false;
            asignaturaAux1= (Asignaturas*) iterador->getCurrent();
            for(int j=0;j<i;j++){
                if(AsignaturasInscriptas[j]==asignaturaAux1->getNombre()){
                    inscripto=true;
                }
            }
            if(inscripto==false){
                cout<<"[#"<<asignaturaAux1->getCodigo()<<"] "<<asignaturaAux1->getNombre()<<endl;
                AsignaturasDisponibles[cantidad]=asignaturaAux1->getNombre();
                cantidad++;
            }
            //lista->add(AsignaturaAux, new KeyString(AsignaturaAux->getCodigo()));
            iterador->next();
        }
        delete iterador;
        cout<<"---- SELECCION ----\n";
        iterador3 = asignaturasTotales->getIteratorObj();
        while(iterador3->hasNext()){ //Voy rrecorriendo todas las asignaturas y solo muestro aquellas aparezcan en el array de nombres
        asignaturaAux1=(Asignaturas*) iterador3->getCurrent();
        for(int j=0;j<cantidad;j++){
            if(AsignaturasDisponibles[j]==asignaturaAux1->getNombre()){
                cout<<"Desea inscribirse a "<<asignaturaAux1->getNombre()<<"? s/n"<<endl;
                cin>>decision;
                if(decision=='s' || decision=='S'){
                    key= new KeyString(asignaturaAux1->getCodigo());
                    nuevaListaAsignatura->add(asignaturaAux1, key);
                }
            }
        }
        iterador3->next();
        }      
        this->setListaAsig(nuevaListaAsignatura);
        delete (key);
    }
};

    