// Create a class Employee. Derive 3 classes from this class namely Programmer, Analyst and Project Leader. Take suitable attributes and operations. Write a C++ program to implement this using array of pointers

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Employee {
protected:
    int empId;
    string name;
    float salary;

public:
    Employee(int id, string n, float s) {
        empId = id;
        name = n;
        salary = s;
    }

    virtual void display() {
        cout << "\nEmployee ID : " << empId;
        cout << "\nName        : " << name;
        cout << "\nSalary      : " << salary << endl;
    }

    virtual ~Employee() {}
};

// Derived Class Programmer
class Programmer : public Employee {
    string language;

public:
    Programmer(int id, string n, float s, string lang)
        : Employee(id, n, s) {
        language = lang;
    }

    void display() override {
        cout << "\n----- Programmer -----";
        Employee::display();
        cout << "Language    : " << language << endl;
    }
};

// Derived Class Analyst
class Analyst : public Employee {
    string domain;

public:
    Analyst(int id, string n, float s, string d)
        : Employee(id, n, s) {
        domain = d;
    }

    void display() override {
        cout << "\n----- Analyst -----";
        Employee::display();
        cout << "Domain      : " << domain << endl;
    }
};

// Derived Class Project Leader
class ProjectLeader : public Employee {
    int teamSize;

public:
    ProjectLeader(int id, string n, float s, int t)
        : Employee(id, n, s) {
        teamSize = t;
    }

    void display() override {
        cout << "\n----- Project Leader -----";
        Employee::display();
        cout << "Team Size   : " << teamSize << endl;
    }
};

int main() {

    // Array of Base Class Pointers
    Employee* emp[3];

    emp[0] = new Programmer(101, "Rahul", 50000, "C++");
    emp[1] = new Analyst(102, "Sneha", 60000, "Data Analysis");
    emp[2] = new ProjectLeader(103, "Amit", 80000, 10);

    for (int i = 0; i < 3; i++) {
        emp[i]->display();
    }

    // Free Memory
    for (int i = 0; i < 3; i++) {
        delete emp[i];
    }

    return 0;
}

/*
----- Programmer -----
Employee ID : 101
Name        : Rahul
Salary      : 50000
Language    : C++

----- Analyst -----
Employee ID : 102
Name        : Sneha
Salary      : 60000
Domain      : Data Analysis

----- Project Leader -----
Employee ID : 103
Name        : Amit
Salary      : 80000
Team Size   : 10

*/