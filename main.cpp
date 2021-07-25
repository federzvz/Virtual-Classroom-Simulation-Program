#include "ControladorAsignaturas.h"
#include "Menus.h"
#include "Administrador.h"
#include "Asignaturas.h"
#include "Clases.h"
#include "ClasesMonitoreo.h"
#include "ClasesPracticas.h"
#include "ClasesTeoricas.h"
#include "Docentes.h"
#include "DtFecha.h"
#include "DtTimeStamp.h"
#include "Estudiantes.h"
#include "LoginSystem.h"
#include "Mensajes.h"
#include "Reproducciones.h"
#include "Usuarios.h"
#include "ColeccionesG/ListaDicc.h"
#include "ControladorUsuarios.h"
#include "ControladorClases.h"
#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

IDictionary *listaUsuarios= new ListDicc();
IDictionary *listaDocentes= new ListDicc();
IDictionary *listaAdministradores= new ListDicc();
IDictionary *listaEstudiantes= new ListDicc();
IDictionary *listaAsignaturas= new ListDicc();
IDictionary *listaClases= new ListDicc();
IDictionary *listaClasesTeoricas= new ListDicc();
IDictionary *listaClasesPracticas= new ListDicc();
IDictionary *listaClasesMonitoreo= new ListDicc();
IDictionary *listaReproducciones= new ListDicc();

int cantUsuarios=0;
int cantAdministradores=0;
int cantClases=0;

