// Create a class item, having two data members x & y, overload ‘-‘(unary operator) to change the sign of x and y.


#include <iostream>
using namespace std;

class Item {
    int x, y;

public:
    void getData() {
        cout << "Enter values of x and y: ";
        cin >> x >> y;
    }

    // Overloading unary - operator
    void operator - () {
        x = -x;
        y = -y;
    }

    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    Item obj;

    obj.getData();

    cout << "\nBefore changing sign:" << endl;
    obj.display();

    -obj;

    cout << "\nAfter changing sign:" << endl;
    obj.display();

    return 0;
}

/*
Enter values of x and y: 10 20

Before changing sign:
x = 10
y = 20

After changing sign:
x = -10
y = -20

*/