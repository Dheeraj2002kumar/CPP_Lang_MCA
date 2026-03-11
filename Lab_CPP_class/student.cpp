#include<iostream>
#include<string.h>
using namespace std;

class Student{
    private: 
        int roll;
        char name[30];
        int marks1, marks2;

    public:
        Student();
        ~Student();
        Student(int x, int y);
        int add(int, int);
        int add();
        
};

int Student::add(){
    return (marks1 + marks2);
}

int Student::add(int a, int b){  // :: scope resolution operator
    marks1 = a;
    marks2 = b;
    return (marks1 + marks2);
}

Student::Student(){  // default constructor
            roll = 1;
            strcpy(name, "amity_student");
            cout << "The constructor is invoked" << endl;
            cout << "Roll = " << roll << endl << "Name = " << name << endl; 
        }

Student::~Student(){  // destructor
    cout << "\n \n Destructor invoked!";
}

Student::Student(int x, int y){

    cout << "The parameterized constructor id invoked" << endl;
    marks1 = x;
    marks2 = y;

    cout << "The marks are = \n" << marks1 << endl << marks2 << endl;
}

int main(){
    Student obj;
    int total;
    total = obj.add(54, 55);
    cout << "\nThe Total = " << total << endl;
    return 0;
}






// --------------- inline constructor ---------------------------

// #include<iostream>
// #include<string.h>
// using namespace std;

// class Student{
//     private: 
//         int roll;
//         char name[30];
//         int marks1, marks2;

//     public:
//         Student(){  // default constructor
//             roll = 1;
//             strcpy(name, "amity_student");
//             cout << "The constructor is invoked" << endl;
//             cout << "Roll = " << roll << endl << "Name = " << name << endl; 
//         }

//         ~Student(){  // destructor
//             cout << "\n \n Destructor invoked!";
//         }
// };

// int main(){
//     Student obj;
//     return 0;
// }