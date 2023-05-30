#include <iostream>
#include <string>
#include "Agenda.h"

using namespace std;

int main() {
    Agenda agenda;
    string nombre, telefono, nuevoNombre, nuevoTelefono;
    int opcion=1;
    while (opcion != 5) {
        // Menú de opciones
        cout << "===== AGENDA =====" << endl;
        cout << "1. Agregar contacto" << endl;
        cout << "2. Borrar contacto" << endl;
        cout << "3. Listar contactos" << endl;
        cout << "4. Modificar contacto" << endl;
        cout << "5. Salir" << endl;
        cout << "\nIngrese una accion para la agenda: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
        case 1:
            cout << "\nIngrese el nombre del contacto: ";
            getline(cin, nombre);
            cout << "Ingrese el telefono del contacto: ";
            getline(cin, telefono);
            agenda.agregarContacto(nombre, telefono);
            break;
        case 2:
            cout << "\nIngrese el nombre del contacto que desea borrar: ";
            getline(cin, nombre);
            agenda.borrarContacto(nombre);
            break;
        case 3:
            agenda.listarContactos();
            break;
        case 4:
            cout << "\nIngrese el nombre del contacto que desea modificar: ";
            getline(cin, nombre);
            cout << "Ingrese el nuevo nombre del contacto: ";
            getline(cin, nuevoNombre);
            cout << "Ingrese el nuevo teléfono del contacto: ";
            getline(cin, nuevoTelefono);
            agenda.modificarContacto(nombre, nuevoNombre, nuevoTelefono);
            break;
        case 5:
            cout << "\nSaliendo de la agenda..." << endl;
            break;
        default:
            cout << "\nOpcion invalida, intentelo de nuevo." << endl;
            break;
        }

        cout << endl;
    };

    return 0;
}