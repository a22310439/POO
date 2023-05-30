#include "Contacto.h"
#include<iostream>

using namespace std;

Contacto::Contacto(string nombre, string telefono) {
    this->nombre = nombre;
    this->telefono = telefono;
    siguiente = nullptr;
    anterior = nullptr;
}

void Contacto::setNombre(string nombre) {
    this->nombre = nombre;
}

string Contacto::getNombre() {
    return nombre;
}

void Contacto::setTelefono(string telefono) {
    this->telefono = telefono;
}

string Contacto::getTelefono() {
    return telefono;
}

void Contacto::setSiguiente(Contacto* siguiente) {
    this->siguiente = siguiente;
}

Contacto* Contacto::getSiguiente() {
    return siguiente;
}

void Contacto::setAnterior(Contacto* anterior) {
    this->anterior = anterior;
}

Contacto* Contacto::getAnterior() {
    return anterior;
}