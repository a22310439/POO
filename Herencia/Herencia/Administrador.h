#pragma once
#include <iostream>
#include "Empleado.h"

using namespace std;

class Administrador : public Empleado
{
private:
	string puesto;

public:
	Administrador();
	Administrador(string _puesto);
	void setPuesto(string _puesto);
	string getPuesto();
	void administrar();
	void mostrarDatos();
};
