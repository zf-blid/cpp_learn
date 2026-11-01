#include<iostream>
using namespace std;
int main()
{
    //一维数组名称用途：1. 可以统计整个数组在内存中的长度
    int arr[5]={1,2,3,4,5};
    cout<<"整个数组占用的内存空间为："<<sizeof(arr)<<endl;
    cout<<"每个元素占用的内存空间为："<<sizeof(arr[0])<<endl;
    cout<<"数组中的元素的个数"<<sizeof(arr)/sizeof(arr[0])<<endl;
    
    //2. 可以获取数组在内存中的首地址
    cout<<"数组的首地址为："<<arr<<endl;
    cout<<"数组中第一个元素地址为："<<(int)arr[0]<<endl;
    cout<<"数组中第二个元素地址为："<<(int)arr[1]<<endl;
    //数组名是常量，不可以进行赋值操作//arr=100;
    //sizeof(arr)统计整个数组的长度
    
    //

    return 0;
}