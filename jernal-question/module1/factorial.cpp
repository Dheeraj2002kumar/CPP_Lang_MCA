// WAP to calculate factorial of a given number n.

#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    // Calculate factorial
    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial;

    return 0;
}