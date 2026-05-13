/*
WAP to maintain the student record which contains Roll number, Name, Marks1, Marks2, Marks3 as data member and getdata(), display() and setdata() as member functions.
*/

#include <iostream>
using namespace std;

class Student {
    int rollno;
    char name[50];
    float marks1, marks2, marks3;

public:
    void getdata() {
        cout << "Enter Roll Number: ";
        cin >> rollno;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks in 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    void setdata(int r, const char n[], float m1, float m2, float m3) {
        rollno = r;
        
        int i = 0;
        while(n[i] != '\0') {
            name[i] = n[i];
            i++;
        }
        name[i] = '\0';

        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
    }

    void display() {
        cout << "\nStudent Details" << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks1: " << marks1 << endl;
        cout << "Marks2: " << marks2 << endl;
        cout << "Marks3: " << marks3 << endl;
    }
};

int main() {
    Student s;

    s.getdata();
    s.display();

    return 0;
}