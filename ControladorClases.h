/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorClases.h
 * Author: Admin
 *
 * Created on 22 de julio de 2021, 07:49 PM
 */

#ifndef CONTROLADORCLASES_H
#define CONTROLADORCLASES_H

#include "ColeccionesG/ICollection.h"
#include "string"

class ControladorClases {
public:
    ControladorClases (ICollection*);
    ControladorClases(const ControladorClases& orig);
    virtual ~ControladorClases();
    void envioDeMensaje(int);
    void mostrarDatosClase();
    void listarMensajes();
    void listarClasesEnVivo(string);
private:

};



#endif /* CONTROLADORCLASES_H */

