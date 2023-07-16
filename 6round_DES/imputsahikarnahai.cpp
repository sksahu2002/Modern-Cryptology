#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream f1("input_random.txt");
    ofstream f2("input.txt");
    f2<<"echo \"zoobicles zoobicles_123 4 read";
    string s;
    while(getline(f1,s))
        f2<<s<<" c ";
    f2<<"back exit\" sshpass -p \"cs641\" ssh student@172.27.26.188";
}