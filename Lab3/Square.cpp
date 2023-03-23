#pragma once

#include "Rectangle.cpp"

class Square : public Rectangle
{
public:
	Square(int size) : Rectangle(size, size) {}

	void setWidth(int width) override
	{
		this->width = width;
		this->height = width;
	}
	void setHeight(int height) override
	{
		this->height = height;
		this->width = height;
	}
};