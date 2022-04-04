#include "producto.h"
#include "producto.cpp"
int main()
{
    Producto azucar;
azucar.ingresar();
azucar.cambiarPrecio(4.32);
azucar.imprimir();
    return 0;
}