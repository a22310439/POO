#pragma once
#include<iostream>

using namespace std;

class Contacto
{
private:
    string nombre;
    string telefono;
    Contacto* siguiente;
    Contacto* anterior;
public:
    Contacto(string nombre, string telefono);
    void setNombre(string nombre);
    void setTelefono(string telefono);
    void setSiguiente(Contacto* siguiente);
    void setAnterior(Contacto* anterior);
    string getNombre();
    string getTelefono();
    Contacto* getSiguiente();
    Contacto* getAnterior();
};

