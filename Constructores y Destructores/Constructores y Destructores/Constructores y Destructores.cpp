#include <iostream>
#include "Articulo.h"

using namespace std;


int main()
{
	string clave, nombre;
	double costo;
	int existencia, cantidad1, cantidad2, cantidad3, totalarticulo1, totalarticulo2, totalarticulo3;

	Articulo articulo1;

	cout << "Ingresa la clave del articulo 1: ";
	cin >> clave;
	articulo1.setClave(clave);

	cout << "Ingresa el nombre del articulo 1: ";
	cin >> nombre;
	articulo1.setNombre(nombre);

	cout << "Ingresa el costo del articulo 1: ";
	cin >> costo;
	articulo1.setCosto(costo);

	cout << "Ingresa las unidades en existencia del articulo 1: ";
	cin >> existencia;
	articulo1.setExistencia(existencia);

	Articulo articulo2 = articulo1;

	cout << endl << "Ingresa el nombre del articulo 2: ";
	cin >> nombre;
	articulo2.setNombre(nombre);

	Articulo articulo3(clave, nombre, costo, existencia);

	cout << endl << "Ingrese la cantidad a comprar del articulo 1: ";
	cin >> cantidad1;
	cout << "Ingrese la cantidad a comprar del articulo 2: ";
	cin >> cantidad2;
	cout << "Ingrese la cantidad a comprar del articulo 3: ";
	cin >> cantidad3;

	totalarticulo1 = articulo1.getCosto() * cantidad1;
	totalarticulo2 = articulo2.getCosto() * cantidad2;
	totalarticulo3 = articulo3.getCosto() * cantidad3;

	cout << endl << "Articulo 1: " << endl
		<< "Clave:	" << articulo1.getClave() << "	Nombre:	" << articulo1.getNombre()
		<< "	Costo por unidad:	" << articulo1.getCosto() << "	Cantidad a comprar :	" << cantidad1 << endl
		<< endl << "Articulo 2: " << endl
		<< "Clave:	" << articulo2.getClave() << "	Nombre:	" << articulo2.getNombre()
		<< "	Costo por unidad:	" << articulo2.getCosto() << "	Cantidad a comprar :	" << cantidad2 << endl
		<< endl << "Articulo 3: " << endl
		<< "Clave:	" << articulo3.getClave() << "	Nombre:	" << articulo3.getNombre()
		<< "	Costo por unidad:	" << articulo3.getCosto() << "	Cantidad a comprar :	" << cantidad3 << endl
		<< endl << "Costo total:	" << (totalarticulo1 + totalarticulo2 + totalarticulo3) * 1.15 << endl;

	return 0;
}

