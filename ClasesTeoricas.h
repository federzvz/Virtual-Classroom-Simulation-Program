
#ifndef CLASESTEORICAS_H
#define CLASESTEORICAS_H
#include "Clases.h"

class ClasesTeoricas: public Clases {

private:
    int Cant_Asist;
    
public:
    ClasesTeoricas(int,string,int,Asignaturas&,Docentes&,DtTimeStamp,DtTimeStamp,string);
    void setCant_Asistentes(int);
    int getCant_Asistentes();
    int CalcAsistencia();

};

#endif /* CLASESTEORICAS_H */

