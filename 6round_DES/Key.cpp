#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void integerdo(vector<int> &v1, int n)
{
    int i=0;
    while(n>0)
    {
        v1[i]=n%2;
        n/=2;
        i++;
    }
}
int main()
{
    ofstream f1("keynew.txt");
    for(int i=0;i<1048576;i++)
    {
        int v[56] = { -1, -1, 1, -1, -1, 1, -1, -1, -1, 1, 0, -1, 1, -1, 1, 0, -1, -1, -1, 1, 1, -1, -1, 1, 1, -1, 0, -1, 0, 0, 0, 0, 1, 0, 1, -1, 0, 1, 1, 1, 1, 1, 0, 1, -1, 1, 0, -1, 1, 1, 0, 1, -1, 0, 0, 1 };
        vector<int> v1(20,0);
        integerdo(v1,i);
        int k=19;
        for(int j=0;j<56;j++)
        {
            if(v[j]==-1)
            {
                f1<<v1[k--];
            }
            else
            f1<<v[j];
        }
        f1<<endl;
    }
}