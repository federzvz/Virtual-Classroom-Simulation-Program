#ifndef ASIGNATURAS_H
#define ASIGNATURAS_H

using namespace std;
#include "string"
#include "ColeccionesG/ICollectible.h"

class Asignaturas: public ICollectible {
private:
        string nombre;
        string codigo;
        bool clasesTeoricas;
        bool clasesPracticas;
        bool clasesDeMonitoreo;
public:
    Asignaturas(string, string, bool, bool, bool);
    string getNombre();
    string getCodigo();
    bool getTeoricas();
    bool getPracticas();
    bool getMonitoreo();
    void setNombre(string);
    void setCodigo(string);
    void setTeoricas(bool);
    void setPracticas(bool);
    void setMonitoreo(bool);
};

#endif /* ASIGNATURAS_H */

