#pragma once
#include <iostream>

class Rectangulos
{
private:
	float largo;
	float ancho;
	float area;

public:
	Rectangulos(float largo, float ancho) {
		this->largo = largo;
		this->ancho = ancho;
		area = calculateArea();
	}

	float calculateArea() {
		return largo * ancho;
	}
	
	float getArea() {
		return area;
	}
};