/*
WAP to do the following:
Generate the following menu:
Add two numbers.
Subtract two numbers.
Multiply two numbers.
Divide two numbers.
Exit.
Ask the user to input two integers and then input a choice from the menu. Perform all the arithmetic operations which have been offered by the menu. Checks for errors caused due to inappropriate entry by user and output a statement accordingly
*/


#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice;

    // Input two integers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Display menu
    cout << "\n===== MENU =====" << endl;
    cout << "1. Add two numbers" << endl;
    cout << "2. Subtract two numbers" << endl;
    cout << "3. Multiply two numbers" << endl;
    cout << "4. Divide two numbers" << endl;
    cout << "5. Exit" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    // Perform operation based on choice
    switch(choice) {
        case 1:
            cout << "Sum = " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Difference = " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Product = " << num1 * num2 << endl;
            break;

        case 4:
            if(num2 != 0)
                cout << "Quotient = " << (float)num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;

        case 5:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Error: Invalid choice entered." << endl;
    }

    return 0;
}