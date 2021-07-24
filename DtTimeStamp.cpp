
#include "DtTimeStamp.h"

DtTimeStamp::DtTimeStamp(int hr_x,int min_x,int seg_x,DtFecha fecha_x) {
    this->hr=hr_x;
    this->min=min_x;
    this->seg=seg_x;
    this->fecha=fecha_x;
}

DtTimeStamp::DtTimeStamp(const DtTimeStamp& orig) {
}

DtTimeStamp::~DtTimeStamp() {
}

int DtTimeStamp::getHr(){
    return this->hr;
}
int DtTimeStamp::getMin(){
    return this->min;
}
int DtTimeStamp::getSeg(){
    return this->seg;
}
void DtTimeStamp::setFecha(DtFecha fecha_x){
    this->fecha=fecha_x;
}
DtFecha DtTimeStamp::getFecha(){
    return this->fecha;
}