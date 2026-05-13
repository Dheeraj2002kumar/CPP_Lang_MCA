#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void input() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    // Friend function declaration
    friend Complex addComplex(Complex c1, Complex c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition
Complex addComplex(Complex c1, Complex c2) {
    Complex temp;

    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;

    return temp;
}

int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.input();

    cout << "Enter second complex number:" << endl;
    c2.input();

    result = addComplex(c1, c2);

    cout << "Sum of complex numbers = ";
    result.display();

    return 0;
}