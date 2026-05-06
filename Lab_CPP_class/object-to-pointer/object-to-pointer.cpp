#include <iostream>
using namespace std;

class A{
    int x, y;
public:
    virtual int add(){
        x = 10;
        y = 20;
        return (x + y);
    }
};

class B : public A{
public:
    int add() override{
        cout << "This is from class B" << endl;
        return 0;
    }
};

int main(){
    A *obj;
    B objb;
    obj = &objb;

    int sum = obj->add();
    cout << "Sum = " << sum << endl;

    A dummy;
    obj = &dummy;
    cout << "Sum = " << obj->add() << endl;

    return 0;
}