#include <fstream>
#include <iostream>
using namespace std;

int main(){
    fstream fs1("even.txt", ios::app);
    fstream fs2("odd.txt", ios::app);

    for (int num = 0; num <= 10; num++){
        if (num%2 == 0){
            fs1 << num;
        } else{
            fs2 << num;
        }
    }

    fs1.close();
    fs2.close();

    fstream even;
    fstream odd;

    even.open("even.txt", ios::in);
    odd.open("odd.txt", ios::in);

    int a;
    cout << "Even file content" << endl;
    while(!even.eof()){
        even >> a;
        cout << a << endl;
    }

    cout << "The number are written in the file" << endl;

    return 0;
}