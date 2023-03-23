#pragma once

class Rectangle
{
public:
	Rectangle(int width, int height)
	{
		this->width = width;
		this->height = height;
	}

	int getWidth() { return this->width; }
	int getHeight() { return this->height; }

	virtual void setWidth(int width) { this->width = width; }
	virtual void setHeight(int height) { this->height = height; }

	int calculateArea() { return this->height * this->width; }
protected:
	int width, height;
};