#ifndef LOGINSYSTEM_H
#define LOGINSYSTEM_H

using namespace std;
#include "Usuarios.h"
#include "ColeccionesG/IDictionary.h"
#include "ColeccionesG/ListaDicc.h"
#include "ColeccionesG/Lista.h"
#include "ColeccionesG/KeyInt.h"
#include "Administrador.h"
#include "Docentes.h"
#include "Estudiantes.h"
#include <string>

void CrearRoot(int&,IDictionary&);
bool LoginAdmin(IDictionary*,string,string);
Administrador *RetornarAdmin(IDictionary*,string,string);
Docentes *RetornarDocente(IDictionary*,string,string);
Estudiantes *RetornarEstudiante(IDictionary*,string,string);
bool LoginDocente(IDictionary*,string,string);
bool LoginEstudiante(IDictionary*,string,string);

#endif /* LOGINSYSTEM_H */

