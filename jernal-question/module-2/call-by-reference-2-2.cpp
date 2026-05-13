// Program to Exchange Contents of Two Variables using Call by Reference
#include <iostream>
using namespace std;

// Function using call by reference
void swapReference(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swapping:" << endl;
    cout << "x = " << x << " , y = " << y << endl;

    swapReference(x, y);

    cout << "After swapping:" << endl;
    cout << "x = " << x << " , y = " << y << endl;

    return 0;
}