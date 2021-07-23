#ifndef DOCENTES_H
#define DOCENTES_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/IDictionary.h"
#include "Usuarios.h"
#include "string"

class Docentes: public Usuarios{
private:
    string nombre_Instituto;
public:
    Docentes (int, string, string, string, string, ICollection*, ICollection*, string);
    void setNombre_Instituto(string);
    string getNombre_Instituto();
    void inicioDeClase();
    void finalizaciónDeClase();
    double tiempoAsistenciaClase();
};

#endif /* DOCENTES_H */

