#ifndef CONTROLADORCLASES_H
#define CONTROLADORCLASES_H

#include "ColeccionesG/ICollection.h"
#include "string"

class ControladorClases {
public:
    ControladorClases (ICollection*);
    void envioDeMensaje(int);
    void mostrarDatosClase();
    void listarMensajes();
    void listarClasesEnVivo(string);
private:

};

#endif /* CONTROLADORCLASES_H */

