#include<iostream>
#include<string>
using namespace std;

//结构体指针
struct student
{
    string name;
    int age,score;
};
using namespace std;
int main()
{
    //1、创建学生结构体变量
    struct student stu1={"张三",18,100};

    //2、通过指针指向结构体变量    
    student *p =&stu1;
    p->score=99;//指针通过->操作符可以访问成员

    //3、通过指针访问结构体变量数据
    cout<<"姓名："<<p->name<<" 年龄："<<p->age<<" 分数："<<p->score<<endl;

    //结构体指针可以通过操作符来访问结构体中的成员
    return 0;
}