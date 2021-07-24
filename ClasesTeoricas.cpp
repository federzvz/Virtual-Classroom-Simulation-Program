#include "ClasesTeoricas.h"

ClasesTeoricas::ClasesTeoricas(int cant_asis,string nombre_x,int num,Asignaturas& asig_x,Docentes& doc_x,DtTimeStamp start,DtTimeStamp finish,string Url) : Clases(nombre_x,num,asig_x,doc_x,start,finish,Url) {
    this->Cant_Asist=cant_asis;
}

void ClasesTeoricas::setCant_Asistentes(int num){
    this->Cant_Asist=num;
}
int ClasesTeoricas::getCant_Asistentes(){
    return this->Cant_Asist;
}
int ClasesTeoricas::CalcAsistencia(){
    
}