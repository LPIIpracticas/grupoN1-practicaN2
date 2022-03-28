#include <string>
#include <iostream>

using namespace std;

#include "vida.h"

void Vida::nacimiento()
{
    cout << "Ingresar fecha de nacimiento: ";
    fechaInicio.ingresar();
    recuerdos = new string[100];
    nroRecuerdos = 0;
    nroConocidos = 1;
}

void Vida::experiencias()
{
    cout << "Ingrese experiencia: ";
    cin.ignore();
    getline(cin, recuerdos[nroRecuerdos++]);
}
void Vida::conocerGente()
{
    nroConocidos++;
}
void Vida::ganarDinero()
{
    float cantidad = 0;
    cout << "ingresa cantidad de dinero que ganaste: ";
    cin >> cantidad;
    cantidadDinero = cantidadDinero + cantidad;
}
void Vida::perderDinero()
{
    float cantidad = 0;
    cout << "ingresa cantidad de dinero que perdiste: ";
    cin >> cantidad;
    cantidadDinero = cantidadDinero - cantidad;
}
void Vida::muerte()
{
    cout << "Ingresar fecha de muerte: ";
    fechaFin.ingresar();
    cantidadDinero = 0;
    delete recuerdos;
}
void Vida::calcularTiempo(fecha f)
{
    tiempo = fechaInicio.cantidadTiempo(f);
}