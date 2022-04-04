#pragma once
#include <string>
using namespace std;

class Producto
{
    private:
    int codigo;
    string nombre;
    float precio;
    int cantidad;
    char estado;
public:
    int getCodigo();
    string getNombre();
    float getPrecio();
    int getCantidad();
    char getEstado();

    void  setCodigo(int);
    void setNombre(string);
    void setPrecio(float);
    void setCantidad(int);
    void setEstado(char);

    //interface de clase
    void imprimir();
    void ingresar();

    float sacarIGV();
    void aumentarStock(int);
    void disminuirStock(int);
    void cambiarPrecio(float);
   
};