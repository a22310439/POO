#pragma once
#include <iostream>

using namespace std;

class Organizador
{
private:
	int arreglo[10];

public:
	Organizador(int _arreglo[10]) {
		for (int i = 0; i < 10; i++) {
			arreglo[i] = _arreglo[i];
		}
	}

	void algoritmoBurbuja() {
		int temp = 0;
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				if (arreglo[j] > arreglo[j + 1]) {
					temp = arreglo[j];
					arreglo[j] = arreglo[j + 1];
					arreglo[j + 1] = temp;
				}
			}
		}
	}

	int* getArreglo() {
		return arreglo;
	}
};