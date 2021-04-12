#include <iostream>
#include <string>
#include <array>
#include "Shape.h"

Shape::Shape() : color{ Color::COLOR_RED }, filled{ true } {};
	
Shape::Shape(Color color_, bool filled_) : color{ color_ }, filled{ filled_ } {};
	
Color Shape::getColor() {
	return color;
};
	
bool Shape::isfilled() {
	return filled;
};
	
void Shape::setColor(Color color) {
	this->color = color;
};
	
void Shape::setfilled(bool filled) {
	this->filled = filled;
};
	
std::string Shape::colorToString() {
	return "Color: " + c[static_cast<int> (color)];
}

std::string Shape::filledToString() {
	return (filled ? "filled" : "not filled");
}

std::string Shape::toString() {
	return ("The color is " + c[static_cast<int> (color)] + " " + 
		(filled ? "filled"s : "not filled"s)); // C++·ç¸ñ
};