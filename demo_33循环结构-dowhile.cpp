#include<iostream>
using namespace std;

int main()
{
    //do……while 语句
    //在屏幕中输出0到9这10个数字
    int num=0;
    // do
    // {
    //     /* code */
    //     cout<<num<<endl;
    //     num++;
    // }
    // while (num<10);
    //do……while和while循环区别在于 dowhile会先执行一次循环语句

    while(num<10)
    {
        cout<<num<<endl;
        num++;
    }
    return 0;
}
