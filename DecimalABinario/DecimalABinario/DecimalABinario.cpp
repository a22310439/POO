#include <iostream>
#include "Pila.h"

using namespace std;

int main() {
    long numeroDecimal;
    cout << "Introduce un numero decimal: ";
    cin >> numeroDecimal;
    cout << "El numero en binario es: ";
    Pila conversor;
    conversor.decimalABinario(numeroDecimal);
    cout << endl;
    return 0;
}