#pragma once
#include "Shape.hpp"

namespace GeometricShape
{
	class Triangle : public Shape
	{
	protected:

		double side1, side2, side3;


	public:

		


		void setSides(double side1, double side2, double side3);

		double area() override;

		double perimetr() override;




	};
}
