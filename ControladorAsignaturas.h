#ifndef CONTROLADORASIGNATURAS_H
#define CONTROLADORASIGNATURAS_H

using namespace std;
#include "string"
#include "ColeccionesG/IDictionary.h"
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/KeyString.h"
#include "Asignaturas.h"


class ControladorAsignaturas{
private:
    IDictionary *asignaturas;
public:
    ControladorAsignaturas(IDictionary*);
    //void ListarAsignaturas(ICollection*);
    IDictionary* ListarAsignaturas();
    void MostrarAsignaturas(IDictionary*);
    bool confirmar();
};

#endif /* CONTROLADORASIGNATURAS_H */

