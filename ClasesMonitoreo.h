#ifndef CLASESMONITOREO_H
#define CLASESMONITOREO_H

using namespace std;
#include "Clases.h"
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/IDictionary.h"
#include "DtTimeStamp.h"
#include "Asignaturas.h"
#include "Docentes.h"
#include "string"

class ClasesMonitoreo : public Clases {
private:
    ICollection *listaHabilitados;
public:
    ClasesMonitoreo(string, int, Asignaturas*, Docentes*, IDictionary*, IDictionary*, DtTimeStamp*, DtTimeStamp*, string, ICollection*);
};

#endif /* CLASESMONITOREO_H */

