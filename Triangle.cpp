#include "Triangle.hpp"
#include <iostream>
#include <math.h>

void GeometricShape::Triangle::setSides(double side1, double side2, double side3)
{
	this->side1 = side1;
	this->side2 = side2;
	this->side3 = side3;
}


double GeometricShape::Triangle::area()
{

	return side1 * side2 / 2;

}


double GeometricShape::Triangle::perimetr()
{

	return side1 + side2 + side3;

}
