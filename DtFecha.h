#ifndef DTFECHA_H
#define DTFECHA_H

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
};

#endif /* DTFECHA_H */

