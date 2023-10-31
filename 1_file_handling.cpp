#include<iostream>
#include<fstream>

using namespace std;

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase
*/

/*
In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1. Using the constructor
2. Using the member function open() of the class
*/

int main()
{   
    string st = "Hi I am professor";
    string st2;

    // Opening files using constructor and writing it

    ofstream out("sample1.txt"); // write operation
    out<<st;

    // Opening files using constructor and reading it

    ifstream in("sample2.txt"); // read operation
    // in>>st2;

    getline(in, st2);
    getline(in, st2);
    getline(in, st2);
    getline(in, st2);
    getline(in, st2);

    cout<<st2;

    return 0;
}