#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample4.txt");

    out<<"Rolls Royce"<<endl;
    out<<"GTR"<<endl;
    out<<"Supra"<<endl;
    out<<"Bugatti"<<endl;
    out<<"Lamborghini"<<endl;

    out.close();

    ifstream in;
    string st, st2;

    in.open("sample4.txt");
    // in>>st>>st2;

    // cout<<st<<" "<<st2;

    while(in.eof()==0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();

    return 0;
}