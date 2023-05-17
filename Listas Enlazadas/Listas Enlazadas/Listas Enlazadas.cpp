#include <iostream>
#include "Agenda.h"

using namespace std;

int main() {
    Agenda agenda;
    int opcion;

        cout << "===== AGENDA =====" << endl;
        cout << "1. Agregar contacto" << endl;
        cout << "2. Borrar contacto" << endl;
        cout << "3. Listar contactos" << endl;
        cout << "4. Modificar contacto" << endl;
        cout << "5. Salir" << endl;
        cout << "\nIngrese una accion para la agenda: ";
        cin >> opcion;
        cin.ignore();

    while (opcion != 5) {

        while (opcion < 1 || opcion > 5) {
            cout << "La opcion ingresada es invalida, intenta de nuevo: ";
            cin >> opcion;
        }

        switch (opcion) {
        case 1:
            agenda.agregarContacto();
            break;
        case 2:
            agenda.borrarContacto();
            break;
        case 3:
            agenda.listarContactos();
            break;
        case 4:
            agenda.modificarContacto();
            break;
        case 5:
            cout << "Saliendo de la agenda..." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
            break;
        }

    cout << "\nIngrese una accion para la agenda: ";
    cin >> opcion;
    cin.ignore();

        cout << endl;
    }

    return 0;
}