int main(int argc, char** argv) {
    int opcionMenu,opcionSubMenu, dia, mes, anio, hr, min, seg, idEstudiante, cantAsistentes, user_op, idDocente, idClase;
    unsigned int cantAsist;
    char tipoClases, ingresarEst, auxDecsion, seguir;
    string username, password, nomAsig, codAsig, nomClase, modClase, userNom, userMail, userUrl, userPasswd, nom_inst, cedula, urlVideo="randomUrl";
    bool teoricas, practicas, monitoreo, ok=false;
    ControladorAsignaturas *controladorA= new ControladorAsignaturas(listaAsignaturas);
    ControladorUsuarios *controladorU= new ControladorUsuarios(listaUsuarios);
    ControladorClases *controladorC= new ControladorClases(listaClases);
    Estudiantes *usuarioEst=NULL, *auxEst=NULL;
    Docentes *usuarioDoc=NULL;
    Administrador *usuarioAdmin=NULL;
    Asignaturas *auxAsig=NULL;
    Clases *auxClase=NULL;
    ClasesTeoricas *auxClaseT=NULL;
    ClasesPracticas *auxClaseP=NULL;
    ClasesMonitoreo *auxClaseM=NULL;
    IDictionary *listaEstudiantes=NULL, *userAsignaturas=NULL, *userClases=NULL;
    IIterator *iter=NULL;
    IKey *auxKey=NULL;
    DtFecha *fechaClase=NULL;
    DtTimeStamp *horaClase=NULL;
    CrearRoot(cantAdministradores, *listaAdministradores);
    do{
        MainMenu();
        cin>>opcionMenu;
        switch(opcionMenu){
            case 1: //ADMINISTRADOR
                cout<<"Usuario: ";
                cin>>username;
                cout<<"Contrasenia: ";
                cin>>password;
                if(LoginAdmin(listaAdministradores,username,password)==true){
                    usuarioAdmin=RetornarAdmin(listaAdministradores,username,password);
                    MenuAdministrador();
                    cin>>opcionSubMenu;
                    switch(opcionSubMenu){
                        case 1: //Alta de usuario OBLIGATORIA
                                do{
                                cout<<"Nombre: ";
                                cin>>userNom;
                                cout<<"Email: ";
                                cin>>userMail;
                                cout<<"Url imagen: ";
                                cin>>userUrl;
                                cout<<"Contraseña: ";
                                cin>>userPasswd;
                                cout<<"El usuario es:"<<endl;
                                cout<<"1)Admin"<<endl;
                                cout<<"2)Docente"<<endl;
                                cout<<"3)Estudiante"<<endl;
                                cin>>user_op;
                                if(user_op==2){
                                    cout<<"Ingrese el nombre del Instituto: ";
                                    cin>>nom_inst; 
                                }
                                else if(user_op==3){
                                    cout<<"Ingrese la cedula del estudiante: ";
                                    cin>>cedula;
                                }
                                userAsignaturas= new ListDicc();
                                userClases= new ListDicc();
                                usuarioAdmin->altaUsuario(cantUsuarios, userNom, userMail, userUrl, userPasswd, listaUsuarios, listaAdministradores, listaDocentes, listaEstudiantes, userAsignaturas, userClases, user_op, cedula, nom_inst);
                                cantUsuarios++;
                                cout<<"Desea seguir ingresando valores? s/n ";
                                cin>>seguir;
                            }while(seguir=='s' || seguir=='S');
                            controladorU->mostrarUsuarios(listaUsuarios);
                            break;
                        case 2: //Alta de Asignatura OBLIGATORIA
                            cout<<"Alta de Asignatura"<<endl;
                            cout<<"Nombre: ";
                            cin>>nomAsig;
                            cout<<"Codigo: ";
                            cin>>codAsig;
                            cout<<"Posee instancias teoricas? (s/n)"<<endl;
                            cin>>tipoClases;
                            if (tipoClases=='s' || tipoClases=='S'){
                                teoricas=true;
                            }
                            else{
                                teoricas=false;
                            }
                            cout<<"Posee instancias practicas? (s/n)"<<endl;
                            cin>>tipoClases;
                            if (tipoClases=='s' || tipoClases=='S'){
                                practicas=true;
                            }
                            else{
                                practicas=false;
                            }
                            cout<<"Posee instancias de monitoreo? (s/n)"<<endl;
                            cin>>tipoClases;
                            if (tipoClases=='s' || tipoClases=='S'){
                                monitoreo=true;
                            }
                            else{
                                monitoreo=false;
                            }
                            //Mostrar datos ingresados
                            cout<<endl<<"Datos ingresados"<<endl;
                            cout<<"Nombre: ";
                            cout<<nomAsig<<endl;
                            cout<<"Codigo: ";
                            cout<<codAsig<<endl;
                            if (teoricas==true){
                                cout<<"Clases teoricas: Si"<<endl;
                            }
                            else{
                                cout<<"Clases teoricas: No"<<endl;
                            }
                            if (practicas==true){
                                cout<<"Clases practicas: Si"<<endl;
                            }
                            else{
                                cout<<"Clases practicas: No"<<endl;
                            }
                            if (monitoreo==true){
                                cout<<"Clases de monitoreo: Si"<<endl;
                            }
                            else{
                                cout<<"Clases de monitoreo: No"<<endl;
                            }
                            if(controladorA->confirmar()){
                                usuarioAdmin->altaAsignatura(nomAsig, codAsig, teoricas, practicas, monitoreo, *listaAsignaturas);
                            }
                            break;
                        case 3: //Asignacion de Docente Asignatura OBLIGATORIA
                            cout<<"Asignacion de Docente:"<<endl;
                            cout<<"ID del docente: ";
                            cin>>idDocente;
                            cout<<"Codigo de la asignatura: ";
                            cin>>codAsig;
                            usuarioAdmin->asigDocenteAsignatura(idDocente, codAsig, listaDocentes, listaAsignaturas);
                            break;
                        case 4: //Eliminar Asignatura OPCIONAL
                            
                            break;
                        case 5: //Calcular Tiempo de Dictado de clase OPCIONAL
                            
                            break;
                        case 6: //Volver
                            
                            break;
                    }
                }
                break;
            case 2: //DOCENTE
                cout<<"Usuario: ";
                cin>>username;
                cout<<"Contrasenia: ";
                cin>>password;
                if(LoginDocente(listaDocentes,username,password)){
                    usuarioDoc=RetornarDocente(listaDocentes,username,password);
                    MenuDocente();
                    cin>>opcionSubMenu;
                    switch(opcionSubMenu){
                        case 1: //Iniciar Clase OBLIGATORIA
                            iter=usuarioDoc->getListaAsig()->getIteratorObj();
                            while(iter->hasNext()){     //Se muestran las asignaturas del docente
                                auxAsig= (Asignaturas*) iter->getCurrent();
                                controladorA->mostrarAsignatura(auxAsig);
                                iter->next();
                            }
                            cout<<"Codigo de la asignatura de la clase: ";
                            cin>>codAsig;
                            auxKey= new KeyString(codAsig);
                            if (usuarioDoc->getListaAsig()->member(auxKey)==false){
                                cout<<"La asignatura ingresada no se encuentra dentro de las asignadas al docente."<<endl;
                                
                            }
                            else{
                                auxAsig=controladorA->seleccionAsignatura(codAsig, usuarioDoc->getListaAsig());
                                do{
                                cout<<endl<<"Teorica (t)"<<endl;
                                cout<<"Practica (p)"<<endl;
                                cout<<"De monitoreo (m)"<<endl<<endl;
                                cout<<"Modalidad: ";
                                cin>>auxDecsion;
                                if (auxDecsion=='t'){
                                    modClase="Teorica";
                                    if (auxAsig->getTeoricas()){
                                        ok=true;
                                        cout<<"Cantidad de Asistentes: ";
                                        cin>>cantAsistentes;
                                    }
                                }
                                else {
                                    if(auxDecsion=='p'){
                                        modClase="Practica";
                                        if (auxAsig->getPracticas()){
                                            ok=true;
                                        }
                                    }
                                    else{
                                        if(auxDecsion=='m'){
                                            modClase="Monitoreo";
                                            if (auxAsig->getMonitoreo()){
                                                ok=true;
                                            }
                                        }
                                    }
                                }
                                if (ok==false){
                                    cout<<endl<<"La modalidad ingresada para la clase no coincide con las habilitadas en la asignatura seleccionada, por favor vuelva a ingresarla :D"<<endl;
                                }
                                }while(ok==false);
                                cout<<"Nombre de la clase: ";
                                cin>>nomClase;
                                cout<<"Fecha de la clase"<<endl;
                                cout<<"Dia: ";
                                cin>>dia;
                                cout<<"Mes: ";
                                cin>>mes;
                                cout<<"Anio: ";
                                cin>>anio;
                                fechaClase= new DtFecha(dia, mes, anio);
                                cout<<"Hora de la clase: "<<endl;
                                cout<<"Hora: ";
                                cin>>hr;
                                cout<<"Min: ";
                                cin>>min;
                                cout<<"Seg: ";
                                cin>>seg;
                                horaClase= new DtTimeStamp(*fechaClase, hr, min, seg);
                                //En caso de que tenga monitoreo
                                if (modClase=="Monitoreo"){
                                    listaEstudiantes= new ListDicc(); 
                                    controladorA->listarEstudiantesInscriptos(auxAsig);
                                    do {
                                        cout<<"ID del estudiante: ";
                                        cin>>idEstudiante;
                                        auxEst=controladorU->seleccionTipoEstudiante(idEstudiante, listaEstudiantes);
                                        auxKey= new KeyInt(auxEst->getId());
                                        listaEstudiantes->add(auxEst, auxKey);
                                        cout<<endl<<"Desea continuar ingresando etudiantes habilitados? (S/N)"<<endl;
                                        cin>>ingresarEst;
                                    }while(ingresarEst=='s' || ingresarEst=='S');
                                    }
                                else{
                                    listaEstudiantes=NULL;
                                }   
                                //Se muestran datos ingreados
                                cout<<endl<<"Datos ingresados"<<endl;
                                cout<<"Nombre: "<<nomClase<<endl;
                                cout<<"ID: "<<cantClases<<endl;
                                cantClases++;
                                cout<<"Asignatura: "<<auxAsig->getNombre()<<endl;
                                cout<<"Modalidad: "<<modClase<<endl;
                                if (modClase=="Monitoreo"){
                                    cout<<"Estudiantes Habilitados"<<endl;
                                    iter=listaEstudiantes->getIteratorObj();
                                    cout<<" ID       Nombre "<<endl;
                                    while(iter->hasNext()){
                                        auxEst= (Estudiantes*) iter->getCurrent();
                                        cout<<" "<<auxEst->getId()<<"       "<<auxEst->getNombre()<<endl;
                                        iter->next();
                                    }
                                }
                                cout<<"Fecha: ";
                                fechaClase->mostrarFecha();
                                cout<<endl;
                                cout<<"Hora de inicio: ";
                                horaClase->mostrarHora();
                                cout<<endl;
                                if (modClase=="Teorica"){
                                    cout<<"Cantidad de Asistentes: "<<cantAsistentes<<endl;
                                }
                                //Decision
                                if (controladorC->confirmar()){
                                    usuarioDoc->inicioDeClase(nomClase, cantClases, auxAsig, *usuarioDoc, modClase, listaEstudiantes, horaClase, cantAsistentes, *listaClases, *listaClasesTeoricas, *listaClasesPracticas, *listaClasesMonitoreo);
                                    cantClases++;
                                }
                                ok=false;
                                fechaClase=NULL;
                                horaClase=NULL;
                                delete (auxKey);
                                auxKey=NULL;
                            }
                            break;
                        case 2: //Finalizacion de clase OBLIGATORIA
                            iter=usuarioDoc->getListaClases()->getIteratorObj();
                            while(iter->hasNext()){
                                auxClase= (Clases*) iter->getCurrent();
                                if (auxClase->getHoraFinal()==NULL){
                                    controladorC->mostrarDatosClase(auxClase);
                                }
                                iter->next();
                            }
                            cout<<endl<<"ID de la clase a finalizar: ";
                            cin>>idClase;
                            auxKey= new KeyInt(idClase);
                            if (usuarioDoc->getListaClases()->member(auxKey)==false){
                                cout<<"La ID de clase ingresada no se encuentra dentro de aquellas dictadas por el docente."<<endl;
                            }
                            else{
                                auxClase=(Clases*)listaClases->find(auxKey);
                                cout<<endl<<"Clase seleccionada";
                                controladorC->mostrarDatosClase(auxClase);
                                if(controladorC->confirmar()){
                                    cout<<endl<<"Fecha de finalizacion de la clase"<<endl;
                                    cout<<"Dia: ";
                                    cin>>dia;
                                    cout<<"Mes: ";
                                    cin>>mes;
                                    cout<<"Anio: ";
                                    cin>>anio;
                                    fechaClase= new DtFecha(dia, mes, anio);
                                    cout<<"Hora de la clase: "<<endl;
                                    cout<<"Hora: ";
                                    cin>>hr;
                                    cout<<"Min: ";
                                    cin>>min;
                                    cout<<"Seg: ";
                                    cin>>seg;
                                    horaClase= new DtTimeStamp(*fechaClase, hr, min, seg);
                                    if (auxClase->getModalidad()=="Teorica"){
                                        cantAsist=auxClase->getEstudiantes()->size();
                                    }
                                    else{
                                        cantAsist=-1;
                                    /*
                                    if(auxClase->getModalidad()=="Practica"){
                                        cantAsist=-1;
                                        auxClaseP= (ClasesPracticas*) listaClasesPracticas->find(auxKey);
                                        usuarioDoc->finalizaciónDeClase(auxClaseP, horaClase, urlVideo, cantAsist);
                                    }
                                    else{
                                        if(auxClase->getModalidad()=="Monitoreo"){
                                            cantAsist=-1;
                                            auxClaseM= (ClasesMonitoreo*) listaClasesMonitoreo->find(auxKey);
                                            usuarioDoc->finalizaciónDeClase(auxClaseM, horaClase, urlVideo, cantAsist);
                                        }
                                    }*/
                                    }
                                    usuarioDoc->finalizaciónDeClase(auxKey, horaClase, urlVideo, cantAsist, *listaClases, *listaClasesTeoricas, *listaClasesPracticas, *listaClasesMonitoreo);
                                }
                                fechaClase=NULL;
                                horaClase=NULL;
                            }
                            break;
                        case 3: //Calcular tiempo de asistencia OPCIONAL
                            
                            break;
                        case 4: //Volver
                            break;
                    }
                }
                break;
            case 3: //ESTUDIANTE
                cout<<"Usuario: ";
                cin>>username;
                cout<<"Contrasenia: ";
                cin>>password;
                if(LoginEstudiante(listaEstudiantes,username,password)){
                    usuarioEst=RetornarEstudiante(listaEstudiantes,username,password);
                    MenuEstudiante();
                    cin>>opcionSubMenu;
                    switch(opcionSubMenu){
                        case 1: //Asistir clase en vivo OPCIONAL
                            
                            break;
                        case 2: //Finalización Asistencia OPCIONAL
                            
                            break;
                        case 3: //Inscripción Asignatura OBLIGATORIA
                            /*listaEstudiantes->removeObj(usuarioEstudiante);
                            usuarioEstudiante->inscripcionAsignatura(controladorA->ListarAsignaturas());
                            listaEstudiantes->add(usuarioEstudiante,new KeyString(usuarioEstudiante->getCedula()));*/
                            break;
                        case 4: //Volver
                            break;
                    }
                }
                break;
            case 4: //SALIR
                delete (auxAsig);
                delete (iter);
                
                break;
            default:
                break;
        }
    }while(opcionMenu!=4);
    return 0;
}