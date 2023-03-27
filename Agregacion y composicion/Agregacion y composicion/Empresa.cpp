#include<iostream>
#include"Empresa.h"

using namespace std;

Empresa::Empresa() {}

Empresa::Empresa(Cliente* cli) {
	cliente = cli;
}

Empresa::~Empresa() {
	cout << "Destruyendo el objeto Empresa" << endl;
	for (int i = 0; i < listaEmpleados.size(); i++) {
		delete listaEmpleados[i];
	}
}

void Empresa::agregarEmpleado(Empleado* emp) {
	listaEmpleados.push_back(emp);
}

int Empresa::getCantidadEmpleados() {
	return int(listaEmpleados.size());
}

double Empresa::getSumaSueldos() {
	double suma = 0.0;
	for (int i = 0; i < listaEmpleados.size(); i++) {
		suma += listaEmpleados[i]->getSueldo();
	}
	return suma;
}

Cliente* Empresa::getCliente() {
	return cliente;
}

void Empresa::mostrarDatos() {
	cout << endl << endl << "Datos de la empresa:" << endl<< endl
		<< "Datos del cliente: " << endl;
	cliente->mostrarDatos();
	cout << endl << "Cantidad de empleados: " << getCantidadEmpleados() << endl
		<< "Suma de sueldos: $" << getSumaSueldos() << endl
		<< endl << "Datos de los empleados: " << endl << endl;
	for (int i = 0; i < listaEmpleados.size(); i++) {
		listaEmpleados[i]->mostrarDatos();
	}
}