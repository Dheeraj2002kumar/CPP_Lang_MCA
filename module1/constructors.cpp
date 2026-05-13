#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
    int roll;
    char name[30];
    int marks1, marks2;

public:
    Student();              // default constructor
    Student(int, int);      // parameterized constructor
    ~Student();             // destructor

    int add(int, int);
    int add();
};

int Student::add()
{
    return (marks1 + marks2);
}

int Student::add(int a, int b)
{
    marks1 = a;
    marks2 = b;
    return (marks1 + marks2);
}

// Default constructor
Student::Student()
{
    roll = 1;
    strcpy(name, "amity_student");

    cout << "The constructor is invoked" << endl;
    cout << "Roll = " << roll << endl;
    cout << "Name = " << name << endl;
}

// Destructor
Student::~Student()
{
    cout << "\nDestructor invoked!" << endl;
}

// Parameterized constructor
Student::Student(int x, int y)
{
    cout << "\nThe Parameterized constructor is invoked" << endl;

    marks1 = x;
    marks2 = y;

    cout << "The marks are =" << endl;
    cout << marks1 << endl;
    cout << marks2 << endl;
}

int main()
{
    Student obj(60, 80);

    int total;

    cout << "\nThe total after parameterized constructor is called" << endl;
    cout << obj.add() << endl;

    total = obj.add(67, 87);

    cout << "\nThe total = " << total << endl;

    return 0;
}

/*
------------- output ------------
➜  module1 git:(module-1) ✗ g++ constructors.cpp -o constructors
➜  module1 git:(module-1) ✗ ./constructors 

The Parameterized constructor is invoked
The marks are =
60
80

The total after parameterized constructor is called
140

The total = 154

Destructor invoked!
➜  module1 git:(module-1) ✗ 
*/