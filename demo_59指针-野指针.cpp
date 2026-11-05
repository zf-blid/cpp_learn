#include<iostream>
using namespace std;
int main()
{
    //野指针
    //访问野指针报错
    int *p=(int *)0x1100;
    cout<<*p<<endl;

    //空指针和野指针都不是我们申请的空间，因此不能访问

    return 0;
}