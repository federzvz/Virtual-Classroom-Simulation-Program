#ifndef USUARIOS_H
#define USUARIOS_H

using namespace std;
#include "string"


class Usuarios {
private:
    string Nombre;
    string eMail;
    string URL_Imagen;
    string contraseña;
    iDictionary *listaAsignatura;
    iCollection *listaClases;
public:
    Usuarios (string, string, string, string, iDictionary, iCollection);
    void setNombre(string);
    void seteMail(string);
    void setImagen(string);
    void setContra(string);
    string getNombre();
    string geteMail();
    string getImagen();
    string getPasswd();
    void setListaAsig();
    iDictionary getListaAsig();
    void setListaClases();
    iCollection getListaClases();
};

#endif /* USUARIOS_H */

