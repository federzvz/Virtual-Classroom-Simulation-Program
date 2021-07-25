#ifndef CLASESTEORICAS_H
#define CLASESTEORICAS_H

using namespace std;
#include "Clases.h"
#include "ColeccionesG/IDictionary.h"
#include "DtTimeStamp.h"
#include "Asignaturas.h"
#include "Docentes.h"
#include "string"

class ClasesTeoricas: public Clases {
private:
    int Cant_Asist;    
public:
    ClasesTeoricas(string, int, Asignaturas*, Docentes*, string, IDictionary*, IDictionary*, DtTimeStamp*, DtTimeStamp*, string, int);
    void setCant_Asistentes(int);
    int getCant_Asistentes();
    int CalcAsistencia();
};

#endif /* CLASESTEORICAS_H */

