#ifndef CONTROLADORASIGNATURAS_H
#define CONTROLADORASIGNATURAS_H

using namespace std;
#include "string"
#include "ColeccionesG/IDictionary.h"
#include "Asignaturas.h"
#include "ColeccionesG/IKey.h"
#include "ColeccionesG/KeyString.h"
#include "ColeccionesG/ICollection.h"
#include "Estudiantes.h"

class ControladorAsignaturas{
private:
    IDictionary *asignaturas;
public:
    ControladorAsignaturas(IDictionary*);
    IDictionary *getAsignaturas();
    void setAsignaturas(IDictionary*);
    void ListarAsignaturas(IDictionary*);
    bool confirmar();
    Asignaturas *seleccionAsignatura(string, IDictionary*);
    void mostrarAsignatura(Asignaturas*);
    void listarEstudiantesInscriptos(Asignaturas*);
};

#endif /* CONTROLADORASIGNATURAS_H */

