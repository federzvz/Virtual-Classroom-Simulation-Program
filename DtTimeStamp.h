
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
    DtTimeStamp();
    DtTimeStamp(const DtTimeStamp& orig);
    virtual ~DtTimeStamp();
    void setHr(int);
    int getHr();
    void setMin(int);
    int getMin();
    void setSeg(int);
    int getSeg();
    void setFecha(DtFecha);
    DtFecha getFecha();
};

#endif /* DTTIMESTAMP_H */

