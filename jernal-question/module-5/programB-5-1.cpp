// Create two classes namely Employee and Qualification. Using multiple inheritance derive a class Scientist. Take suitable attributes and operations. Write a C++ program to implement this hierarchy.

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

// Derived Class Scientist
class Scientist : public Employee, public Qualification {
    string researchField;

public:
    Scientist(int id, string n,
              string d, string u,
              string rf)
        : Employee(id, n), Qualification(d, u) {

        researchField = rf;
    }

    void display() {
        cout << "\n===== Scientist Details =====";
        showEmployee();
        showQualification();
        cout << "\nResearch    : " << researchField << endl;
    }
};

int main() {

    Scientist s1(201, "Dr. Mehta",
                 "PhD Physics",
                 "IIT Bombay",
                 "Quantum Mechanics");

    s1.display();

    return 0;
}

/*
===== Scientist Details =====
Employee ID : 201
Name        : Dr. Mehta
Degree      : PhD Physics
University  : IIT Bombay
Research    : Quantum Mechanics
*/