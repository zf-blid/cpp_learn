#include<iostream>
using namespace std;
// int main()
// {
//     //局部变量声明
//     int a,b;
//     int c;

//     //实际初始化
//     a=10;
//     b=20;
//     c=a+b;
//     cout<<c<<endl;

//     return 0;
// }

// int main()
// {
//     //局部变量声明
//     int a,b;
//     int c;
//     //实际初始化
//     a=10;
//     b=20;
//     c=a+b;

//     cout<<c<<endl;

//     return 0;

// }

// int g=20;
// int main()
// {
//     //局部变量声明
//     int g=10;
//     cout<<g<<endl;
//     return 0;
// }

// int main()
// {
//     int a=10;
    
//     {
//         int a=20;//块作用域变量
//         std::cout<<"块变量"<<a<<std::endl;
//     }
//     std::cout<<"外部变量："<<a<<std::endl;
//     return 0;
// }

class MyClass
{
    public:
    static int class_var;
    //类作用域变量
};

int MyClass::class_var=30;

int main()
{
    std::cout<<"类变量："<<MyClass::class_var<<std::endl;
}