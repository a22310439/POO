#include "Pila.h"
#include<iostream>

using namespace std;

Pila::Pila() {
    top = -1;
}

void Pila::push(int dato) {
    if (pilaLlena()) {
        cout << "La pila est� llena." << endl;
        return;
    }
    arr[++top] = dato;
}

int Pila::pop() {
    if (pilaVacia()) {
        cout << "La pila est� vac�a." << endl;
        return 0;
    }
    return arr[top--];
}

bool Pila::pilaVacia() {
    return top == -1;
}

bool Pila::pilaLlena() {
    return top == 30;
}

void Pila::decimalABinario(int num) {
    Pila conversor;
    while (num > 0) {
        int remainder = num % 2;
        conversor.push(remainder);
        num /= 2;
    }
    while (!conversor.pilaVacia()) {
        cout << conversor.pop();
    }
}