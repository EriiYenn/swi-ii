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

	House getHouse() { return this->house; }

protected:
	string firstName;
	string lastName;
	House house;
};