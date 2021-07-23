#ifndef CONTROLADORASIGNATURAS_H
#define CONTROLADORASIGNATURAS_H

using namespace std;
#include "string"
#include "ColeccionesG/IDictionary.h"


class ControladorAsignaturas{
private:
    IDictionary *asignaturas;
public:
    ControladorAsignaturas(IDictionary*);
    void ListarAsignaturas();
    bool confirmar();
};

#endif /* CONTROLADORASIGNATURAS_H */

