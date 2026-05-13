#include <iostream>
using namespace std;

class Area {
public:
    // Area of square
    void area(float side) {
        cout << "Area of Square = " << side * side << endl;
    }

    // Area of rectangle
    void area(float length, float breadth) {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }

    // Area of circle
    void area(double radius) {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }

    // Area of triangle
    void area(float base, float height, int) {
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    }
};

int main() {
    Area a;

    a.area(4.0f);            // Square
    a.area(5.0f, 3.0f);      // Rectangle
    a.area(2.5);             // Circle
    a.area(6.0f, 4.0f, 1);   // Triangle

    return 0;
}