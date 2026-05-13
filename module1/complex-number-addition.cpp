#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    Complex(int x, int y){
        a = x;
        b = y;
    }

    void display(){
        cout << endl << a << "i + " << b << endl;
    }

    Complex add(Complex p, Complex q){
        p.a = p.a + q.a;
        p.b = p.b + q.b;
        return(p);
    }
};

int main(){
    Complex obj1(5, 8);
    Complex obj2(2, 3);

    cout << "The first complex number is" << endl;
    obj1.display();
    cout << endl;
    obj2.display();

    obj1 = obj1.add(obj1, obj2);
    cout << "\n After summation" << endl;
    obj1.display();

    return 0;
}

/*
--------------- output --------------
➜  module1 git:(module-1) ✗ g++ complex-number-addition.cpp -o complex-number-addition    
➜  module1 git:(module-1) ✗ ./complex-number-addition 
The first complex number is

5i + 8


2i + 3

 After summation

7i + 11
➜  module1 git:(module-1) ✗ 
*/