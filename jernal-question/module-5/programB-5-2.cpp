// WAP to read data from keyboard and write it to a file. After writing is completed, the file is closed. The program again opens the same file and reads it.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string data;

    // Writing to File
    ofstream fout("sample.txt");

    cout << "Enter data to write into file : ";
    getline(cin, data);

    fout << data;

    fout.close();

    cout << "\nData written to file successfully.";

    // Reading from File
    ifstream fin("sample.txt");

    string readData;

    getline(fin, readData);

    cout << "\n\nData read from file : ";
    cout << readData << endl;

    fin.close();

    return 0;
}

/*
Enter data to write into file : Welcome to C++ File Handling

Data written to file successfully.

Data read from file : Welcome to C++ File Handling
*/