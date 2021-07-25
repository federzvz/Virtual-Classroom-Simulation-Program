#include "ClasesTeoricas.h"

ClasesTeoricas::ClasesTeoricas(string nombre, int numero, Asignaturas *asignatura, Docentes *docente, string modalidad, IDictionary *estudiantes, IDictionary *mensajes, DtTimeStamp *horaComienzo, DtTimeStamp *horaFinal, string linkVideo, int cant) : Clases (nombre, numero, asignatura, docente, modalidad, estudiantes, mensajes, horaComienzo, horaFinal, linkVideo) {
    this->Cant_Asist=cant;
};

void ClasesTeoricas::setCant_Asistentes(int num){
    this->Cant_Asist=num;
};

int ClasesTeoricas::getCant_Asistentes(){
    return this->Cant_Asist;
};

int ClasesTeoricas::CalcAsistencia(){
    int rslt;
    
    return rslt;
};

