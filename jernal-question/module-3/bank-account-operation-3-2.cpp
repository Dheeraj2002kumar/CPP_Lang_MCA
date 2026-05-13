// // Write a class bank, containing data member: Name of Depositor, A/c type, Type of A/c, Balance amount. Member function: To assign initial value, To deposit an amount, to withdraw an amount after checking the balance (which should be greater than Rs. 500) , To display name & balance

#include <iostream>
#include <string>
using namespace std;

class Bank {
    string depositorName;
    string accType;
    string typeOfAcc;
    float balance;

public:
    // Assign initial values
    void assign() {
        cout << "Enter Depositor Name: ";
        cin >> depositorName;

        cout << "Enter Account Type: ";
        cin >> accType;

        cout << "Enter Type of Account: ";
        cin >> typeOfAcc;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Deposit amount
    void deposit() {
        float amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        balance += amount;

        cout << "Amount Deposited Successfully." << endl;
    }

    // Withdraw amount
    void withdraw() {
        float amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if(balance - amount >= 500) {
            balance -= amount;
            cout << "Withdrawal Successful." << endl;
        }
        else {
            cout << "Insufficient balance! Minimum Rs. 500 should remain." << endl;
        }
    }

    // Display details
    void display() {
        cout << "\nAccount Holder Name: " << depositorName << endl;
        cout << "Balance Amount: " << balance << endl;
    }
};

int main() {
    Bank b;

    b.assign();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}