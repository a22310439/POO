#include <iostream>
#include <string>
#include "Persona.h"
#include "Empleado.h"
#include "Estudiante.h"
#include "Administrador.h"
#include "Profesor.h"

using namespace std;

void mostrarDatos(Administrador, Estudiante, Profesor);

int main() {
	string nombre, domicilio, jefe, puesto, grupo, carrera, horario;
	int grado;

	Profesor Profe;
	Estudiante Estu;
	Administrador Admin;

	//Ingresa datos de profesor

	cout << "Ingresa el nombre del profesor: ";
	getline(cin, nombre);
	Profe.setNombre(nombre);

	cout << "Ingresa el domicilio del profesor: ";
	getline(cin, domicilio);
	Profe.setDomicilio(domicilio);

	cout << "Ingresa el horario del profesor: ";
	getline(cin, horario);
	Profe.setHorario(horario);

	cout << "Ingresa el nombre del jefe del profesor: ";
	getline(cin, nombre);
	Profe.setJefe(nombre);

	cout << "Ingresa la carrera a la que pertenece el profesor: ";
	getline(cin, carrera);
	Profe.setCarrera(carrera);

	//Ingresa datos de administrador

	cout << "Ingresa el nombre del administrador: ";
	getline(cin, nombre);
	Admin.setNombre(nombre);

	cout << "Ingresa el domicilio del administrador: ";
	getline(cin, domicilio);
	Admin.setDomicilio(domicilio);

	cout << "Ingresa el horario del administrador: ";
	getline(cin, horario);
	Admin.setHorario(horario);

	cout << "Ingresa el nombre del jefe del administrador: ";
	getline(cin, nombre);
	Admin.setJefe(nombre);

	cout << "Ingresa el puesto del administrador: ";
	getline(cin, puesto);
	Admin.setPuesto(puesto);

	//Ingresa datos de estudiante

	cout << "Ingresa el nombre del estudiante: ";
	getline(cin, nombre);
	Estu.setNombre(nombre);

	cout << "Ingresa el domicilio del estudiante: ";
	getline(cin, domicilio);
	Estu.setDomicilio(domicilio);

	cout << "Ingresa el horario del estudiante: ";
	getline(cin, horario);
	Estu.setHorario(horario);

	cout << "Ingresa el grado que el estudiante esta cursando: ";
	cin >> grado;
	Estu.setGrado(grado);
	cin.ignore(); 

	cout << "Ingresa el grupo al que el estudiante pertenece: ";
	getline(cin, grupo);
	Estu.setGrupo(grupo);

	mostrarDatos(Admin, Estu, Profe);

	return 0;
}

void mostrarDatos(Administrador Admin, Estudiante Estu, Profesor Profe) {
	Profe.mostrarDatos();
	Estu.mostrarDatos();
	Admin.mostrarDatos();
}