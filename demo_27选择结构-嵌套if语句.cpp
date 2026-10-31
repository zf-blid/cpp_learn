#include<iostream>
using namespace std;

int main()
{
    /*
    提示用户输入一个高考考试分数，根据分数做如下判断
    分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科
    在一本分数中，如果大于700分，考入北大；大于650分，考入清华；大于600考入人大*/

    //1、提示输入高考分数
    int score=0;
    cout<<"请输入您的高考分数"<<endl;
    cin>>score;
    //2、显示高考分数
    cout<<"您输入的高考分数为："<<score<<endl;

    //3、判断
    if(score>600)
    {
        cout<<"恭喜您考上了一本"<<endl;

        if(score>700)
        {
            cout<<"恭喜您已经考上了北京大学"<<endl;
        }
        else if(score>650)
        {
            cout<<"恭喜您已经考上了清华大学"<<endl;
        }
        else
        {
            cout<<"恭喜您考上了中国人名大学"<<endl;
        }
    }
    else if(score>500)
    {
        cout<<"恭喜您考上了二本"<<endl;
    }
    else if(score>400)
    {
        cout<<"恭喜您考上了三本"<<endl;
    }
    
    return 0;
}