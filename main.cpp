#include <cstdlib>
#include <iostream>
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
#include <string>
#include "ColeccionesG/IDictionary.h"
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/ListaDicc.h"
#include "ColeccionesG/Lista.h"
#include "ColeccionesG/KeyInt.h"
#include "ControladorAsignaturas.h"
#include "ControladorUsuarios.h"


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
ICollection *clases= new Lista();
ICollection *asignaturas= new Lista();
ICollection *usuarios= new Lista();


        
                string nombre;
        string codigo;
        bool clasesTeoricas;
        bool clasesPracticas;
        bool clasesDeMonitoreo;

//Estudiantes *usuarioEst=NULL;
//Docentes *usuarioDoc=NULL;
//Administrador *usuarioAdmin=NULL;

int CantAdministradores=0;

void showshit(){
IIterator* iter = listaUsuarios->getIteratorObj();
Usuarios* algo = (Usuarios*) iter->getCurrent();
    while(iter->hasNext()){
        cout<<algo->getNombre()<<endl;
        cout<<algo->geteMail()<<endl;
        cout<<algo->getImagen()<<endl;
        cout<<algo->getPasswd()<<endl;
        iter->next();
    }
}

int main(int argc, char** argv) {
    int opcionMenu,opcionSubMenu,usu_opc,i;
    string username, password,nomAsig, codAsig,mail,url,nom_inst,cedula;
    char tipoClases,seguir;
    bool teoricas, practicas, monitoreo;
    ControladorAsignaturas *controladorA= new ControladorAsignaturas(listaAsignaturas);
    ControladorUsuarios *controladorU= new ControladorUsuarios(usuarios);

    CrearRoot(CantAdministradores, *listaAdministradores);
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
                    Administrador *usuarioAdmin = RetornarAdmin(listaAdministradores,username,password);
                    MenuAdministrador();
                    cin>>opcionSubMenu;
                    switch(opcionSubMenu){
                        case 1: //Alta de usuario OBLIGATORIA
                            do{
                                cout<<"Nombre: ";
                                cin>>username;
                                cout<<"Email: ";
                                cin>>mail;
                                cout<<"Url imagen: ";
                                cin>>url;
                                cout<<"Contraseña: ";
                                cin>>password;
                                cout<<"El usuario es:"<<endl;
                                cout<<"1)Admin"<<endl;
                                cout<<"2)Docente"<<endl;
                                cout<<"3)Estudiante"<<endl;
                                cin>>usu_opc;
                                if(usu_opc==2){
                                    cout<<"Ingrese el nombre del Instituto: ";
                                    cin>>nom_inst; 
                                }
                                else if(usu_opc==3){
                                    cout<<"Ingrese la cedula del estudiante: ";
                                    cin>>cedula;
                                }
                                usuarioAdmin->altaUsuario(username,mail,url,password,listaUsuarios,listaAdministradores,listaDocentes,listaEstudiantes,asignaturas,clases,usu_opc,cedula,nom_inst);
                                cout<<"Desea seguir ingresando valores? s/n ";
                                cin>>seguir;
                            }while(seguir=='s');
                            controladorU->MostrarUsuarios(listaUsuarios);
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
                                *controladorA = listaAsignaturas;
                            }
                            break;
                        case 3: //Asignacion de Docente Asignatura OBLIGATORIA
                           
                            cout<<"Asignacion de Docente:"<<endl;
                            cout<<"ID del docente: ";
                            cin>>i;
                            cout<<"Codigo de la asignatura: ";
                            cin>>codAsig;
                            usuarioAdmin->asigDocenteAsignatura(i,codAsig,listaDocentes,listaAsignaturas);
                            break;
                        case 4: //Eliminar Asignatura OPCIONAL
                            
                            break;
                        case 5: //Calcular Tiempo de Dictado de clase OPCIONAL
                            
                            break;
                        case 6: //Volver
                            
                            break;
                    }
                }
                else{
                    cout<<"ERROR \n";
                }
                break;
            case 2: //DOCENTE
                cout<<"Usuario: ";
                cin>>username;
                cout<<"Contrasenia: ";
                cin>>password;
                if(LoginDocente(listaDocentes,username,password)){
                    Docentes *usuarioDocente = RetornarDocente(listaDocentes,username,password);
                    MenuDocente();
                    cin>>opcionSubMenu;
                    switch(opcionSubMenu){
                        case 1: //Iniciar Clase OBLIGATORIA
                            
                            break;
                        case 2: //Finalizacion de clase OBLIGATORIA
                            
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
                    Estudiantes *usuarioEstudiante = RetornarEstudiante(listaEstudiantes,username,password);
                    MenuEstudiante();
                    cin>>opcionSubMenu;
                    switch(opcionSubMenu){
                        case 1: //Asistir clase en vivo OPCIONAL
                            
                            break;
                        case 2: //Finalización Asistencia OPCIONAL
                            
                            break;
                        case 3: //Inscripción Asignatura OBLIGATORIA
                            listaEstudiantes->removeObj(usuarioEstudiante);
                            usuarioEstudiante->inscripcionAsignatura(controladorA->ListarAsignaturas());
                            listaEstudiantes->add(usuarioEstudiante,new KeyString(usuarioEstudiante->getCedula()));
                            break;
                        case 4: //Volver
                            break;
                    }
                }
                break;
            case 4: //SALIR
                break;
            default:
                break;
        }
    }while(opcionMenu!=4);
    
    
    
    
    return 0;
}