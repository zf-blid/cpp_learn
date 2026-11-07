#include<iostream>
#include<string>
using namespace std;

//结构体数组
//1、定义结构体
struct student
{
    //成员数组
    string name;  //姓名
    int age;      //年龄
    int score;    //分数
};
//2、构建结构体数组
//3、给结构体中的数据赋值



int main()
{
    //创建结构体数组并赋值
    struct student stuArray[3]
    {
        {"张三",18,80},
        {"李四",19,66},
        {"王五",20,69}
    };
    //3、给结构体数组中的元素赋值
    stuArray[2].name="赵六";
    stuArray[2].age=80;
    stuArray[2].score=60;

    //4、便历结构体数组
    for(int i=0;i<3;i++)
    {
        cout<<"姓名："<<stuArray[i].name
        <<"年龄："<<stuArray[i].age
        <<"分数："<<stuArray[i].score<<endl;
    }

    return 0;
}