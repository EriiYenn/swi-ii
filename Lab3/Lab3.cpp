#include <iostream>
#include "Square.cpp"
#include "Rectangle.cpp"

using namespace std;

void test(Shape& shape, string object)
{
    int area = shape.calculateArea();

    cout << object << " has area of " << area << endl;
}

int main()
{
    Rectangle rectangle(5, 5);
    test(rectangle, "Rectangle");

    Square square(5);
    test(square, "Square");
}