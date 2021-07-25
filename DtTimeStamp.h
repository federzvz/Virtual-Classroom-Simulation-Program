#ifndef DTTIMESTAMP_H
#define DTTIMESTAMP_H

using namespace std;
#include "DtFecha.h"
#include <iostream>

class DtTimeStamp {
private:
    DtFecha *fecha;
    int hr;
    int min;
    int seg;
public:
    DtTimeStamp(DtFecha, int, int, int);
    void setHr(int);
    int getHr();
    void setMin(int);
    int getMin();
    void setSeg(int);
    int getSeg();
    void setFecha(DtFecha);
    DtFecha getFecha();
    void mostrarHora();
};

#endif /* DTTIMESTAMP_H */

