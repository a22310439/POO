#pragma once
#include <iostream>

using namespace std;

class Articulo{
private:
	string clave;
	string nombre;
	double costo;
	int existencia;

public:
	Articulo();
	Articulo(string _clave, string _nombre, double _costo, int _existencia);
	Articulo(const Articulo &articulo);
	void setClave(string cla);
	void setNombre(string nom);
	void setCosto(double cos);
	void setExistencia(int exi);
	string getClave();
	string getNombre();
	double getCosto();
	int getExistencia();
};

