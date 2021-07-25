#ifndef DTFECHA_H
#define DTFECHA_H

using namespace std;
#include <iostream>


class DtFecha {
private:
    int dia;
    int mes;
    int anio;
public:
    DtFecha(int, int, int);
    int getDia();
    int getMes();
    int getAnio();
    void mostrarFecha();
};

#endif /* DTFECHA_H */

