#include "LoginSystem.h"
#include "Usuarios.h"
#include "ColeccionesG/IDictionary.h"
#include "ColeccionesG/ListaDicc.h"
#include "ColeccionesG/Lista.h"
#include "ColeccionesG/KeyInt.h"


void CrearRoot(int& CantAdministradores, IDictionary& listaAdministradores){
    ICollection *asignaturas = new Lista();
    ICollection *clases = new Lista();
    KeyInt* key = new KeyInt(CantAdministradores);
    Usuarios *Admin = new Usuarios(CantAdministradores,"root","root","/imagen0","root",asignaturas,clases);
    listaAdministradores.add(Admin, key);
    CantAdministradores++;
}

bool LoginAdmin (IDictionary* ListaAdmin,string username, string password){
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




    
    
//    IIterator* iterador = EstadosConv->iterator();
//    IDictionary* resultado = new ListDicc();
//    while (iterador->hasNext()) {
//        EstadoConv* estado = (EstadoConv*) (iterador->getCurrent());
//        Conversacion* conv = estado->getConversacion();
//        Grupo* convg = dynamic_cast<Grupo*> (conv);
//        if (convg) {
//            if (convg->getAdministradores()->member(new KeyString(this->NumTel)))
//                resultado->add(new DtConversacion(2, convg->getNombre(), " ", convg->getNomG(), 0), new KeyString(convg->getNombre()));
//        }
//        iterador->next();
//    }
//    
//    
//    IDictionary* ControladorU::ListarContactos() {//lista todos los usuarios del sistema
//    if (u == NULL)
//        throw std::invalid_argument("No hay una sesion activa");
//    if (this->usuarios->size() < 2)
//        throw std::invalid_argument("No hay usuarios en el sistema");
//
//    IIterator* iter = u->verContactos()->getIteratorObj();
//    IDictionary* contactos = new ListDicc();
//    while (iter->hasNext()) {
//        DtUsuario* usuario = (DtUsuario*) (iter->getCurrent());
//        contactos->add(usuario, new KeyString(usuario->getNumero()));
//        iter->next();
//    }
//    delete iter;
//    return contactos;
//    
//    delete iterador;
//    return resultado;