// Write a class to concatenate two strings, overload (+) operator.

#include <iostream>
#include <string>
using namespace std;

class StringConcat {
    string str;

public:
    void getString() {
        cout << "Enter String: ";
        cin >> str;
    }

    // Overloading + operator
    StringConcat operator + (StringConcat s) {
        StringConcat temp;
        temp.str = str + s.str;
        return temp;
    }

    void display() {
        cout << "Concatenated String = " << str << endl;
    }
};

int main() {
    StringConcat s1, s2, s3;

    cout << "Enter First String" << endl;
    s1.getString();

    cout << "Enter Second String" << endl;
    s2.getString();

    s3 = s1 + s2;

    s3.display();

    return 0;
}

/*
Enter First String
Good

Enter Second String
Morning

Concatenated String = GoodMorning
*/