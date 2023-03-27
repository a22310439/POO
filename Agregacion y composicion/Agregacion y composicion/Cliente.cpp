#include <iostream>
#include "Cliente.h"

using namespace std;

Cliente::Cliente() : numCliente(0) {}

Cliente::Cliente(int numCli, string nom, string dir) {
	numCliente = numCli;
	nombre = nom;
	direccion = dir;
}

Cliente::~Cliente() {
	cout << "Destruyendo el objeto Cliente" << endl;
}

void Cliente::setNumCliente(int numCli) {
	numCliente = numCli;
}

void Cliente::setNombre(string nom) {
	nombre = nom;
}

void Cliente::setDireccion(string dir) {
	direccion = dir;
}

int Cliente::getNumCliente() {
	return numCliente;
}

string Cliente::getNombre() {
	return nombre;
}

string Cliente::getDireccion() {
	return direccion;
}

void Cliente::mostrarDatos() {
	cout << "Numero de cliente: " << numCliente << endl
		<< "Nombre: " << nombre << endl
		<< "Direccion: " << direccion << endl;
}