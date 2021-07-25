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
    IDictionary *listaHabilitados;
public:
    ClasesMonitoreo(string, int, Asignaturas*, Docentes*, string, IDictionary*, IDictionary*, DtTimeStamp*, DtTimeStamp*, string, IDictionary*);
};

#endif /* CLASESMONITOREO_H */

