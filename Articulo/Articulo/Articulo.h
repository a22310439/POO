#pragma once
#include <iostream>

using namespace std;

class Articulo {
private:
    string clave;
    string nombre;
    double precio;

public:
    Articulo() : precio(0) {}
    Articulo(string clave, string nombre, double precio){
        this->clave = clave;
        this->nombre = nombre;
        this->precio = precio;
    }

    string getClave() {
        return clave;
    }

    string getNombre() {
        return nombre;
    }

    double getPrecio() {
        return precio;
    }
};
