#include<iostream>
#include<string>
using namespace std;

int main()
{
    //选择结构 -多行if语句
    //1、输入高考分数   
    int score=0;
    string name;

    //2、提示用户输入的分数
    cout<<"请输入你的姓名";
    cin>>name;
    cout<<"请输入你的高考分数："<<endl;
    cin>>score;

   
    cout<<"您的姓名为："<<name<<"和高考分数为："<<score<<endl;

    //3、判断   如果大于600,打印考上一本，否则打印未考上一本
    if(score>600)
    {
        cout<<"恭喜"<<name<<"考上了一本大学！"<<endl;
    }
    else if(score>=720)
    {
        cout<<"请重新输入您的高考分数"<<endl;
    }
    else if(score<=400)
    {
        cout<<"小生仍需加油！";
    }
    else
    {
        cout<<"很棒！恭喜你考上了大学！"<<endl;
    }
    return 0;
}