// Write a class string to compare two strings, overload (= =) operator.

#include <iostream>
#include <string>
using namespace std;

class StringCompare {
    string str;

public:
    void getString() {
        cout << "Enter String: ";
        cin >> str;
    }

    // Overloading == operator
    bool operator == (StringCompare s) {
        return (str == s.str);
    }
};

int main() {
    StringCompare s1, s2;

    cout << "Enter First String" << endl;
    s1.getString();

    cout << "Enter Second String" << endl;
    s2.getString();

    if(s1 == s2)
        cout << "Both strings are equal." << endl;
    else
        cout << "Strings are not equal." << endl;

    return 0;
}

/*
Enter First String
Hello

Enter Second String
Hello

Both strings are equal.
*/