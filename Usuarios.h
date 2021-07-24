#ifndef USUARIOS_H
#define USUARIOS_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "ColeccionesG/IDictionary.h"
#include "ColeccionesG/Lista.h"
#include "string"

class Usuarios: public ICollectible {
private:
    int ID;
    string Nombre;
    string eMail;
    string URL_Imagen;
    string contraseña;
    ICollection *listaAsignatura ;
    ICollection *listaClases ;
public:
    Usuarios (int,string, string, string, string, ICollection*, ICollection*);
    void setID(int);
    void setNombre(string);
    void seteMail(string);
    void setImagen(string);
    void setContra(string);
    void setListaAsig(ICollection*);
    void setListaClases(ICollection*);
    int getID();
    void addListaClases(ICollectible*);
    string getNombre();
    string geteMail();
    string getImagen();
    string getPasswd();
    ICollection *getListaAsig();
    ICollection *getListaClases();
};

#endif /* USUARIOS_H */