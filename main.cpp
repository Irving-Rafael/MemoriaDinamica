#include <iostream>
#include "arreglo.h"
using namespace std;

void modificar(int *a)
{
    *a = *a + 1;
}

int main() 
{
    ArregloD arreglo;
    arreglo.insertar_final("Como");
    arreglo.insertar_final("Se");
    arreglo.insertar_final("Encuentra");
    arreglo.insertar_final("Usted");
    arreglo.insertar_final("Hoy");
    arreglo.insertar_final("¿?");
    arreglo.insertar_inicio("Dia");
    arreglo.insertar_inicio("Buen");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    

    // int *b = nullptr;
    // b = new int[100];
    // cout << b << " " << *b << endl;
    // delete[] b;
    // int a = 12;

    // cout << a << endl;
    // cout << &a << endl;
    // modificar(&a);
    // cout << a << endl;


    return 0;
}
