#ifndef CONTROLADORCLASES_H
#define CONTROLADORCLASES_H

#include "ColeccionesG/ICollection.h"
#include "string"
#include "ColeccionesG/IDictionary.h"
#include "Clases.h"
#include "Docentes.h"
#include "Asignaturas.h"
#include <iostream>

class ControladorClases {
private:
    IDictionary *listaClases;
public:
    ControladorClases (IDictionary*);
    void envioDeMensaje(int);
    void mostrarDatosClase(Clases *);
    void listarMensajes();
    void listarClasesEnVivo(Docentes*, Asignaturas*);
    bool confirmar();

};

#endif /* CONTROLADORCLASES_H */

