/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ControladorAsignaturas.h
 * Author: Admin
 *
 * Created on 22 de julio de 2021, 07:18 PM
 */

#ifndef CONTROLADORASIGNATURAS_H
#define CONTROLADORASIGNATURAS_H

using namespace std;
#include "ColeccionesG/ICollection.h"
#include "string"

class ControladorAsignaturas{
public:
    ControladorAsignaturas(ICollection*);
    ControladorAsignaturas(const ControladorAsignaturas& orig);
    virtual ~ControladorAsignaturas();
    void ListarAsignaturas();
private:

};

#endif /* CONTROLADORASIGNATURAS_H */

