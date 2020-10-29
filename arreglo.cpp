#include "arreglo.h"

ArregloD::ArregloD()
{
    arreglo = new string[MAX];
    cont = 0;
    tam = MAX;
}

ArregloD::~ArregloD()
{
    delete[] arreglo;
}

void ArregloD::insertar_final(const string &s)
{
    if (cont == tam) {
        expandir();
    }
    arreglo[cont] = s;
    cont++;
}
void ArregloD::insertar_inicio(const string &s)
{
    if (cont == tam) {
        expandir();
    }
    for (size_t i = cont; i > 0; i--) {
        arreglo[i] = arreglo[i-1]; 
    }
    arreglo[0] = s;
    cont++;
}

size_t ArregloD::size()
{
    return cont;
}

void ArregloD::expandir()
{
    string *nuevoD = new string[tam+MAX];

    for (size_t i = 0; i < cont; i++) {
        nuevoD[i] = arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevoD;
    tam = tam + MAX;
}
