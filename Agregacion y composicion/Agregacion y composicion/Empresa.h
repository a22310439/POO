#pragma once
#include<iostream>
#include<vector>
#include"Cliente.h"
#include"Empleado.h"

using namespace std;

class Empresa {
private:
    vector<Empleado*> listaEmpleados;
    Cliente* cliente;

public:
    Empresa();
    Empresa(Cliente* cli);
    ~Empresa();
    void agregarEmpleado(Empleado* emp);
    int getCantidadEmpleados();
    double getSumaSueldos();
    Cliente* getCliente();
    void mostrarDatos();
};