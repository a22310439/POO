#pragma once
#include <iostream>

using namespace std;

class Persona
{
private:
	string nombre;
	string domicilio;
	string horario;

public:
	Persona();
	Persona(string _nombre, string _domicilio, string _horario);
	void setNombre(string _nombre);
	void setDomicilio(string _domicilio);
	void setHorario(string _horario);
	string getNombre();
	string getDomicilio();
	string getHorario();
	void asistir();
	void mostrarDatos();
};
