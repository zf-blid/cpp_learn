#include<iostream>
using namespace std;

int main()
{
    int num0,num1,num2,num3;
    cin>>num1>>num2>>num3;
    num0=(num1>num2)?num1:num2;
    num0=(num0>num3)?num0:num3;
    cout<<"max_number="<<num0<<endl;
    return 0;
}