#pragma once
#include <iostream>

using namespace std;

class Estudiante : public Persona
{
private:
	int grado;
	string grupo;

public:
	Estudiante();
	Estudiante(int _grado, string _grupo);
	void setGrado(int _grado);
	void setGrupo(string _grupo);
	int getGrado();
	string getGrupo();
	void estudiar();
	void mostrarDatos();
};
