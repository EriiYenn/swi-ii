#include <iostream>
//#include "Square.cpp"
//#include "Rectangle.cpp"
#include "House.cpp"
#include "FloorTile.cpp"
#include "Person.cpp"

using namespace std;

//void test(Shape& shape, string object)
//{
//    int area = shape.calculateArea();
//
//    cout << object << " has area of " << area << endl;
//}
//
//int main()
//{
//    Rectangle rectangle(5, 5);
//    test(rectangle, "Rectangle");
//
//    Square square(5);
//    test(square, "Square");
//}

int main()
{
	FloorTile tileSet(10, "Marble", "Very pretty marble tile for luxury houses", "Black-White");
	House house(tileSet);
	Person person("Josef", "Zacek", house);

	if (person.getHouse().getFloor().calculateArea() > 200)
	{
		cout << "House has large " << person.getHouse().getFloor().getColor() << " " << person.getHouse().getFloor().getMaterial() << " floor (" << person.getHouse().getFloor().calculateArea() << " m^2)" << endl;
	}
	else
	{
		cout << "House has small " << person.getHouse().getFloor().getColor() << " " << person.getHouse().getFloor().getMaterial() << " floor (" << person.getHouse().getFloor().calculateArea() << " m^2)" << endl;
	}
}