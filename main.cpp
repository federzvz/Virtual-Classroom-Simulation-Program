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

using namespace std;

int main(int argc, char** argv) {
    int opcionMenu,opcionSubMenu;
    string username, password;
    
    do{
        MainMenu();
        cin>>opcionMenu;
        switch(opcionMenu){
            case 1: //ADMINISTRADOR
                cout<<"Usuario: ";
                cin>>username;
                cout<<"Contrasenia: ";
                cin>>password;
                if(LoginAdmin(username,password)){
                    MenuAdministrador();
                    cin>>opcionSubMenu;
                    switch(opcionSubMenu){
                        case 1: //Alta de usuario OBLIGATORIA
                            
                            break;
                        case 2: //Alta de Asignatura OBLIGATORIA
                            
                            break;
                        case 3: //Asignacion de Docente Asignatura OBLIGATORIA
                            
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
                if(LoginDocente(username,password)){
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
                if(LoginEstudiante(username,password)){
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

