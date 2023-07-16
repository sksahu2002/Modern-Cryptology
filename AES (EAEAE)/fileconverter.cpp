#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("output.txt");
    ofstream o ("goodoutput.txt");
    string s;
    for(int i=0; i<1024; i++)
    {
        getline(f,s);
        if(i%128==0)    
        {
            o<<"\n"<<s<<" ";
        }
        else
        {
            o<<s<<" ";
        }
    }
}