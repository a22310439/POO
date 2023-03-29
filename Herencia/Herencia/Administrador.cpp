#include <iostream>
#include "Persona.h"
#include "Administrador.h"

using namespace std;

Administrador::Administrador() {}

Administrador::Administrador(string _puesto) {
	puesto = _puesto;
}

void Administrador::setPuesto(string _puesto) {
	puesto = _puesto;
}

string Administrador::getPuesto() {
	return puesto;
}

void Administrador::administrar() {
	cout << "Administrando";
}

void Administrador::mostrarDatos() {
	cout << endl << "Datos del administrador:" << endl;
	Persona::mostrarDatos();
	Empleado::mostrarDatos();
	cout << "Puesto: " << getPuesto() << endl;
}