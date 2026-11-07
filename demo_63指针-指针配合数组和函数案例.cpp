#include<iostream>
using namespace std;

//冒泡排序函数
void bubbleSort(int* arr,int len)
{
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void printfArray(int* arr,int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    //1、先创建数组
    int arr[10]={4,3,6,9,1,2,10,8,7,5};
    int len=sizeof(arr)/sizeof(arr[0]);

    //2、创建函数，实现冒泡排列
    bubbleSort(arr,len);
    //3、打印排序后的数组
    printfArray(arr,len);



    return 0;
}