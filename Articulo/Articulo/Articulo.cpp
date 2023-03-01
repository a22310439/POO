#include <iostream>
#include "Articulo.h"


int main() {
    int numArticulos;
    string clave, nombre;
    double precio;
    double precioTotal = 0;
    
    cout << "Cuantos articulos se van a ingresar?: ";
    cin >> numArticulos;

    Articulo *articulos = new Articulo[numArticulos];

    for (int i = 0; i < numArticulos; i++) {
        cout << "\nArticulo #" << i + 1 << endl;
        cout << "Clave: ";
        cin >> clave;
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Precio: ";
        cin >> precio;

        articulos[i] = Articulo(clave, nombre, precio);
    }

    cout << endl << endl;

    for (int i = 0; i < numArticulos; i++) {
        Articulo articulo = articulos[i];

        cout << "Clave: " << articulo.getClave()
            << "    Nombre: " << articulo.getNombre()
            << "    Precio: " << articulo.getPrecio() << endl;
    }

    for (int i = 0; i < numArticulos; i++) {
        Articulo articulo = articulos[i];
        precioTotal = precioTotal + articulo.getPrecio();
    }

    precioTotal = precioTotal * 1.15;

    cout << "\nEl precio total de los articulos es de: " << precioTotal;

    return 0;
}