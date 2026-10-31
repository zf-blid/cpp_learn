#include<iostream>
#include<cmath>//引入pow的头文件
using namespace std;
int main()
{
    //1、将所有的三位数进行输出（100～999）

    //2、在所有三位数中找到水仙花数
    //获取个位      153%10=3
    //获取十位      153/10=15 15%10=5
    //获取百位      153/100=1
    //判断 个位^3 十位^3 百位^3=本身
    
    //1、打印所有的三位数
    int num=100;
    do
    {
        int a=0,b=0,c=0;
        a=num%10;//获取个位数字
        b=num/10%10;//获取十位数字
        c=num/100;//获取百位数字
        if(pow(a,3)+pow(b,3)+pow(c,3)==num)
        {
            cout<<num<<endl;
            //num++;
        }
        num++;
    }while(num<1000);
    return 0;
}