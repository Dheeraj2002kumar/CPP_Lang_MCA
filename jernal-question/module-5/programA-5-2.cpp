// WAP to create a class Student containing Name & Class as parameters. Create another class Marks which inherits Student class taking own data members as mark1 & mark2 and show result.

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Student {
protected:
    string name;
    string studentClass;

public:
    void getStudentData() {
        cout << "Enter Student Name : ";
        cin >> name;

        cout << "Enter Class : ";
        cin >> studentClass;
    }
};

// Derived Class
class Marks : public Student {
private:
    int mark1, mark2, total;
    float percentage;

public:
    void getMarks() {
        cout << "Enter Mark 1 : ";
        cin >> mark1;

        cout << "Enter Mark 2 : ";
        cin >> mark2;
    }

    void calculate() {
        total = mark1 + mark2;
        percentage = total / 2.0;
    }

    void display() {
        cout << "\n===== Student Result =====";
        cout << "\nName        : " << name;
        cout << "\nClass       : " << studentClass;
        cout << "\nMark 1      : " << mark1;
        cout << "\nMark 2      : " << mark2;
        cout << "\nTotal       : " << total;
        cout << "\nPercentage  : " << percentage << "%" << endl;
    }
};

int main() {

    Marks m;

    m.getStudentData();
    m.getMarks();

    m.calculate();
    m.display();

    return 0;
}

/*
Enter Student Name : Rahul
Enter Class : SYBCA
Enter Mark 1 : 78
Enter Mark 2 : 82

===== Student Result =====
Name        : Rahul
Class       : SYBCA
Mark 1      : 78
Mark 2      : 82
Total       : 160
Percentage  : 80%
*/