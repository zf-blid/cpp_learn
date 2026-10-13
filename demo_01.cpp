#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
#define Day 7//宏常量

using namespace std;
int main()
{
    //Day=17;//常量不能改
    //int month=12;
    const int month=12;
    cout <<"一年总共有："<<month<<"个月份"<<endl;
    cout<<"hello word"<<endl;
    cout<<"一周总共有："<<Day<<"天"<<endl;
    //system("pause");//windows系统的cmd专用
    return 0;
}