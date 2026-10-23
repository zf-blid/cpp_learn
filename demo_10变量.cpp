#include<iostream>
using namespace std;

int main()
{
    //1、单精度 float
    //2、双变量 double

    float f1=3.14f;
    cout<<"f1="<<f1<<endl;
    double d1=3.141592653;
    cout<<"d1="<<d1<<endl;
    //统计float和double占用的内存空间
    cout<<"float占用的内存空间为："<<sizeof(f1)<<endl;//4字节
    cout<<"double占用的内存空间为："<<sizeof(d1)<<endl;//8字节
    //科学计数法
    float f2=3e2;
    cout<<"f2="<<f2<<endl;
    float f3=3e-2;
    cout<<"f3="<<f3<<endl;
    return 0;
}