#pragma once

#include "House.cpp"

class Person
{
public:
	Person(string firstName, string lastName, House& house)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->house = house;
	}

	// House getHouse() { return this->house; }

	bool hasLargeFloor()
	{
		return house.tileSet.calculateArea() > 200;
	}

	string firstName;
	string lastName;

protected:
	House house;
};