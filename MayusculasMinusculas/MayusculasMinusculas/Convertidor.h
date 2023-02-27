#include <iostream>

using namespace std;

class Convertidor {
private:
	string cadena;

public:
	Convertidor(string cadena) {
		this->cadena = cadena;
	}

	string getCadena() {
		return cadena;
	}

	void minusculas() {
		for (int i = 0; i < cadena.length(); i++) {
			if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
				cadena[i] = cadena[i] + 32; // convertir a minúscula
			}
		}
	}

	void mayusculas() {
		for (int i = 0; i < cadena.length(); i++) {
			if (cadena[i] >= 'a' && cadena[i] <= 'z') {
				cadena[i] = cadena[i] - 32; // convertir a mayúscula
			}
		}
	}
};