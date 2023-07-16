#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream f("inputs.txt");
    ofstream o ("goodinput.txt");
    string s;
    o<<"echo \" zoobicles zoobilces_123 5 go wave dive go read ";
    while(getline(f,s))
    {
        o<<s<<" c ";
    }
    o<<"back exit \" | sshpass -p \"cs641\" ssh student@172.27.26.188";
}