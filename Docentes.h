#ifndef DOCENTES_H
#define DOCENTES_H

using namespace std;
#include "string"

class Docentes: public Usuarios{
private:
    string nombre_Instituto;
public:
    Docentes (string, string, string, string, iDictionary, iCollection, string);
    void setNombre_Instituto(string);
    string getNombre_Instituto();
    void inicioDeClase();
    void finalizaciónDeClase();
    double tiempoAsistenciaClase();
};

#endif /* DOCENTES_H */

