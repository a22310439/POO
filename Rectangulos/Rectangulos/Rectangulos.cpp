#include <iostream>
#include <math.h>
#include "Rectangulos.h"

using namespace std;

int main()
{
    float largo, ancho, minutos;
    int segundos;
    cout << "Ingresa el largo de la pared (en metros): ";
    cin >> largo;
    cout << "Ingresa el ancho de la pared (en metros): ";
    cin >> ancho;

    Rectangulos Pared(largo, ancho);

    cout << "Ingresa el largo de la ventana (en metros): ";
    cin >> largo;
    cout << "Ingresa el ancho de la Ventana (en metros): ";
    cin >> ancho;

    Rectangulos Ventana(largo, ancho);

    minutos = Pared.getArea() - Ventana.getArea();
    segundos = modf(minutos, &minutos) * 60;

    if (minutos >= 1) {
        cout << "Para pintar La pared, tomando en cuenta que se toman "
            << "10 minutos en pintar 1 metro cuadrado, se tomaria aproximadamente "
            << minutos << " minutos y " << segundos << " segundos.";
    }
    else
        cout << "Para pintar La pared, tomando en cuenta que se toman "
            << "10 minutos en pintar 1 metro cuadrado, se tomaria aproximadamente "
            << segundos << " segundos.";
    
    return 0;
}