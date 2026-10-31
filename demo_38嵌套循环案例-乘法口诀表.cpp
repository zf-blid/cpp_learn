#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    for(int i=1;i<10;i++)//行数
    {

        for(int j=1;i>=j&&j<10;j++)//例数
        {
            cout<<j<<"*"<<i<<"="<<j*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}