#include<iostream>
using namespace std;

int add(int num1,int num2)//必须提前申明
{//加法函数，实现两个整数相加，并且将相加的结果进行返回
    int sum=num1+num2;
    return sum;
}
int main()
{
    // 函数的定义一般主要有5个步骤：
    // 1、返回值类型
    // 2、函数名
    // 3、参数表列
    // 4、函数体语句
    // 5、return表达式

    int a,b;
    a=89;b=89;
    int ret=add(a,b);
    cout<<ret<<endl;
}