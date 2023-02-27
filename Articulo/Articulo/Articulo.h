#pragma once
#include <iostream>

using namespace std;

class Articulo
{
private:
	string clave;
	string nombre;
	float precio;

public:
	Articulo(int clave, int nombre, int precio) {
		this->clave = clave;
		this->nombre = nombre;
		this->precio = precio;
	}

	
};