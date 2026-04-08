#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Person{
    private:
        char name[10];
        int age;

    public:
        void setData(){
            strcpy(name, "Dheeraj");
            age=23;
        }
        
        void printData(){
            cout << "The name = " << name << endl;
            cout << "Age = " << age << endl;
        }
};

class Student: public Person{
    private:
        char program[10];
        int enrol;
    
    public:
        void setStudent(){
            strcpy(program, "MCA");
            enrol=4;
        }
        void printStudent(){
            cout << "The enrollment number" << enrol << endl;
            cout << "Program " << program << endl;
        }
}

int main(){
    clrscr();
    Student std;
    std.setData();
    std.setStudent();
    std.printData();
    std.printStudent();

    getch();
    return 0;
}