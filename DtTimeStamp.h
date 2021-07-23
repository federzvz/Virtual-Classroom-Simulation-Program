
#ifndef DTTIMESTAMP_H
#define DTTIMESTAMP_H
#include "DtFecha.h"

class DtTimeStamp {
private:
    DtFecha fecha;
    int hr;
    int min;
    int seg;
public:
    DtTimeStamp(int,int,int,DtFecha);
    DtTimeStamp(const DtTimeStamp& orig);
    virtual ~DtTimeStamp();
    int getHr();
    int getMin();
    int getSeg();
    void setFecha(DtFecha);
    DtFecha getFecha();
};

#endif /* DTTIMESTAMP_H */

