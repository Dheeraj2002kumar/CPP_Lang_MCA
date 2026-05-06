#include <iostream>
using namespace std;

class Base{
    public:
    virtual void display(){
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base{
    
}