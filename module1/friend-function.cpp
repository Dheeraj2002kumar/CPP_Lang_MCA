#include <iostream>
#include<cstring>
using namespace std;

class B;

class Student{
    private:
        int marks1;
        int marks2;
        int total;
        char name[10];

    public:
        friend int main();  // friend function
        friend class B; // friend class

        void read();
        void display();
};

class B{
    public: 
        void getSData(Student s1){
            cout << endl << "The Student name = " << s1.name << endl;
        }
};

void Student::read(){
    cout << endl << "Enter student name" << endl;
    cin >> name;

    cout << "Enter marks of subject 1" << endl;
    cin >> marks1;

    cout << "Enter marks of subject 2" << endl;
    cin >> marks2;

    total = marks1 + marks2;
}

void Student::display(){
    cout << endl << "Student Name = " << name;
    cout << endl << "\tMarks 1 = " << marks1;
    cout << endl << "\tMarks 2 = " << marks2;
    cout << endl << "\tTotal marks = " << total << endl;
}

int main(){
    Student obj;

    // allowed because main is friend
    obj.marks1 = 50;

    cout << endl << "The marks are " << obj.marks1 << endl;

    obj.read();
    obj.display();

    cout << endl << "Calling class b function" << endl;

    B Objb;
    Objb.getSData(obj);

    return 0;
}


/*
----------- output -----------

➜  module1 git:(module-1) ✗ g++ friend-function.cpp -o friend-function
➜  module1 git:(module-1) ✗ ./friend-function                         

The marks are 50

Enter student name
Dheeraj
Enter marks of subject 1
99
Enter marks of subject 2
98

Student Name = Dheeraj
        Marks 1 = 99
        Marks 2 = 98
        Total marks = 197

Calling class b function

The Student name = Dheeraj
➜  module1 git:(module-1) ✗ 
*/