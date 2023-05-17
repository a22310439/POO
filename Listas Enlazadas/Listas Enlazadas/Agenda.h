#pragma once
#include<iostream>
#include"Contacto.h"

using namespace std;

class Agenda
{
private:
	Contacto* primerContacto;
public:
	Agenda();
	void agregarContacto();
	void borrarContacto();
	void listarContactos();
	void modificarContacto();
};
