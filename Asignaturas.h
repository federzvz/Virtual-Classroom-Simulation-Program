#ifndef ASIGNATURAS_H
#define ASIGNATURAS_H

using namespace std;
#include "string"
#include "ColeccionesG/ICollectible.h"
#include "ColeccionesG/IDictionary.h"

class Asignaturas: public ICollectible {
private:
        string nombre;
        string codigo;
        bool clasesTeoricas;
        bool clasesPracticas;
        bool clasesDeMonitoreo;
        IDictionary *inscriptos;
        IDictionary *docentes;
public:
    Asignaturas(string, string, bool, bool, bool, IDictionary*, IDictionary*);
    string getNombre();
    string getCodigo();
    bool getTeoricas();
    bool getPracticas();
    bool getMonitoreo();
    IDictionary *getInscriptos();
    IDictionary *getDocentes();
    void setNombre(string);
    void setCodigo(string);
    void setTeoricas(bool);
    void setPracticas(bool);
    void setMonitoreo(bool);
    void setInscriptos(IDictionary*);
    void setDocentes(IDictionary*);
};

#endif /* ASIGNATURAS_H */

