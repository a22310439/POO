#include<iostream>
#include "Empleado.h"

using namespace std;

Empleado::Empleado() : numNomina(0), sueldo(0) {}

Empleado::Empleado(int numNom, string nom, double su) {
	numNomina = numNom;
	nombre = nom;
	sueldo = su;
}

Empleado::~Empleado() {
	cout << "Destruyendo el objeto Empleado" << endl;
}

void Empleado::setNumNomina(int numNom) {
	numNomina = numNom;
}

void Empleado::setNombre(string nom) {
	nombre = nom;
}

void Empleado::setSueldo(double su) {
	sueldo = su;
}

int Empleado::getNumNomina() {
	return numNomina;
}

string Empleado::getNombre() {
	return nombre;
}

double Empleado::getSueldo() {
	return sueldo;
}

void Empleado::mostrarDatos() {
	cout << endl << "Numero de nomina: " << numNomina << endl
		<< "Nombre: " << nombre << endl
		<< "Sueldo: $" << sueldo << endl << endl;
}