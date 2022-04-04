
#include "producto.h"

#include <string>
#include <iostream>

using namespace std;
int Producto::getCodigo()
{
    return codigo;
}
string Producto::getNombre(){
    return nombre;
}
float Producto::getPrecio(){
    return precio;
}
int Producto::getCantidad(){
    return cantidad;
}
char Producto::getEstado(){
    return estado;
}

void Producto::setCodigo(int c){
    codigo=c;
}
void Producto::setNombre(string n){
    nombre=n;
}
void Producto::setPrecio(float p){
    precio=p;
}
void Producto::setCantidad(int c){
    cantidad=c;
}
void Producto::setEstado(char e){
    estado=e;
}

// interface de clase
void Producto::imprimir()
{
    cout << "DATOS DE PRODUCTO:" << endl;
    cout << "=================" << endl;
    cout << "codigo: "<< codigo<<endl;
    cout << "nombre: "<<nombre<<endl;
    cout << "precio: "<<precio<<endl;
    cout << "cantidad: "<<cantidad<<endl;
    cout << "estado: "<<estado<<endl;
}

void Producto::ingresar()
{
    cout << "INGRESAR DATOS DE PRODUCTO:" << endl;
    cout << "==========================" << endl;
    cout << "codigo: ";
    cin >> codigo;
    cin.ignore();
    cout << "nombre: ";
    getline(cin, nombre);
    cout << "precio: ";
    cin >> precio;
    cout << "cantidad: ";
    cin >> cantidad;

    cout << "estado(A/D): ";
    cin >> estado;
}

float Producto::sacarIGV()
{
    return precio * 0.18;
}
void Producto::aumentarStock(int valor)
{
    cantidad += valor;
}
void Producto::disminuirStock(int valor)
{
    if (cantidad > valor)
        cantidad = cantidad - valor;
    else
        cout << "ERROR: la cantidad a disminuir es mayor al stock..." << endl;
}
void Producto::cambiarPrecio(float valor)
{
    setPrecio(valor);
}