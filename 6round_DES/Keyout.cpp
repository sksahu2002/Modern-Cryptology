#include <iostream>
#include <fstream>
#include <string>
using namespace std;
    int give(string str)
    {
        int k=0,p=1;
        for(int i=str.length()-1; i>str.length()-5; i--)
        {
            k=k+(str[i]-48)*p;
            p*=10;
        }
        return k;
    }
int main()
{
    fstream file;
    file.open("key.txt");
    string s;
     int max_1=0, max_2=0, sum=0, count=0;
     int i=0;
    while(getline(file,s))
    {
        i++;
        if(i%65==0)
        {
            cout<<max_1<<" "<<max_2<<" "<<sum/64<<" "<<count<<" "<<max_1-max_2<<endl;
            max_1=0;
            max_2=0;
            sum=0;
            continue;
        }
        int n=give(s);
        if(n>max_1)
        {   max_2=max_1;
            max_1=n;
            count =i;
        }
        if(n>max_2 && n<max_1)
        max_2=n;
        sum+=n;
    }
}