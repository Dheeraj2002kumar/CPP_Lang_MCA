#include <iostream>
#include <string>   
#include <vector>

using namespace std;

class Student {
private: 
    int marks1, marks2;
    string name;

public:
    
    Student(string n, int m1, int m2) {
        name = n;
        marks1 = m1;
        marks2 = m2;
    }

    
    void Student_info() const {
        cout << "Student name: " << name << " | Total marks: " << marks1 + marks2 << endl;
    }
};

int main() {
    
    vector<Student> students = {
        Student("Dheeraj", 85, 90),
        Student("Niraj", 78, 82),
        Student("Saurabh", 92, 88),
        Student("Sujal", 91, 88),
        Student("Suraj", 92, 88),
        Student("Ankit", 93, 88)
    };

   
    for (const auto& s : students) {
        s.Student_info();
    }
    
    return 0;
}








// -----------------------------------------------------

// #include<iostream>
// #include<string.h>
// #include<vector>
// using namespace std;

// class Student{
//     private: 
//         int roll;
//         // char name[30];
//         int marks1, marks2;
//         string name;


//     public:
//         Student();
//         ~Student();
//         Student(int x, int y);
//         int add(int, int);
//         void Strudent_info() const;
//         int add();

//         Student(string n, int m1, int m2){
//             name = n;
//             marks1 = m1;
//             marks2 = m2;
//         }
        
        
// };

// void Student::Strudent_info() const {

//     cout << "Student name: " << name << " " << "Student marks is: " << marks1+marks2 << endl;
// }

// int Student::add(){
//     return (marks1 + marks2);
// }

// int Student::add(int a, int b){  // :: scope resolution operator
//     marks1 = a;
//     marks2 = b;
//     return (marks1 + marks2);
// }

// Student::Student(){  // default constructor
//             roll = 1;
//             strcpy(name, "amity_student");
//             cout << "The constructor is invoked" << endl;
//             cout << "Roll = " << roll << endl << "Name = " << name << endl; 
//         }

// Student::~Student(){  // destructor
//     cout << "\n \n Destructor invoked!";
// }

// Student::Student(int x, int y){

//     cout << "The parameterized constructor id invoked" << endl;
//     marks1 = x;
//     marks2 = y;

//     cout << "The marks are = \n" << marks1 << endl << marks2 << endl;
// }

// int main(){
//     // Student obj(68, 54);
//     // int total;

    
//     // total = obj.add(54, 55);
//     // cout << "\nThe Total = " << total << endl;

//     Student vector<Student> student = {
//         student("Alice", 85, 90),
//         student("Bob", 78, 82),
//         student("Charlie", 92, 88)
//     };

//     for(const auto& s : student){
//         s.Strudent_info();
//     }
    
//     return 0;
// }






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