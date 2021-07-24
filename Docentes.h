#ifndef DOCENTES_H
#define DOCENTES_H

using namespace std;
#include "string"
#include "Usuarios.h"
#include "ColeccionesG/IDictionary.h"

class Docentes: public Usuarios{
private:
    string nombre_Instituto;
public:
    Docentes (int,string, string, string, string, ICollection*, ICollection*, string);
    void setNombre_Instituto(string);
    string getNombre_Instituto();
    void inicioDeClase();
    void finalizaciónDeClase();
    double tiempoAsistenciaClase();
};

#endif /* DOCENTES_H */
