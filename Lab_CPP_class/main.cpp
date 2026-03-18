#include <iostream>
#include <stdlib.h>  // atoi (convert string to integer)
using namespace std;

int main(int argc, char* argv[]){
    cout << "Hello world" << endl;

    cout << "\n the number of arguments are = " << argc << endl;

    int sum = 0;
    for (int i = 0; i < argc; i++){
        cout << "\n The argument [" << i << "]" << argv[i] << endl;
        sum += atoi(argv[i]);
    }

    cout << "\n The sum of all number passed on argument to main = " << sum << endl;
    return 0;
}

// --------------------- output ------------------
/*
@Dheeraj2002kumar ➜ /workspaces/CPP_Lang_MCA/Lab_CPP_class (main) $ g++ main.cpp -o main
@Dheeraj2002kumar ➜ /workspaces/CPP_Lang_MCA/Lab_CPP_class (main) $ ./main hello world
Hello world

 the number of arguments are = 3

 The argument [0]./main

 The argument [1]hello

 The argument [2]world

 The sum of all number passed on argument to main = 0
@Dheeraj2002kumar ➜ /workspaces/CPP_Lang_MCA/Lab_CPP_class (main) $ 
*/