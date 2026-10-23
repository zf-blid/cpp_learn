#include<iostream>//引入iostream头文件
#include<cstdlib>//引入cstdlib头文件
#include<cstdlib>
using namespace std;
/*
author：张锋
createdate：2026-10-16
updatedate：2026-10-16
version：1.0
description:这是一个简单的C++程序，用于学习C++
*/

int main()//函数头：int表示返回值为整数类型，main为函数名，（）表示无函数
{
    //变量的定义 
    //语法：数据类型 变量=初始值
    // int a=10,b=80;
    // std::cout<<"a="<<a<<std::endl;
    // std::cout<<"b="<<b<<std::endl;
    // std::cout<<"Hello, World!"<<std::endl;
    // cout<<"Hello, C++!"<<std::endl;
    // system("pause");
    int a=0;
    cout<<"请给整型变量a赋值："<<endl;
    cin>>a;
    cout<<"整型变量a="<<a<<endl;

    //2、浮点型
    float f=3.14f;
    cout<<"请给浮点型变量f赋值："<<endl;
    cin>>f;
    cout<<"浮点型变量f="<<f<<endl;
    return 0;
}