#ifndef DOCENTES_H
#define DOCENTES_H

using namespace std;
#include "ColeccionesG/ICollectible.h"
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/IDictionary.h"
#include "ColeccionesG/IKey.h"
#include "ColeccionesG/KeyInt.h"
#include "Usuarios.h"
#include "string"
#include "DtTimeStamp.h"


class Docentes: public Usuarios{
private:
    string nombre_Instituto;
public:
    Docentes (int, string, string, string, string, IDictionary*, IDictionary*, string);
    void setNombre_Instituto(string);
    string getNombre_Instituto();
    void inicioDeClase(string, int, Asignaturas*, Docentes&, string, IDictionary*, DtTimeStamp*, int, IDictionary&, IDictionary&, IDictionary&, IDictionary&);
    void finalizaciónDeClase(IKey*, DtTimeStamp*, string, unsigned int, IDictionary&, IDictionary&, IDictionary&, IDictionary&);
    double tiempoAsistenciaClase();
};

#endif /* DOCENTES_H */

