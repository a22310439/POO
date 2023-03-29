#include <iostream>
#include "Persona.h"

using namespace std;

Persona::Persona() {}

Persona::Persona(string _nombre, string _domicilio, string _horario) {
	nombre = _nombre;
	domicilio = _domicilio;
	horario = _horario;
}

void Persona::setNombre(string _nombre) {
	nombre = _nombre;
}

void Persona::setDomicilio(string _domicilio) {
	domicilio = _domicilio;
}

void Persona::setHorario(string _horario) {
	horario = _horario;
}

string Persona::getNombre() {
	return nombre;
}

string Persona::getDomicilio() {
	return domicilio;
}

string Persona::getHorario() {
	return horario;
}

void Persona::asistir() {
	cout << "Asistiendo";
}

void Persona::mostrarDatos() {
	cout << "Nombre: " << getNombre() << endl
		<< "Domicilio: " << getDomicilio() << endl
		<< "Horario: " << getHorario() << endl;
}
