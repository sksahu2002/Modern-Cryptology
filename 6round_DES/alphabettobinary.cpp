#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream f1("output_random.txt");
    ofstream f2("output1.txt");
    string s;
    while(getline(f1,s))
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='f')
            f2<<"0000";
            else if(s[i]=='g')
            f2<<"0001";
            else if(s[i]=='h')
            f2<<"0010";
            else if(s[i]=='i')
            f2<<"0011";
            else if(s[i]=='j')
            f2<<"0100";
            else if(s[i]=='k')
            f2<<"0101";
            else if(s[i]=='l')
            f2<<"0110";
            else if(s[i]=='m')
            f2<<"0111";
            else if(s[i]=='n')
            f2<<"1000";
            else if(s[i]=='o')
            f2<<"1001";
            else if(s[i]=='p')
            f2<<"1010";
            else if(s[i]=='q')
            f2<<"1011";
            else if(s[i]=='r')
            f2<<"1100";
            else if(s[i]=='s')
            f2<<"1101";
            else if(s[i]=='t')
            f2<<"1110";
            else if(s[i]=='u')
            f2<<"1111";
        }
        f2<<endl;
    }
}