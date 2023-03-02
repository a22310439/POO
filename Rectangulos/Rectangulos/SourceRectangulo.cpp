#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main()
{
    double largo, ancho, minutos;
    int segundos;

    Rectangulo Pared, Ventana;
    cout << "Ingresa el largo de la pared (en metros): ";
    cin >> largo;
    Pared.setLargo(largo);
    cout << "Ingresa el ancho de la pared (en metros): ";
    cin >> ancho;
    Pared.setAncho(ancho);

    cout << "\nIngresa el largo de la ventana (en metros): ";
    cin >> largo;
    Ventana.setLargo(largo);
    cout << "Ingresa el ancho de la Ventana (en metros): ";
    cin >> ancho;
    Ventana.setAncho(ancho);


    minutos = Pared.Area() - Ventana.Area();
    segundos = modf(minutos, &minutos) * 60;

    if (minutos >= 1) {
        cout << "\nPara pintar La pared, tomando en cuenta que se toman "
            << "10 minutos en pintar 1 metro cuadrado, se tomaria aproximadamente "
            << minutos << " minutos y " << segundos << " segundos.";
    }
    else {
        cout << "Para pintar La pared, tomando en cuenta que se toman "
            << "10 minutos en pintar 1 metro cuadrado, se tomaria aproximadamente "
            << segundos << " segundos.";
    }

    return 0;
}