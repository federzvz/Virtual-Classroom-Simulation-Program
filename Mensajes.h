#ifndef MENSAJES_H
#define MENSAJES_H
#include "DtFecha.h"
#include "DtTimeStamp.h"

class Mensajes {

private:
    int id;
    DtFecha fecha_envio;
    DtTimeStamp hora_envio;

public:
    Mensajes();
    Mensajes(const Mensajes& orig);
    virtual ~Mensajes();
    void setID(int);
    int getID();
    void setFecha(DtFecha);
    DtFecha getFecha();
    void setHora(DtTimeStamp);
    DtTimeStamp getHora();
};

#endif /* MENSAJES_H */

