#include "Agenda.h"
#include<string>
#include<iostream>

using namespace std;

Agenda::Agenda() {
	primerContacto = NULL;
}

void Agenda::agregarContacto() {
    Contacto* nuevoContacto = new Contacto();
    cout << "Ingrese el nombre del contacto: ";
    getline(cin, nuevoContacto->nombre);
    cout << "Ingrese el telefono del contacto: ";
    getline(cin, nuevoContacto->telefono);
    nuevoContacto->siguiente = NULL;

    if (primerContacto == NULL) {
        primerContacto = nuevoContacto;
    }
    else {
        Contacto* temp = primerContacto;
        while (temp->siguiente != NULL) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoContacto;
    }
    cout << "\nContacto agregado correctamente" << endl;
}

void Agenda::borrarContacto() {
    string nombre;

    if (primerContacto == NULL) {
        cout << "\nLa agenda esta vacia" << endl;
        return;
    }
    
    cout << "Ingrese el nombre del contacto que desea borrar: ";
    getline(cin, nombre);
    cin.ignore();   

    Contacto* temp = primerContacto;
    if (temp->nombre == nombre) {
        primerContacto = temp->siguiente;
        delete temp;
        cout << "Contacto borrado correctamente" << endl;
        return;
    }

    while (temp->siguiente != NULL && temp->siguiente->nombre != nombre) {
        temp = temp->siguiente;
    }

    if (temp->siguiente == NULL) {
        cout << "\nContacto no encontrado" << endl;
        return;
    }

    Contacto* siguiente = temp->siguiente->siguiente;
    delete temp->siguiente;
    temp->siguiente = siguiente;
    cout << "Contacto borrado correctamente" << endl;
}

void Agenda::listarContactos() {
    int num = 1;
    if (primerContacto == NULL) {
        cout << "La agenda esta vacia" << endl;
        return;
    }

    cout << "Lista de contactos:" << endl;
    Contacto* temp = primerContacto;
    while (temp != NULL) {
        cout << num <<  ")\nNombre: " << temp->nombre << endl 
            <<"Telefono: " << temp->telefono << endl;
        temp = temp->siguiente;
        num++;
    }
}

void Agenda::modificarContacto() {
    int dato;
    string nombre;

    if (primerContacto == NULL) {
        cout << "La agenda esta vacia" << endl;
        return;
    }

    cout << "\nIngrese el nombre del contacto que desea modificar: ";
    cin >> nombre;

    Contacto* temp = primerContacto;
    while (temp != NULL && temp->nombre != nombre) {
        temp = temp->siguiente;
    }

    if (temp == NULL) {
        cout << "Contacto no encontrado" << endl;
        return;
    }

    cout << "\nIngrese el dato a modificar:\n1) Nombre\n2) Telefono" << endl
        << "Dato a modificar : ";
    cin >> dato;

    while (dato < 1 || dato > 2) {
        cout << "El numero ingresado no es valido, intentelo nuevamente : ";
        cin >> dato;
    }

    if (dato == 1) {
    cout << "Ingrese el nuevo nombre del contacto: ";
    cin >> temp->nombre;
    }
    else {
    cout << "Ingrese el nuevo telefono del contacto: ";
    cin >> temp->telefono;
    }

    cout << "Contacto modificado correctamente" << endl;
}