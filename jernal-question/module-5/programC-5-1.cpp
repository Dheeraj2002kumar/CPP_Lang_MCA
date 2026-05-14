// Create two classes namely Employee and Qualification. Using multiple inheritance derive a class Manager. Take suitable attributes and operations. Write a C++ program to implement this hierarchy.

#include <iostream>
#include <string>
using namespace std;

// Base Class Employee
class Employee {
protected:
    int empId;
    string name;

public:
    Employee(int id, string n) {
        empId = id;
        name = n;
    }

    void showEmployee() {
        cout << "\nEmployee ID : " << empId;
        cout << "\nName        : " << name;
    }
};

// Base Class Qualification
class Qualification {
protected:
    string degree;
    string university;

public:
    Qualification(string d, string u) {
        degree = d;
        university = u;
    }

    void showQualification() {
        cout << "\nDegree      : " << degree;
        cout << "\nUniversity  : " << university;
    }
};

// Derived Class Manager
class Manager : public Employee, public Qualification {
    string department;

public:
    Manager(int id, string n,
            string d, string u,
            string dept)
        : Employee(id, n), Qualification(d, u) {

        department = dept;
    }

    void display() {
        cout << "\n===== Manager Details =====";
        showEmployee();
        showQualification();
        cout << "\nDepartment  : " << department << endl;
    }
};

int main() {

    Manager m1(301, "Karan",
               "MBA",
               "Delhi University",
               "HR");

    m1.display();

    return 0;
}

/*
===== Manager Details =====
Employee ID : 301
Name        : Karan
Degree      : MBA
University  : Delhi University
Department  : HR
*/