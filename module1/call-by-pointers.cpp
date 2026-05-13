#include<iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

    cout << "x = " << *x << endl;
    cout << "y = " << *y << endl;
}

int main(){
    int a = 10, b = 20;
    cout << "Before calling swap function" << endl;
    cout << "a = " << a << "\nb = " << b << endl;

    swap(&a, &b); // call by pointers
    cout << "After calling swap function" << endl;
    cout << "a = " << a << "\nb = " << b << endl;

    return 0;
}

/*
----------- output -------------
➜  module1 git:(module-1) ✗ g++ call-by-pointers.cpp -o call-by-pointers
➜  module1 git:(module-1) ✗ ./call-by-pointers 
Before calling swap function
a = 10
b = 20
x = 20
y = 10
After calling swap function
a = 20
b = 10
➜  module1 git:(module-1) ✗ 
*/