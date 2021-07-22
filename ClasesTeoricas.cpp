#include "ClasesTeoricas.h"

ClasesTeoricas::ClasesTeoricas() {
}

ClasesTeoricas::ClasesTeoricas(const ClasesTeoricas& orig) {
}

ClasesTeoricas::~ClasesTeoricas() {
}

void ClasesTeoricas::setCant_Asistentes(int num){
    this->Cant_Asist=num;
}
int ClasesTeoricas::getCant_Asistentes(){
    return this->Cant_Asist;
}
int ClasesTeoricas::CalcAsistencia(){
    
}