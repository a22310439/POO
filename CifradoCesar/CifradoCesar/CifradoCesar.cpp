#include <iostream>
#include "Cifrador.h"

using namespace std;

bool esPrimo(int espacios);

int main() {
    string cadena;
    int espacios;

    cout << "Introduce lo que quieras encriptar: ";
    cin >> cadena;
    cout << "Introduce cuantos espacios quieres que se mueva el cifrado (numero primo): ";
    cin >> espacios;
    while (!esPrimo(espacios)) {
        cout << "El numero ingresado no es primo, intentalo de nuevo: ";
        cin >> espacios;
    }

    Cifrador c_Cesar(cadena, espacios);

    c_Cesar.encriptar();
    cout << "Cadena cifrada: " << c_Cesar.getCadena() << endl;
    c_Cesar.desencriptar();
    cout << "Cadena descifrada: " << c_Cesar.getCadena() << endl;

    return 0;
}

bool esPrimo(int espacios) {
    if (espacios == 0 || espacios == 1 || espacios == 4) return true;
    for (int x = 2; x < espacios / 2; x++) {
        if (espacios % x == 0) return false;
    }
    // Si no se pudo dividir por ninguno de los de arriba, sí es primo
    return true;
}