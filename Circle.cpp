#include "Circle.hpp"
#include <iostream>
#include <math.h>

void GeometricShape::Circle::SetRadius (double radius)
{

	this->radius = radius;

}

double GeometricShape::Circle::area()
{
	return radius * 2 * 3.14;
}

double GeometricShape::Circle::perimetr()
{
	return pow(radius,2) * 3.14 ;
}

double GeometricShape::Circle::diametr() {

	return radius * 2;
}

