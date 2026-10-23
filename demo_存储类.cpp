#include<iostream>
using namespace std;
void function();

int main()
{
    extern int externalVar;//声明具有外部链接
    function();
    return 0;
}

void function()
{
    //局部变量，具有自动存储期，亩人存储类为auto
    //auto int localVar=20;
    //
    static int staticVaar=30;//
    //
    //
    //
    class MyClass
    {
        public:
        mutable int mutableVar;
        void condtMemberFunc()
        const{    mutableVar=50;//
             }
    };
    //
    thread_local int threadVar=60;
}