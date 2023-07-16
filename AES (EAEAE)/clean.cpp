#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream f1("out.txt");
    ofstream f2("output.txt");
    string s;
    while(getline(f1,s))
    {
        if(s[0]=='\t'&&s[1]=='\t')
        f2<<s.substr(2,s.length()-2)<<endl;
    }
}