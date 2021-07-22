/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Clases.h
 * Author: Admin
 *
 * Created on 21 de julio de 2021, 08:13 PM
 */

#ifndef CLASES_H
#define CLASES_H
#include "string"
#include "Asignaturas.h"
#include "Docentes.h"
#include "DtTimeStamp.h"


using namespace std;

class Clases {
private:
    string nombre;
    int numero;
    Asignaturas *asignatura;
    Docentes *docente;
    //iDictionary *estudiantes;
    //iDictionary *mensajes;
    DtTimeStamp horaDeComienzo;
    DtTimeStamp horaDeFinalizacion;
    string linkVideo;
public:
    Clases();
    Clases(const Clases& orig);
    virtual ~Clases();
    string getNombre();
    int getNumero();
    DtTimeStamp getHoraComienzo();
    DtTimeStamp getHoraFinal();
    string getVideo();
    Asignaturas getAsignatura();
    Docentes getDocente();
    //iDictionary getEstudiantes();
    //iDictionary getMensajes();
    void setNombre(string);
    void setNumero(int);
    void setHoraComienzo(DtTimeStamp);
    void setHoraFinal(DtTimeStamp);
    void setVideo(string);
    void setAsignatura(Asignaturas);
    void setDocente(Docentes);
    //void setEstudiantes(iDictionary);
    //void setMensajes(iDictionary);
    void envioDeMensaje(int);
    void mostrarDatosClase();

};

#endif /* CLASES_H */

