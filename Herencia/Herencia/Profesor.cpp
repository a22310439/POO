#include <iostream>
#include "Profesor.h"

using namespace std;

Profesor::Profesor() {}

Profesor::Profesor(string _carrera) {
	carrera = _carrera;
}

void Profesor::setCarrera(string _carrera) {
	carrera = _carrera;
}

string Profesor::getCarrera() {
	return carrera;
}

void Profesor::ensenar() {
	cout << "Ensenando";

}

void Profesor::mostrarDatos() {
	cout << endl << "Datos del profesor:" << endl;
	Persona::mostrarDatos();
	Empleado::mostrarDatos();
	cout << "Carrera: " << getCarrera() << endl;
}
