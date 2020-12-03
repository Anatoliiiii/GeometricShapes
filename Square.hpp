#pragma once
#include "Shape.hpp"


namespace GeometricShape
{
	class Square : public Shape
	{
	protected:

	double side;

	public:


		void SetSide(double side);

	virtual	double area() override; 

    virtual	double perimetr() override;



	};
}

