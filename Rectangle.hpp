#pragma once
#include "Square.hpp"

namespace GeometricShape
{
	class Rectangle : public Square
	{
	private:
		double side2;
    
	public:

		void setSided(double side2);

		double perimetr() override;

		double area() override;
     


	};

}