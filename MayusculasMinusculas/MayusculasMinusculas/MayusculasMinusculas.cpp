#include <iostream>
#include <string>
#include "Convertidor.h"

using namespace std;



int main() {
    string cadena;
    cout << "Ingresa la cadena de caracteres: ";
    getline(cin, cadena);

    Convertidor c_conver(cadena);

    cout << "\nCadena original: " << c_conver.getCadena() << endl;             //Imprime cadena original
    c_conver.mayusculas();        
    cout << "Cadena mayusculas: " << c_conver.getCadena() << endl;             //Imprime cadena en mayusculas
    c_conver.minusculas();
    cout << "Cadena minusculas: " << c_conver.getCadena() << endl;             //Imprime cadena en minusculas

    return 0;
}