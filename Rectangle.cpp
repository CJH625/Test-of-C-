#include <iostream>
#include <string>
#include "Rectangle.h"
//#include "Shape.h"

Rectangle::Rectangle() {
	height = 1.0;
	width = 1.0;
}

Rectangle::Rectangle(double height_, double width_) {
	height = height_;
	width = width_;
}

Rectangle::Rectangle(double height_, double width_, Color color_, bool filled_) : Shape{ color_, filled_ } {
	height = height_; // 因为派生类无法访问基类私有成员，因此必须用类初始化
	width = width_;
}

double Rectangle::getHeight() const {
	return height;
}

double Rectangle::getWidth() const {
	return width;
}

void Rectangle::setHeight(double height) {
	this->height = height;
}

void Rectangle::setWidth(double width) {
	this->width = width;
}

double Rectangle::getArea() const {
	return (height * width);
}

std::string Rectangle::toString() {
	return (std::to_string(height) + " " + std::to_string(width) + " " +
		colorToString() + " " + filledToString());
}