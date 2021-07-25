#ifndef REPRODUCCIONES_H
#define REPRODUCCIONES_H

#include "Clases.h"
#include "Estudiantes.h"
#include "DtFecha.h"
#include "DtTimeStamp.h"

class Reproducciones {
private:
    Estudiantes *estudiante;
    Clases *clase;
    DtFecha *fecha;
    DtTimeStamp *hora;
public:
    Reproducciones(Estudiantes*, Clases*, DtFecha, DtTimeStamp);
    void setClase(Clases);
    void setEstudiante(Estudiantes);
    void setFecha(DtFecha);
    void setDtTimeStamp(DtTimeStamp);
    Clases getClase();
    Estudiantes getEstudiante();
    DtFecha getFecha();
    DtTimeStamp getHora();
};

#endif /* REPRODUCCIONES_H */

