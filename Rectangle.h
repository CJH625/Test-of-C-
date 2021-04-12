#pragma once
#include <iostream>
#include <string>
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(double height_, double width_);
	Rectangle(double height_, double width_, Color color_, bool filled_);
	double getHeight() const;
	double getWidth() const;
	void setHeight(double height);
	void setWidth(double width);
	double getArea() const; // const代表类成员函数不被修改
	std::string toString();

private:
	double height;
	double width;
};
