#include<iostream>
#include<string>
using namespace std;

//const的使用场景

struct student
{
    string name;    //姓名
    int age;        //年龄
    int score;      //分数
};

//将函数中的形参改为指针，可以减小内存空间，而且不会复制新的副本出来
void printfStudent(student *s)
{
    cout<<"姓名："<<s->name<<" 年龄："<<s->age<<" 分数："<<s->score<<endl;
};

//const使用场景
void printfStudent(const student *stu)  //加const防止函数体中的误操作
{
    //stu->age=100;//操作失败，因为加了const修饰
    cout<<"姓名："<<stu->name<<" 年龄："<<stu->age<<" 分数："<<stu->score<<endl;
};
int main()
{
    //创建结构体变量
    struct student s={"张三",15,70};

    //通过函数打印结构体变量信息
    cout<<"main中张三的年龄为："<<s.age<<endl;
    printfStudent(&s);

}