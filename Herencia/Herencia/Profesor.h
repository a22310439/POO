#pragma once
#include <iostream>
#include "Empleado.h"

using namespace std;

class Profesor : public Empleado
{
private:
	string carrera;

public:
	Profesor();
	Profesor(string _carrera);
	void setCarrera(string _carrera);
	string getCarrera();
	void ensenar();
	void mostrarDatos();
};
