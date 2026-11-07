#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct Student
{
    string sName;   //学生姓名
    int age,score;
};
struct Teacher
{
    string tName;    //学生
    struct Student sArray[5];
};

void allocateSpace(struct Teacher tArray[],int len)
{
    string nameSeed="ABCDEFG";
    //给老师赋值
    for(int i=0;i<len;i++)
    {
        tArray[i].tName="Teacher_";
        tArray[i].tName+=nameSeed[i];
        //通过循环給每名老师所带的学生赋值---通过循环
        for(int j=0;j<5;j++)
        {
            tArray[i].sArray[j].sName="Student_";
            tArray[i].sArray[j].sName+=nameSeed[j];

            int random=rand()%40+60;    //40~90
            tArray[i].sArray[j].score=random;
        };
    };

};

void printfInfo(struct Teacher tArray[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"老师姓名："<<tArray[i].tName<<endl;
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<"\t学生姓名："<<tArray[i].sArray[j].sName
                <<"\t考试分数："<<tArray[i].sArray[j].score<<endl;
            }
        }
    }
}
int main()
{
    //随机种子
    srand((unsigned int)time(NULL));

    //1、创建3名老师的数组
    struct Teacher tArray[3];

    //2、通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
    int len=sizeof(tArray)/sizeof(tArray[0]);
    allocateSpace(tArray,len);

    //3、打印所有老师及所带的学生信息
    printfInfo(tArray,len);

    return 0;
}