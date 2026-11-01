#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    cout<<setw(10)<<num1<<endl<<setw(10)<<("+"+to_string(num2))<<endl<<setw(10)<<(num1+num2);
    return 0;
}