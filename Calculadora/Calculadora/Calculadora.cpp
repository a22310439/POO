#include <iostream>
using namespace std;


// Clase
class Calculadora {
//Encapsulamiento: se acceden a los atributos privados por medio de los métodos para esconder la implementación del usuario
private:
    // Atributos
    int numero1;
    int numero2;
public:
    // Constructor
    Calculadora(int num1, int num2) {
        numero1 = num1;
        numero2 = num2;
    }
    // Métodos
    int suma() {
        return numero1 + numero2;
    }
    int resta() {
        return numero1 - numero2;
    }
    int multiplicacion() {
        return numero1 * numero2;
    }
    int division() {
        while (numero2 == 0) {
            cout << "No se puede dividir ente 0! Intentalo de nuevo ingresando el numero 2: " << endl;
            cin >> numero2;
        }
            return numero1 / numero2;
    }
};

int main() {
    int num1, num2, operacion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Objeto
    Calculadora calculadora(num1, num2);

    // Llamada a los métodos del objeto para realizar las operaciones dependiendo  de lo elegido
    cout << "Cual va a ser la operacion a realizar?\n1) Suma\n2) Resta\n3) Multiplicacion\n4) Division\nOperacion seleccionada: " << endl;
    cin >> operacion;
    switch (operacion) {
        case 1:
            cout << "La suma es: " << calculadora.suma() << endl;
            break;
        case 2:
            cout << "La resta es: " << calculadora.resta() << endl;
            break;
        case 3:
            cout << "La multiplicacion es: " << calculadora.multiplicacion() << endl;
            break;
        case 4:
            cout << "La division es: " << calculadora.division() << endl;
            break;
    }
    
    return 0;
}
