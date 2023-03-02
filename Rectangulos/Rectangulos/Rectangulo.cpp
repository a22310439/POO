#include <iostream>
#include "Rectangulo.h"

using namespace std;

Rectangulo::Rectangulo() {}

void Rectangulo::setAncho(double a) {
	ancho = a;
}

double Rectangulo::getAncho() {
	return ancho;
}

void Rectangulo::setLargo(double l) {
	largo = l;
}

double Rectangulo::getLargo() {
	return largo;
}

double Rectangulo::Area() {
	return largo * ancho;
}