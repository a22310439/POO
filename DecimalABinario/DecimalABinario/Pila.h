#pragma once
#include <iostream>

using namespace std;

class Pila
{
private:
    int arr[32];
    int top;
public:
    Pila();
    void push(int data);
    int pop();
    bool pilaVacia();
    bool pilaLlena();
    void decimalABinario(int num);
};
