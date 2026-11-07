#include<iostream>
#include<string>
using namespace std;

//1、创建学生数据类型：学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型
//语法 struct 类型名称{成员列表}

//2、通过学生类型构建具体学生



struct Student
{   

    //成员列表

    //姓名
    string name;

    //年龄
    int age;
    //分数
    int score;

}s3;//顺便创建结构体变量

        // 总结1：定义结构体时的关键字是struct，不可省略
        // 总结2：创建结构体变量时，关键字struct可以省略
        // 总结3：结构体变量利用操作符"."访问成员

        
int main()
{
    // 通过结构体创建变量的方式有三种：
    // • struct 结构体名 变量名
    // 。struct 结构体名 变量名 = {成员1值，成员2值...}
    // 定义结构体时顺便创建变量
    
    
    //2.1 struct  Student s1
    struct Student s1;//struct 关键字可以省略
    
    s1.name="张三";
    s1.age=18;
    s1.score=100;

    struct Student s3;
    s3.name="王五";
    s3.age=19;
    s3.score=95;

    cout<<"姓名："<<s1.name<<" 年龄："<<s1.age<<" 分数："<<s1.score<<endl;
    //2.2 struct  Student s2={……}
    struct Student s2={"李四",28,99};
    cout<<"姓名："<<s2.name<<" 年龄："<<s2.age<<" 分数："<<s2.score<<endl;

    cout<<"姓名："<<s3.name<<" 年龄："<<s3.age<<" 分数："<<s3.score<<endl;
    //2.3 在定义函数体时顺便构建结构体变量


    return 0;
}