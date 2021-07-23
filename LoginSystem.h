#ifndef LOGINSYSTEM_H
#define LOGINSYSTEM_H
#include <string>
#include "ColeccionesG/IDictionary.h"
#include "Administrador.h"
#include "Docentes.h"
#include "Estudiantes.h"

using namespace std;

void CrearRoot(int&,IDictionary&);
bool LoginAdmin(IDictionary*,string,string);
Administrador RetornarAdmin(IDictionary*,string,string);
Docentes RetornarDocente(IDictionary*,string,string);
Estudiantes RetornarEstudiante(IDictionary*,string,string);
bool LoginDocente(IDictionary*,string,string);
bool LoginEstudiante(IDictionary*,string,string);



#endif /* LOGINSYSTEM_H */

