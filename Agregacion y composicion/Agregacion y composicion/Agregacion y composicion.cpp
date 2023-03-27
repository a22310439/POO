/*Cree una estructura de clases en la que se modele tanto la agregación como la composición,
en el sistema existen las clases Empresa, Cliente con atributos como numero de cliente, nombre, dirección y 
Empleado con atributos de Numero de nomina nombre, sueldo, diseñe un diagrama en UML con las relaciones 
apropiadas y codifique el programa orientado a objetos en C++, en el programa cree una instancia de Empresa,
una instancia de Cliente y dos empleados, agregue los siguientes métodos a la clase de la Empresa :
Devolver la cantidad de empleados de la empres
Devolver la suma de los sueldos de todos los empleados
Agregue los métodos set y get, así como constructores y destructores, adicionalmente incluya un método mostrarDatos 
para cada clase.*/

#include<iostream>
#include<string>
#include"Cliente.h"
#include"Empleado.h"
#include"Empresa.h"

using namespace std;

int main() {
    int numNomina, numCliente;
    string nombre, direccion;
    double sueldo;

    cout << "Ingresa el numero de cliente: ";
    cin >> numCliente;
    cin.ignore();

    cout << "Ingresa el nombre del cliente: ";
    getline(cin, nombre);

    cout << "Ingrese la direccion del cliente: ";
    getline(cin, direccion);

    Cliente* cli = new Cliente(numCliente, nombre, direccion);

    cout << "Ingresa el numero de nomina del empleado 1: ";
    cin >> numNomina;
    cin.ignore();

    cout << "Ingresa el nombre del empleado 1: ";
    getline(cin, nombre);

    cout << "Ingresa el sueldo mensual del empleado 1: ";
    cin >> sueldo;

    Empleado* emp1 = new Empleado(numNomina, nombre, sueldo);

    cout << "Ingresa el numero de nomina del empleado 2: ";
    cin >> numNomina;
    cin.ignore();

    cout << "Ingresa el nombre del empleado 2: ";
    getline(cin, nombre);

    cout << "Ingresa el sueldo mensual del empleado 2: ";
    cin >> sueldo;

    Empleado* emp2 = new Empleado(numNomina, nombre, sueldo);
    Empresa* emp = new Empresa(cli);
    emp->agregarEmpleado(emp1);
    emp->agregarEmpleado(emp2);
    emp->mostrarDatos();
    delete emp;
    delete cli;
	return 0;
}