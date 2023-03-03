#include <iostream>
#include "Articulo.h"

using namespace std;

Articulo::Articulo() {
	costo = 0;
	existencia = 0;
}
Articulo::Articulo(string _clave, string _nombre, double _costo, int _existencia) {
	clave = _clave;
	nombre = _nombre;
	costo = _costo;
	existencia = _existencia;
}
Articulo::Articulo(const Articulo &articulo) {
	clave = articulo.clave;
	nombre = articulo.nombre;
	costo = articulo.costo;
	existencia = articulo.existencia;
}

void Articulo::setClave(string cla) {
	clave = cla;
}

void Articulo::setNombre(string nom) {
	nombre = nom;
}

void Articulo::setCosto(double cos) {
	costo = cos;
}

void Articulo::setExistencia(int exi) {
	existencia = exi;
}

string Articulo::getClave() {
	return clave;
}

string Articulo::getNombre() {
	return nombre;
}

double Articulo::getCosto() {
	return costo;
}

int Articulo::getExistencia() {
	return existencia;
}