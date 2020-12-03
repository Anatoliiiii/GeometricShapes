#include "Square.hpp"




void GeometricShape::Square::SetSide(double side)
{
	this -> side = side;
}

double GeometricShape::Square::area()
{
	return side*side;
}

double GeometricShape::Square::perimetr()
{
	return side*4;
}
