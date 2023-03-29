#include <iostream>
#include "Persona.h"
#include "Estudiante.h"

using namespace std;

Estudiante::Estudiante() : grado(0) {}

Estudiante::Estudiante(int _grado, string _grupo) {
	grado = _grado;
	grupo = _grupo;
}

void Estudiante::setGrado(int _grado) {
	grado = _grado;
}

void Estudiante::setGrupo(string _grupo) {
	grupo = _grupo;
}

int Estudiante::getGrado() {
	return grado;
}

string Estudiante::getGrupo() {
	return grupo;
}

void Estudiante::estudiar() {
	cout << "Estudiando";
}

void Estudiante::mostrarDatos() {
	cout << endl << "Datos del estudiante: " << endl;
	Persona::mostrarDatos();
	cout << "Grado: " << getGrado() << endl << "Grupo: " << getGrupo() << endl;
}