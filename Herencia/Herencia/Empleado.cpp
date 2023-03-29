#include <iostream>
#include "Empleado.h"

using namespace std;

Empleado::Empleado() {}

Empleado::Empleado(string _jefe) {
	jefe = _jefe;
}

void Empleado::setJefe(string _jefe) {
	jefe = _jefe;
}

string Empleado::getJefe() {
	return jefe;
}

void Empleado::cobrar() {
	cout << "Cobrando";
}

void Empleado::mostrarDatos() {
	cout << "Jefe: " << getJefe() << endl;
}
