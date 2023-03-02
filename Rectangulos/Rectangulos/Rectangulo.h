#pragma once

class Rectangulo
{
private:
	double largo;
	double ancho;

public:
	Rectangulo();
	void setLargo(double l);
	double getLargo();
	void setAncho(double a);
	double getAncho();
	double Area();
};