#pragma once
#include<iostream>

using namespace std;

struct Contacto {
    string nombre;
    string telefono;
    Contacto* siguiente;
};