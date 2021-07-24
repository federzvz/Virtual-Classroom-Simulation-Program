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

ICollection *usuarios= new Lista();

int CantAdministradores=0;

int main(int argc, char** argv) {
    int opcionMenu,opcionSubMenu,i=0;
    char tipoClases;
    string username, password, nomAsig, codAsig;
    bool teoricas, practicas, monitoreo;
    ControladorAsignaturas *controladorA= new ControladorAsignaturas(listaAsignaturas);
    Estudiantes *usuarioEst=NULL;
    Docentes *usuarioDoc=NULL;
    Administrador *usuarioAdmin=NULL;
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
                    usuarioAdmin=RetornarAdmin(listaAdministradores,username,password);
                    MenuAdministrador();
                    cin>>opcionSubMenu;
                    switch(opcionSubMenu){
                        case 1: //Alta de usuario OBLIGATORIA
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
                            if (teoricas=true){
                                cout<<"Clases teoricas: Si"<<endl;
                            }
                            else{
                                cout<<"Clases teoricas: No"<<endl;
                            }
                            if (practicas=true){
                                cout<<"Clases practicas: Si"<<endl;
                            }
                            else{
                                cout<<"Clases practicas: No"<<endl;
                            }
                            if (monitoreo=true){
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
                    usuarioEst=RetornarEstudiante(listaEstudiantes,username,password);
                    MenuEstudiante();
                    cin>>opcionSubMenu;
                    switch(opcionSubMenu){
                        case 1: //Asistir clase en vivo OPCIONAL
                            
                            break;
                        case 2: //Finalización Asistencia OPCIONAL
                            
                            break;
                        case 3: //Inscripción Asignatura OBLIGATORIA
                            
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
