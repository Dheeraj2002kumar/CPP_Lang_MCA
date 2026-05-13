// WAP to define nested class ‘student_info’ which contains data members such as name, roll number and sex and also consists of one more class ‘date’ ,whose data members are day, month and year. The data is to be read from the keyboard & displayed on the screen.

#include <iostream>
#include <string>
using namespace std;

class student_info {
private:
    string name;
    int rollno;
    char sex;

    // Nested class
    class date {
    public:
        int day, month, year;

        void getDate() {
            cout << "Enter Day: ";
            cin >> day;

            cout << "Enter Month: ";
            cin >> month;

            cout << "Enter Year: ";
            cin >> year;
        }

        void displayDate() {
            cout << day << "/" << month << "/" << year << endl;
        }
    };

    date dob;

public:
    void getData() {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollno;

        cout << "Enter Sex (M/F): ";
        cin >> sex;

        cout << "\nEnter Date of Birth:" << endl;
        dob.getDate();
    }

    void display() {
        cout << "\n--- Student Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Sex: " << sex << endl;

        cout << "Date of Birth: ";
        dob.displayDate();
    }
};

int main() {
    student_info s;

    s.getData();
    s.display();

    return 0;
}

/*
Enter Name: Rahul
Enter Roll Number: 101
Enter Sex (M/F): M

Enter Date of Birth:
Enter Day: 15
Enter Month: 8
Enter Year: 2005

--- Student Information ---
Name: Rahul
Roll Number: 101
Sex: M
Date of Birth: 15/8/2005
*/