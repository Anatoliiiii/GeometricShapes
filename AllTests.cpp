#include "Triangle.hpp"
#include "Circle.hpp"
#include  <iostream>
#include <math.h>
#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

using namespace std;

int main()
{
	cout << "--------------------------------------------------" << endl << "Triangle tests" << endl;

	GeometricShape::Triangle Rightsidedtriangle;
	 
	double side1 = 4;
	double side2 = 3, side3 = 5;

	Rightsidedtriangle.setSides(side1, side2, side3);


	cout <<"Area of Rightsidetriangle : " << Rightsidedtriangle.area() << endl;

	cout <<"Perimetr of Rightsidetriangle : "<< Rightsidedtriangle.perimetr() << endl;

	cout << "--------------------------------------------------" << endl << "Circle tests" << endl;

	GeometricShape::Circle Circle;

	Circle .SetRadius(10);

	cout << "Area of Circle : " << Circle.area() << endl;

	cout << "Perimetr of Circle : " << Circle.perimetr() << endl;

	cout << "Diametr of Circle : " << Circle.diametr() << endl;

	cout << "--------------------------------------------------" << endl << "Square test" << endl;

	GeometricShape::Square Square;

	Square.SetSide(6);

	cout << "Area of Square : " << Square.area() << endl;

	cout << "Perimetr of Square : " << Square.perimetr() << endl;

	cout << "--------------------------------------------------" << endl << "Rectengle test" << endl;

	GeometricShape::Rectangle Rectangle;

	Rectangle.SetSide(10);

	Rectangle.setSided(5);

	cout << " Area of Recten : " << Rectangle.area() << endl;

	cout << " Perimetr of Recten : " << Rectangle.perimetr() << endl;

	cout << "--------------------------------------------------" << endl; 
   

	

	



	system("pause");
}

