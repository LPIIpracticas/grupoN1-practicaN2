#include "producto.h"
#include "producto.cpp"

int menu();
int main()
{
    char resp = ' ';
    int n = 0;
    float p = 0;
    Producto azucar;
    do
    {

        azucar.cambiarPrecio(4.32);
        azucar.imprimir();
        int opc = menu();
        switch (opc)
        {
        case 1:
            azucar.ingresar();
            break;
        case 2:
            cout << "Ingrese cantidad a aumentar en el stock: ";
            cin >> n;
            azucar.aumentarStock(n);
            break;
        case 3:
            cout << "Ingrese cantidad a disminuir en el stock: ";
            cin >> n;
            azucar.disminuirStock(n);
            break;
        case 4:
            cout << "IGV: " << azucar.sacarIGV() << endl;
            break;
        case 5:
            cout << "Ingrese cantidad a disminuir en el stock: ";
            cin >> p;
            azucar.cambiarPrecio(p);
            break;
        case 6:
            azucar.imprimir();
        }
        system("cls");
        cout << "Desea continuar?: ";
        cin >> resp;
        if (resp == 'n')
            break;
    } while (1);

    return 0;
}
int menu()
{
    int opc = 0;
    do
    {

        system("cls");
        cout << "\t\t\tMENU\n";
        cout << "\t\t\t====\n";
        cout << "1. INGRESAR DATOS DE PRODUCTO" << endl;
        cout << "2. AUMENTAR STOCK DE PRODUCTO" << endl;
        cout << "3. DISMINUIR STOCK DE PRODUCTO" << endl;
        cout << "4. CALCULAR IGV DE PRODUCTO" << endl;
        cout << "5. CAMBIAR PRECIO DE PRODUCTO" << endl;
        cout << "6. IMPRIMIR DATOS DE PRODUCTO" << endl;
        cout << "7. SALIR" << endl;
        cout << "Ingrese una opcion:(1-7): ";
        cin >> opc;
        if (opc < 1 || opc > 7)
            cout << "ERROR: eligio opcion no valida ingresar un valor entre(1-7)..." << endl;

    } while (opc < 1 || opc > 7);
    return opc;
}