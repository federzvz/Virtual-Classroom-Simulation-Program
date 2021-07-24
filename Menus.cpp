#include <iostream>
#include "Menus.h"

using namespace std;

void MainMenu(){
    cout<<" 1) Administrador \n";
    cout<<" 2) Docente \n";
    cout<<" 3) Estudiante \n";
    cout<<" 4) Salir \n";
    cout<<"OPCION: ";
}

void MenuAdministrador(){
    cout<<" 1) Alta de Usuario \n";
    cout<<" 2) Alta de Asignatura \n";
    cout<<" 3) Asignacion de Docente Asignatura \n";
    cout<<" 4) Eliminar Asignatura \n";
    cout<<" 5) Calcular Tiempo de Dictado de clase \n";
    cout<<" 6) Volver \n";
    cout<<"OPCION: ";
}

void MenuDocente(){
    cout<<" 1) Iniciar Clase \n";
    cout<<" 2) Finalizacion de clase \n";
    cout<<" 3) Calcular tiempo de asistencia \n";
    cout<<" 4) Volver \n";
    cout<<"OPCION: ";
}

void MenuEstudiante(){
    cout<<" 1) Asistir clase en vivo \n";
    cout<<" 2) Finalización Asistencia\n";
    cout<<" 3) Inscripción Asignatura \n";
    cout<<" 4) Volver \n";
    cout<<"OPCION: ";
}