#include<iostream>
#include<string>

using namespace std;
//定义学生的结构体
struct student;

struct teacher
{
    int id;//编号
    string name;//教师姓名
    int age;//年龄
    struct student *pstu;//所带的学生的结构体
};
struct student
{
    int id;
    string name;
    int age,score;
};

int main()
{
    //结构体嵌套结构体
    //创建老师
    teacher t;
    student s;
    t.pstu=&s;
    t.id=10000;
    t.name="老王";
    t.age=50;
    (*t.pstu).id=202600000;//pstu 是指针！只能解引用或者使用【->】的方式
    (*t.pstu).name="小王";
    (*t.pstu).age=20;
    (*t.pstu).score=60;


    cout<<"老师的教师编号："<<t.id<<endl
    <<"老师的姓名："<<t.name<<endl
    <<"老师的年龄："<<t.age<<endl
    <<"老师所带学生的学生编号："<<t.pstu->id<<endl
    <<"学生的姓名："<<t.pstu->name<<endl
    <<"学生的年龄："<<t.pstu->age<<endl
    <<"学生的考试分数："<<t.pstu->score<<endl;
    return 0;
}