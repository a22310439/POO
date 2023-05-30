#include<iostream>
#include "Agenda.h"

using namespace std;

Agenda::Agenda() {
    primerContacto = nullptr;
}

//Agregar un contacto
void Agenda::agregarContacto(string nombre, string telefono) {
    Contacto* nuevoContacto = new Contacto(nombre, telefono);

    if (primerContacto == nullptr) {
        primerContacto = nuevoContacto;
    }
    else {
        Contacto* temp = primerContacto;
        while (temp->getSiguiente() != nullptr) {
            temp = temp->getSiguiente();
        }
        temp->setSiguiente(nuevoContacto);
        nuevoContacto->setAnterior(temp);
    }

    cout << "\nContacto agregado correctamente" << endl;
}

//Borrar un contacto
void Agenda::borrarContacto(string nombre) {
    if (primerContacto == nullptr) {
        cout << "La agenda esta vacia" << endl;
        return;
    }

    Contacto* temp = primerContacto;
    while (temp != nullptr && temp->getNombre() != nombre) {
        temp = temp->getSiguiente();
    }

    if (temp == nullptr) {
        cout << "\nContacto no encontrado" << endl;
        return;
    }

    if (temp->getAnterior() == nullptr) {
        primerContacto = temp->getSiguiente();
        if (primerContacto != nullptr) {
            primerContacto->setAnterior(nullptr);
        }
    }
    else {
        temp->getAnterior()->setSiguiente(temp->getSiguiente());
        if (temp->getSiguiente() != nullptr) {
            temp->getSiguiente()->setAnterior(temp->getAnterior());
        }
    }

    delete temp;
    cout << "\nContacto borrado correctamente" << endl;
}

//Listar todos los contactos
void Agenda::listarContactos() {
    int numLista = 1;
    if (primerContacto == nullptr) {
        cout << "La agenda está vacía" << endl;
        return;
    }
    cout << "\nLista de contactos:\n\n";
    Contacto* temp = primerContacto;
    while (temp != nullptr) {
        cout << numLista << ")\nNombre: " << temp->getNombre() << endl << "Telefono: " << temp->getTelefono() << endl;
        numLista++;
        temp = temp->getSiguiente();
    }
}

//Modificar un contacto
void Agenda::modificarContacto(string nombre, string nuevoNombre, string nuevoTelefono) {
    if (primerContacto == nullptr) {
        cout << "La agenda está vacía" << endl;
        return;
    }

    Contacto* temp = primerContacto;
    while (temp != nullptr && temp->getNombre() != nombre) {
        temp = temp->getSiguiente();
    }

    if (temp == nullptr) {
        cout << "\nContacto no encontrado" << endl;
        return;
    }

    temp->setNombre(nuevoNombre);
    temp->setTelefono(nuevoTelefono);

    cout << "\nContacto modificado correctamente" << endl;
}