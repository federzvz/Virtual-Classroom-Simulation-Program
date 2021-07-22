#ifndef ESTUDIANTES_H
#define ESTUDIANTES_H

using namespace std;
#include "string"

class Estudiantes: public Usuarios{
private:
    string cedula;
public:
    Estudiantes (string, string, string, string, iDictionary, iCollection, string);
    void setCedula(string);
    string getCedula();
    float asistenciaClaseVivo();
    void finalizaciónAsistenciaVivo();
    void inscripcionAsignatura();
};

#endif /* ESTUDIANTES_H */

