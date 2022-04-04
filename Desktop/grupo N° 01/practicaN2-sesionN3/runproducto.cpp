#include "producto.h"
#include "producto.cpp"
int main()
{
    char resp = ' ';
    Producto azucar;
    do
    {
        azucar.ingresar();
        azucar.cambiarPrecio(4.32);
        azucar.imprimir();
        
        system("cls");
        cout << "Desea continuar?: ";
        cin >> resp;
        if (resp == 'n')
            break;
    } while (1);

    return 0;
}