#ifndef CLASESMONITOREO_H
#define CLASESMONITOREO_H
#include "Clases.h"

class ClasesMonitoreo:public Clases {
private:
    //ICollection *estudiantes;
    
public:
    ClasesMonitoreo(string,int,Asignaturas&,Docentes&,DtTimeStamp,DtTimeStamp,string);

};

#endif /* CLASESMONITOREO_H */

