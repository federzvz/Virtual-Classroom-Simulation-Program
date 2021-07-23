#include "ClasesMonitoreo.h"

ClasesMonitoreo::ClasesMonitoreo(string nombre, int numero, Asignaturas *asignatura, Docentes *docente, IDictionary *estudiantes, IDictionary *mensajes, DtTimeStamp *horaComienzo, DtTimeStamp *horaFinal, string linkVideo, ICollection *habilitados) : Clases(nombre, numero, asignatura, docente, estudiantes, mensajes, horaComienzo, horaFinal, linkVideo){
    this->listaHabilitados=habilitados;
};