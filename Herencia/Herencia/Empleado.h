#pragma once
#include <iostream>
#include "Persona.h"

using namespace std;

class Empleado : public Persona
{
private:
	string jefe;

public:
	Empleado();
	Empleado(string _jefe);
	void setJefe(string _jefe);
	string getJefe();
	void cobrar();
	void mostrarDatos();
};
