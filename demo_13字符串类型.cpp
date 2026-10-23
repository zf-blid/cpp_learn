#include<iostream>
#include<string>
using namespace std;

int main()
{
    //1、C语言风格字符串
    //注意事项1 char 字符串名 []
    //注意事项2 等号后面 要用双引号 要包含起来字符串
    char str[]="hello word";
    cout<<str<<endl;
    //2、C++语言风格的字符串
    //包含一个头文件        #include<iostream>
    string str2="hello word";
    cout<<str2<<endl;

    return 0;
}