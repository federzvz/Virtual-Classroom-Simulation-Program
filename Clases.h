#ifndef CLASES_H
#define CLASES_H

using namespace std;
#include "Asignaturas.h"
#include "Docentes.h"
#include "DtTimeStamp.h"
#include "ColeccionesG/IDictionary.h"
#include "string"

class Clases: public ICollectible {
private:
    string nombre;
    int id;
    Asignaturas *asignatura;
    Docentes *docente;
    string modalidad;
    IDictionary *estudiantes;
    IDictionary *mensajes;
    DtTimeStamp *horaDeComienzo;
    DtTimeStamp *horaDeFinalizacion;
    string linkVideo;
public:
    Clases(string, int, Asignaturas*, Docentes*, string, IDictionary*, IDictionary*, DtTimeStamp*, DtTimeStamp*, string);
    string getNombre();
    int getNumero();
    DtTimeStamp getHoraComienzo();
    DtTimeStamp *getHoraFinal();
    string getVideo();
    Asignaturas getAsignatura();
    Docentes getDocente();
    string getModalidad();
    IDictionary *getEstudiantes();
    IDictionary *getMensajes();
    void setNombre(string);
    void setNumero(int);
    void setHoraComienzo(DtTimeStamp);
    void setHoraFinal(DtTimeStamp);
    void setVideo(string);
    void setAsignatura(Asignaturas);
    void setDocente(Docentes);
    void setModalidad(string);
    void setEstudiantes(IDictionary*);
    void setMensajes(IDictionary*);
    void envioDeMensaje(int);
    void mostrarDatosClase();

};

#endif /* CLASES_H */

