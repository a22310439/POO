#pragma once
#include<iostream>
#include"Contacto.h"

using namespace std;

class Agenda
{
protected:
    Contacto* primerContacto;

public:
    Agenda();
    void agregarContacto(string nombre, string telefono);
    void borrarContacto(string nombre);
    void listarContactos();
    void modificarContacto(string nombre, string nuevoNombre, string nuevoTelefono);
};

