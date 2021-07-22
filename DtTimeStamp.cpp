/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DtTimeStamp.cpp
 * Author: Admin
 * 
 * Created on 21 de julio de 2021, 08:17 PM
 */

#include "DtTimeStamp.h"

DtTimeStamp::DtTimeStamp() {
}

DtTimeStamp::DtTimeStamp(const DtTimeStamp& orig) {
}

DtTimeStamp::~DtTimeStamp() {
}

void DtTimeStamp::setHr(int hr_x){
    this->hr=hr_x;
}
int DtTimeStamp::getHr(){
    return this->hr;
}
void DtTimeStamp::setMin(int min_x){
    this->min=min_x;
}
int DtTimeStamp::getMin(){
    return this->min;
}
void DtTimeStamp::setSeg(int seg_x){
    this->seg=seg_x;
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