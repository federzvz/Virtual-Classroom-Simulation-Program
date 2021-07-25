#ifndef USUARIOS_H
#define USUARIOS_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/IDictionary.h"
#include "ColeccionesG/ListaDicc.h"
#include "Asignaturas.h"
#include "string"

class Usuarios: public ICollectible {
private:
    int Id;
    string Nombre;
    string eMail;
    string URL_Imagen;
    string contraseña;
    IDictionary *listaAsignatura;
    IDictionary *listaClases;
public:
    Usuarios (int, string, string, string, string, IDictionary*, IDictionary*);
    void setId(int);
    void setNombre(string);
    void seteMail(string);
    void setImagen(string);
    void setContra(string);
    void setListaAsig(IDictionary*);
    void setListaClases(IDictionary*);
    int getId();
    string getNombre();
    string geteMail();
    string getImagen();
    string getPasswd();
    IDictionary *getListaAsig();
    IDictionary *getListaClases();
};

#endif /* USUARIOS_H */

