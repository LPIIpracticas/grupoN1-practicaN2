
#pragma once

#include <string>

using namespace std;
#include "fecha.h"
#include "fecha.cpp"

class Vida
{
private:
    fecha fechaInicio;
    fecha fechaFin;
    string *recuerdos;
    int nroRecuerdos;
    int tiempo;
    int nroConocidos;
    float cantidadDinero;

public:
    void nacimiento();
    void experiencias();
    void conocerGente();
    void ganarDinero();
    void perderDinero();
    void calcularTiempo(fecha f);
    void muerte();
};