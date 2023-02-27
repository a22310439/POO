#include <iostream>
#include "Organizador.h"

using namespace std;

int main()
{
    int arreglo[10];

    for (int i = 0; i < 10; i++) {
        cout << "Ingresa el numero de la posicion " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    Organizador c_burbuja(arreglo);

    cout << "Arreglo original: ";
    for (int i = 0; i < 10; i++) {
        cout << arreglo[i] << ", ";
    }

    c_burbuja.algoritmoBurbuja();

    cout << "Arreglo organizado: ";
    for (int i = 0; i < 10; i++) {
        cout << c_burbuja.getArreglo()[i] << ", ";
    }

    return 0;
}