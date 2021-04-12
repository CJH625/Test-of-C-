#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main()
{
	Shape s1;
	Circle c1{2.1, Color::COLOR_BLUE, true};
	Rectangle r1{3.2, 3.3, Color::COLOR_BLACK, false};
	std::cout << s1.toString() << std::endl;
	std::cout << c1.toString() << std::endl;
	std::cout << r1.toString() << std::endl;
	std::cin.get();
	return 0;
}