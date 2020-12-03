#pragma once
#include "Shape.hpp"
namespace GeometricShape
{
	class Circle : public Shape
	{
	private:

		double radius;

	public:
		
	void SetRadius(double radius);
	
	double area() override;

	double perimetr() override;

	double diametr();

	};
}