#ifndef LOGINSYSTEM_H
#define LOGINSYSTEM_H
#include <string>
#include "ColeccionesG/IDictionary.h"

using namespace std;

void CrearRoot(int&,IDictionary&);
bool LoginAdmin(IDictionary*,string,string);
bool LoginDocente(IDictionary*,string,string);
bool LoginEstudiante(IDictionary*,string,string);



#endif /* LOGINSYSTEM_H */

