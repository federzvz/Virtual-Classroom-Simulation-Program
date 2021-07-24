#include "Estudiantes.h"

Estudiantes::Estudiantes (int cod, string nom, string email, string url, string passwd, ICollection *asignaturas, ICollection *clases, string cedula) : Usuarios(cod,nom, email, url, passwd, asignaturas, clases){
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

void Estudiantes::inscripcionAsignatura(IDictionary *AsignaturasTotales){
    ICollection* nuevaListaAsignatura = new Lista();
    nuevaListaAsignatura=this->getListaAsig();
    char decision;
    if(this->getListaAsig()->isEmpty()){ //Si no está inscripto a ninguna, se muestran todas las asignaturas.
        IIterator* iterador = AsignaturasTotales->getIteratorObj();
        while(iterador->hasNext()){
            Asignaturas* AsignaturaAux = (Asignaturas*) iterador->getCurrent();
            cout<<AsignaturaAux->getCodigo()<<") "<<AsignaturaAux->getNombre()<<endl;
            iterador->next();
        }
        cout<<"---- ASIGNATURAS DISPONIBLES ----\n";
        iterador = AsignaturasTotales->getIteratorObj();
        while(iterador->hasNext()){
            Asignaturas* AsignaturaAux = (Asignaturas*) iterador->getCurrent();
            cout<<"Desea inscribirse a "<<AsignaturaAux->getNombre()<<"? s/n"<<endl;
            cin>>decision;
            if(decision=='s' || decision=='S'){
                nuevaListaAsignatura->add(AsignaturaAux);
            }
            iterador->next();
        }
        delete iterador;
        
        this->setListaAsig(nuevaListaAsignatura);
        return ;
    }else{ //En el caso contrario, se muestran aquellas asignaturas a las que no está inscripto
        IIterator* iterador = AsignaturasTotales->getIteratorObj();
        IIterator* iterador2 = this->getListaAsig()->iterator();
        IDictionary* lista = new ListDicc();
        string AsignaturasInscriptas[100],AsignaturasDisponibles[100];
        int i=0,cantidad=0;
        bool inscripto;
        while(iterador2->hasNext()){ //Rrecorro todas las asignaturas y obtengo el nombre de las mismas
            Asignaturas* AsignaturaAux2 = (Asignaturas*) iterador2->getCurrent();
            AsignaturasInscriptas[i]=AsignaturaAux2->getNombre();
            i++;
            iterador2->next();
        }
        delete iterador2;
        cout<<"---- ASIGNATURAS DISPONIBLES ----\n";
        while(iterador->hasNext()){ //Voy rrecorriendo todas las asignaturas y solo muestro aquellas aparezcan en el array de nombres
            inscripto=false;
            Asignaturas* AsignaturaAux = (Asignaturas*) iterador->getCurrent();
            for(int j=0;j<i;j++){
                if(AsignaturasInscriptas[j]==AsignaturaAux->getNombre()){
                    inscripto=true;
                }
            }
            if(inscripto==false){
                cout<<"[#"<<AsignaturaAux->getCodigo()<<"] "<<AsignaturaAux->getNombre()<<endl;
                AsignaturasDisponibles[cantidad]=AsignaturaAux->getNombre();
                cantidad++;
            }
            //lista->add(AsignaturaAux, new KeyString(AsignaturaAux->getCodigo()));
            iterador->next();
        }
        delete iterador;
        cout<<"---- SELECCION ----\n";
        
            IIterator* iterador3 = AsignaturasTotales->getIteratorObj();
            while(iterador3->hasNext()){ //Voy rrecorriendo todas las asignaturas y solo muestro aquellas aparezcan en el array de nombres
            Asignaturas* AsignaturaAux = (Asignaturas*) iterador3->getCurrent();
            for(int j=0;j<cantidad;j++){
                if(AsignaturasDisponibles[j]==AsignaturaAux->getNombre()){
                    cout<<"Desea inscribirse a "<<AsignaturaAux->getNombre()<<"? s/n"<<endl;
                    cin>>decision;
                    if(decision=='s' || decision=='S'){
                        nuevaListaAsignatura->add(AsignaturaAux);
                    }
                }
            }
            iterador3->next();
        }
            
            this->setListaAsig(nuevaListaAsignatura);
    }
};

    
