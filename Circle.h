#pragma once
#include <iostream>
#include <string>
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle();
	Circle(double radius_);
	Circle(double radius_, Color color_, bool filled_);
	double getRadius() const;
	void setRadius(double radius_);
	double getArea();
	std::string toString();

private:
	double radius;
};
