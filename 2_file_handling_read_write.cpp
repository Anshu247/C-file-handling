#include<iostream>
#include<fstream>

using namespace std;

/*
Three Useful Classes

1. fstreambase
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase

above three classes derived from header file called, fstream
*/

int main()
{
    // Connecting our file with hout stream
    ofstream hout("sample3.txt");

    // Creating a name string and filling it with the string entered by the user
    cout<<"Enter your name:- ";

    string name;
    cin>>name;

    // Writing a string to the file
    hout<<name + " is my name";
    hout.close();

    ifstream hin("sample3.txt");

    string content;
    hin>>content;

    cout<<"The content of this file is:- "<<content;
    hin.close();

    return 0;
}