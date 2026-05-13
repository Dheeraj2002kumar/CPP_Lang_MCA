// WAP to increment the employee salaries on the basis of there designation (Manager-5000, General Manager-10000, CEO-20000, worker-2000). Use employee name, id, designation and salary as data member and inc_sal as member function (Use array of object).

#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name, designation;
    int id;
    float salary;

public:
    void getdata() {
        cout << "\nEnter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void inc_sal() {
        if(designation == "Manager")
            salary += 5000;
        else if(designation == "GeneralManager")
            salary += 10000;
        else if(designation == "CEO")
            salary += 20000;
        else if(designation == "worker")
            salary += 2000;
        else
            cout << "Invalid Designation!" << endl;
    }

    void display() {
        cout << "\nEmployee ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Updated Salary: " << salary << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[n];

    for(int i = 0; i < n; i++) {
        emp[i].getdata();
        emp[i].inc_sal();
    }

    cout << "\n--- Employee Details After Salary Increment ---" << endl;

    for(int i = 0; i < n; i++) {
        emp[i].display();
    }

    return 0;
}