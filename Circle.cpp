#include <iostream>
#include <string>
#include "Circle.h"

Circle::Circle() {
	radius = 1.0;
}

Circle::Circle(double radius_) {
	radius = radius_;
}

Circle::Circle(double radius_, Color color_, bool filled_) : Shape{color_, filled_} {
	radius = radius_;
}

double Circle::getRadius() const {
	return radius;
}

void Circle::setRadius(double radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return (3.14 * radius * radius);
}

std::string Circle::toString() {
	return (std::to_string(radius) + " " + colorToString() + " " + filledToString());
}