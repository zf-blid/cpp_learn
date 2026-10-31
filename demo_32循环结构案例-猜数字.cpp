#include<iostream>
using namespace std;
#include<ctime>//time系统头文件包含
int main()
{
    //添加随机数种子    作用利用当前系统时间生成随机数，防止每次随机数都一样
    srand((unsigned int)time(NULL));
    //1、系统生成一个随机数
    int num=rand()%100+1;//rand()%100+1 生成0+1～99+1   随机数
    //cout<<num<<endl;
    //2、玩家进行猜测
    int val=0;//玩家输入的数据
    int Max_Time=5,count=0;
    cout<<"猜数字游戏开始！你有"<<Max_Time<<"次机会";
    while(Max_Time>count)
    {
        cout<<"请输入的数字（1-100）："<<endl;
        cin>>val;

        if(val>num)
        {
            cout<<"猜测过大"<<endl;
        }
        else if(val<num)
        {
            cout<<"猜测过小"<<endl;
        }
        else
        {
            cout<<"恭喜你猜对了"<<endl;
            break;//在循环中可以利用break关键字退出循环
        }
        count++;
        cout<<"你还剩"<<Max_Time-count<<"次机会"<<endl;
    }
    while(Max_Time<=count)
    {
        cout<<"很遗憾，"<<Max_Time<<"机会都用完了!正确答案是"<<num<<endl;break;

    }
    //3、判断玩家的猜测

    // if(val>num)
    // {
    //     cout<<"猜测过大"<<endl;
    // }
    // else if(val<num)
    // {
    //     cout<<"猜测过小"<<endl;
    // }
    // else
    // {
    //     cout<<"恭喜你猜对了"<<endl;
    // }
    //猜对  推出游戏
    //猜错  提示猜的结果    过大或者过小    重新返回第二步
    return 0;
}