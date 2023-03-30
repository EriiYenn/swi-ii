#pragma once

#include "Square.cpp"
#include <string>

using namespace std;

class FloorTile : public Square
{
public:
	FloorTile() {}
	FloorTile(int size, string material, string description, string color) : Square(size)
	{
		this->material = material;
		this->description = description;
		this->color = color;
	}

	string getMaterial() { return this->material; }
	string getDescription() { return this->description; }
	string getColor() { return this->color; };

protected:
	string material;
	string description;
	string color;
};