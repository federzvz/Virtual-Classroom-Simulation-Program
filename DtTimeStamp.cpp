#include "DtTimeStamp.h"

DtTimeStamp::DtTimeStamp(DtFecha fecha, int hr, int min, int seg) {
    this->fecha=&fecha;
    this->hr=hr;
    this->min=min;
    this->seg=seg;
};

void DtTimeStamp::setHr(int hr_x){
    this->hr=hr_x;
};

int DtTimeStamp::getHr(){
    return this->hr;
};

void DtTimeStamp::setMin(int min_x){
    this->min=min_x;
};

int DtTimeStamp::getMin(){
    return this->min;
};

void DtTimeStamp::setSeg(int seg_x){
    this->seg=seg_x;
};

int DtTimeStamp::getSeg(){
    return this->seg;
};

void DtTimeStamp::setFecha(DtFecha fecha_x){
    this->fecha=&fecha_x;
};

DtFecha DtTimeStamp::getFecha(){
    return *this->fecha;
};
