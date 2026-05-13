// Program to Exchange Contents of Two Variables using Call by Value
#include <iostream>
using namespace std;

// Function using call by value
void swapValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Inside function after swapping:" << endl;
    cout << "a = " << a << " , b = " << b << endl;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swapping:" << endl;
    cout << "x = " << x << " , y = " << y << endl;

    swapValue(x, y);

    cout << "After function call:" << endl;
    cout << "x = " << x << " , y = " << y << endl;

    return 0;
}