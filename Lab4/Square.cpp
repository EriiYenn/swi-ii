#pragma once

#include "Shape.cpp"

class Square : public Shape
{
public:
	Square(int size=10)
	{
		this->size = size;
	}

	void setSize(int size)
	{
		this->size = size;
	}

	int calculateArea() override
	{
		return this->size * this->size;
	}

private:
	int size;
};