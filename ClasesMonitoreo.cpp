#include "ClasesMonitoreo.h"

ClasesMonitoreo::ClasesMonitoreo(string nombre, int numero, Asignaturas *asignatura, Docentes *docente, string modalidad, IDictionary *estudiantes, IDictionary *mensajes, DtTimeStamp *horaComienzo, DtTimeStamp *horaFinal, string linkVideo, IDictionary *habilitados) : Clases(nombre, numero, asignatura, docente, modalidad, estudiantes, mensajes, horaComienzo, horaFinal, linkVideo){
    this->listaHabilitados=habilitados;
};