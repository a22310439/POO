#include <iostream>

using namespace std;

class Cifrador {
private:
    string cadena;
    int espacios;

public:
    Cifrador(string cadena, int espacios){
        this->cadena = cadena;
        this->espacios = espacios;
    }

    string getCadena(){
        return cadena;
    }

    void encriptar(){
        for (int i = 0; i < cadena.length(); i++) {
            cadena[i] = cadena[i] + espacios;
        }
    }

    void desencriptar(){
        for (int i = 0; i < cadena.length(); i++) {
            cadena[i] = cadena[i] - espacios;
        }
    }
};