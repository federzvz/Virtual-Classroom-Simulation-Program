#ifndef CLASESPRACTICAS_H
#define CLASESPRACTICAS_H

using namespace std;
#include "Clases.h"
#include "ColeccionesG/IDictionary.h"
#include "DtTimeStamp.h"
#include "Asignaturas.h"
#include "Docentes.h"
#include "string"

class ClasesPracticas: public Clases {
public:
    ClasesPracticas(string, int, Asignaturas*, Docentes*, string, IDictionary*, IDictionary*, DtTimeStamp*, DtTimeStamp*, string);
private:

};

#endif /* CLASESPRACTICAS_H */

