#pragma once
#include <iostream>
#include <string>
#include <array>
using namespace std::string_literals; // �ַ�������

enum class Color {
	COLOR_BLACK,
	COLOR_WHITE,
	COLOR_RED,
	COLOR_GREEN,
	COLOR_BLUE,
	COLOR_YELLOW,
	COLOR_GREY
};

class Shape
{
public:
	Shape();
	Shape(Color color_, bool filled_);
	Color getColor();
	bool isfilled();
	void setColor(Color color);
	void setfilled(bool filled);
	std::string colorToString();
	std::string filledToString();
	std::string toString();

private:
	Color color;
	bool filled;
	std::array<std::string, 7> c{ "black"s, "white"s, "red"s,
		"green"s, "blue"s, "yellow"s, "grey"s }; // �ַ���������ĩβ��s���Զ�ת��Ϊstring����
};
