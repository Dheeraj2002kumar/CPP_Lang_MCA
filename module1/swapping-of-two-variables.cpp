// Write a program for swapping the values of two variables.
#include<iostream>
using namespace std;

int main(){
    int m, n;
    cout << "Enter two numbers" << endl;
    cin >> m;
    cin >> n;

    cout << "Values before swapping" << endl;
    cout << "m = " << m << "\nn = " << n << endl;

    int temp = m;
    m = n; 
    n = temp;

    cout << "After swapping the values are " << endl;
    cout << "m = " << m << "\nn = " << n << endl;

    return 0;
}

/*
---------- output -------------
➜  module1 git:(module-1) ✗ g++ swapping-of-two-variables.cpp -o swapping-of-two-variables    
➜  module1 git:(module-1) ✗ ./swapping-of-two-variables 
Enter two numbers
5
6
Values before swapping
m = 5
n = 6
After swapping the values are 
m = 6
n = 5
➜  module1 git:(module-1) ✗ 

*/