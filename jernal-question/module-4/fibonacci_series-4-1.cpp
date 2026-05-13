// WAP to generate a series of Fibonacci numbers using copy constructor, where it is defined outside the class using scope resolution operator.

#include <iostream>
using namespace std;

class Fibonacci {
    int a, b;

public:
    // Constructor
    Fibonacci(int x, int y) {
        a = x;
        b = y;
    }

    // Copy Constructor Declaration
    Fibonacci(Fibonacci &f);

    void display(int n);
};

// Copy Constructor defined outside the class
Fibonacci::Fibonacci(Fibonacci &f) {
    a = f.a;
    b = f.b;
}

// Function to display Fibonacci series
void Fibonacci::display(int n) {
    int next;

    cout << a << " " << b << " ";

    for(int i = 3; i <= n; i++) {
        next = a + b;
        cout << next << " ";

        a = b;
        b = next;
    }
}

int main() {
    int n;

    cout << "Enter number of terms: ";
    cin >> n;

    Fibonacci f1(0, 1);

    // Using copy constructor
    Fibonacci f2 = f1;

    cout << "Fibonacci Series: ";
    f2.display(n);

    return 0;
}

/*
Enter number of terms: 10

Fibonacci Series: 0 1 1 2 3 5 8 13 21 34
*/