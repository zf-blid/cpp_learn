#include<iostream>
using namespace std;

//函数的声明，声明可以有多次，定义只能有一个
//比较函数，实现两个整型数字进行比较，返回较大的值

//定义
int max(int a,int b); 

//提前告诉编译器函数的存在，可以利用函数的存在
int main()
{
    int a=10;int b=20;
    cout<<max(a,b)<<endl;
}

int max(int a,int b)
{
    return a>b?a:b;
}