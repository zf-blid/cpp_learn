#include<iostream>
#include<string>
using namespace std;
int main()
{
    //1、创建bool数据类型
    bool flag=true;//true代表真
    cout<<flag<<endl;
    flag=false;
    cout<<flag<<endl;
    //本质上    1代表真     0代表假

    //2、查看bool类型所占的内存空间//bool类型所占内存空间为1字节
    cout<<"sizeof of bool-"<<sizeof(bool)<<endl;

    return 0;
}