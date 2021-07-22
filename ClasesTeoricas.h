
#ifndef CLASESTEORICAS_H
#define CLASESTEORICAS_H

class ClasesTeoricas {

private:
    int Cant_Asist;
    
public:
    ClasesTeoricas();
    ClasesTeoricas(const ClasesTeoricas& orig);
    virtual ~ClasesTeoricas();
    void setCant_Asistentes(int);
    int getCant_Asistentes();
    int CalcAsistencia();

};

#endif /* CLASESTEORICAS_H */

