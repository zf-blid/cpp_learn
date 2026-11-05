#include "swap_demo55.h"
//函数的定义
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout <<"a ="<< a << endl;cout <<"b ="<< b << endl;
}