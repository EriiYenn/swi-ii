#include <iostream>
#include "Square.cpp"

using namespace std;

void test(Rectangle& rectangle, string object)
{
    int width = rectangle.getWidth();

    rectangle.setHeight(20);

    if (width * 20 == rectangle.calculateArea())
    {
        cout << object << " is Correct!" << endl;
    }
    else
    {
        cout << ">> " << object << " is Incorrect!" << endl;
    }
}

int main()
{
    Rectangle rectangle(5, 5);
    test(rectangle, "Rectangle");

    Square square(5);
    test(square, "Square");
}