#include<iostream>
using namespace std;

int main()
{
    //选择结构  单行if语句
    //用户输入分数，如果分数大于600,视为考上一本大学，在屏幕上输出

    //1、用户输入分数
    int score=0;
    cout<<"请输入一个分数："<<endl;


    //2、打印用户输入的分数
    cout<<"你的高考分数为："<<score<<endl;

    //3、判断是否大于600,如果大于600,那么输出
    if(score>600)//注意事项：if条件后面不要加分号
    {
        cout<<"恭喜你考上了一本大学"<<endl;
    }

    else
    {
        cout<<"很遗憾你没能考上一本";
    }
    return 0;
}