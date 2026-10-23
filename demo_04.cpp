#include<iostream>
using namespace std;
int main()
{
    int a,b,h;
    double s;
    cout<<"请输入梯形的上底、下底和高："<<endl;
    cin>>a>>b>>h;
    s=(a+b)*h/2.0;
    cout<<"梯形的面积"<<s<<endl;
    return 0;
}