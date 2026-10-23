#include<iostream>
using namespace std;

int main()
{
    //1、字符型变量创建方式
    char ch='a';
    cout<<"ch="<<ch<<endl;
    //2、字符型变量所占用的内存大小
    cout<<"char字符型变量所占的内存空间为"<<sizeof(ch)<<endl;
    //3、字符型变量常见错误
    //char ch2="a";//创建字符型变量时候，要用单引号
    //char ch2='abcdefghjk';//创建变量的时候，单引号内只能有一个字符

    //4、字符型变量对应的ASCII编码
    //a-97
    //A-65
    //0-31  控制字符
    cout<<(int)ch<<endl;

    return 0;
}