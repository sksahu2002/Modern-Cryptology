#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    int ex[8][6] = {
    32, 1, 2, 3, 4, 5,
    4, 5,6, 7, 8, 9,
    8, 9, 10, 11, 12, 13,
    12, 13, 14, 15, 16, 17,
    16, 17, 18, 19, 20, 21,
    20, 21, 22, 23, 24, 25,
    24, 25, 26, 27, 28, 29,
    28, 29, 30, 31, 32, 1
    };
    ifstream ifile;
    ofstream ofile;
    ofile.open("gamma.txt");
    ifile.open("reversedfinalpermutation.txt");
    string s;
    while(getline(ifile,s))
    {
        int k=0,l;
        int a[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            a[i][j]=s[k++]-48;
        }
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<6;j++)
            {
                k=(ex[i][j]-1)/8;
                l=(ex[i][j]-1)%8;
                ofile<<a[k][l];
            }
        }
        ofile<<endl;
    }
}