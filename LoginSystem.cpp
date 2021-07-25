#include "LoginSystem.h"


void CrearRoot(int& CantAdministradores, IDictionary& listaAdministradores){ //CREA UN USUARIO ROOT, Y LO AÑADE AL Diccionario ListaAdministradores del Main
    IDictionary *asignaturas = new ListDicc();
    IDictionary *clases = new ListDicc();
    KeyInt* key = new KeyInt(CantAdministradores);
    Usuarios *Admin = new Usuarios(CantAdministradores,"root","root","/imagen0","root",asignaturas,clases);
    listaAdministradores.add(Admin, key);
    CantAdministradores++;
}

bool LoginAdmin (IDictionary* ListaAdmin,string username, string password){ //Verifica que el usuario 
    IIterator* iterador = ListaAdmin->getIteratorObj();
    while(iterador->hasNext()){
        Usuarios* AdminAux = (Usuarios*)(iterador->getCurrent());
        if(AdminAux->getPasswd() == password && AdminAux->getNombre() == username){
            return true;
        }
        iterador->next();
    }
    
    delete iterador;
    return false; 
}

Administrador *RetornarAdmin (IDictionary* ListaAdmin,string username, string password){ //Verifica que el usuario 
    IIterator* iterador = ListaAdmin->getIteratorObj();
    while(iterador->hasNext()){
        Usuarios* AdminAux = (Usuarios*)(iterador->getCurrent());
        if(AdminAux->getPasswd() == password && AdminAux->getNombre() == username){
            Administrador* AdminUser = (Administrador*)(iterador->getCurrent());
            return AdminUser;
        }
        iterador->next();
    }
    delete iterador;
}

bool LoginDocente (IDictionary* ListaDocente,string username, string password){
    IIterator* iterador = ListaDocente->getIteratorObj();
    while(iterador->hasNext()){
        Usuarios* DocenteAux = (Usuarios*)(iterador->getCurrent());
        if(DocenteAux->getPasswd() == password && DocenteAux->getNombre() == username){
            return true;
        }
        iterador->next();
    }
    delete iterador;
    return false;
}

Docentes *RetornarDocente (IDictionary* ListaDocente,string username, string password){ //Verifica que el usuario 
    IIterator* iterador = ListaDocente->getIteratorObj();
    while(iterador->hasNext()){
        Usuarios* DocenteAux = (Usuarios*)(iterador->getCurrent());
        if(DocenteAux->getPasswd() == password && DocenteAux->getNombre() == username){
            Docentes* DocenteUser = (Docentes*)(iterador->getCurrent());
            return DocenteUser;
        }
        iterador->next();
    }
    
    delete iterador;
}

bool LoginEstudiante (IDictionary* ListaEstudiante,string username, string password){
        IIterator* iterador = ListaEstudiante->getIteratorObj();
    while(iterador->hasNext()){
        Usuarios* EstudianteAux = (Usuarios*)(iterador->getCurrent());
        if(EstudianteAux->getPasswd() == password && EstudianteAux->getNombre() == username){
            return true;
        }
        iterador->next();
    }
    delete iterador;
    return false;
}

Estudiantes *RetornarEstudiante (IDictionary* ListaEstudiante,string username, string password){ //Verifica que el usuario 
    IIterator* iterador = ListaEstudiante->getIteratorObj();
    while(iterador->hasNext()){
        Usuarios* DocenteAux = (Usuarios*)(iterador->getCurrent());
        if(DocenteAux->getPasswd() == password && DocenteAux->getNombre() == username){
            Estudiantes* EstudianteUser = (Estudiantes*)(iterador->getCurrent());
            return EstudianteUser;
        }
        iterador->next();
    }
    
    delete iterador;
}