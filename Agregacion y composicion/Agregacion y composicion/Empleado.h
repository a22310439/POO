#pragma once
#include<iostream>

using namespace std;

class Empleado
{
private:
	int numNomina;
	string nombre;
	double sueldo;

public:
	Empleado();
	Empleado(int numNom, string nom, double su);
	~Empleado();
	void setNumNomina(int numNom);
	void setNombre(string nom);
	void setSueldo(double su);
	int getNumNomina();
	string getNombre();
	double getSueldo();
	void mostrarDatos();
};

