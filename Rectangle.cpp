#include "Rectangle.hpp"




void GeometricShape::Rectangle::setSided(double side2)
{
	this->side2 = side2;
}

double GeometricShape::Rectangle::perimetr()
{
	return (side+side2)*2;
}

double GeometricShape::Rectangle::area()
{
	return side*side2;
}
