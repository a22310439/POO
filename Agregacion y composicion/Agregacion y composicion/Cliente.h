#pragma once
#include<iostream>

using namespace std;

class Cliente
{
private:
	int numCliente;
	string nombre, direccion;

public:
	Cliente();
	Cliente(int numCli, string nom, string dir);
	~Cliente();
	void setNumCliente(int numCli);
	void setNombre(string nom);
	void setDireccion(string dir);
	int getNumCliente();
	string getNombre();
	string getDireccion();
	void mostrarDatos();
};

