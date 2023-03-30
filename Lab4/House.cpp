#pragma once

#include "FloorTile.cpp"

class House
{
public:
	House() {}
	House(FloorTile& tileSet)
	{
		this->tileSet = tileSet;
	}

	// FloorTile getFloor() { return this->tileSet; }

	FloorTile tileSet;
};