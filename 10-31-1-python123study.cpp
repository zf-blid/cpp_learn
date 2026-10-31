// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     int du=0;double fee,extralfee;
//     if(du<0)
//     {
//         cout<<"Invalid input"<<endl;
//     }
//     else
//     {
//         if(du<=100)
//         {
//             fee=du*.5;
//             cout<<fixed<<setprecision(1)<<fee;
//         }
//         else if(du<=200)
//         {
//             fee=(fee-100)*.6+100*.5;
//             cout<<fixed<<setprecision(1)<<fee;
//         }
//         else if(du<=300)
//         {
//             fee=(fee-200)*.6+100*.6+100*.5;
//             cout<<fixed<<setprecision(1)<<fee;
//         }
//         else if(du<=200)
//         {
//             fee=(fee-300)*.6+100*.8+100*.6+100*.5;
//             cout<<fixed<<setprecision(1)<<fee;
//         }
//     }
// }

// #include<iostream>
// #include<iomanip>
// #include<cmath>
// #define _USE_MATH_DEFINES
// using namespace std;
// int main()
// {
//     int r=0;int h=0;
//     cin>>r>>h;
//     cout<<"s="<<fixed<<setprecision(2)<<perimeter(r)<<"v="<<fixed<<setprecision(1)<<volume(r,h)<<endl;
//     return 0;
// }
// double perimeter(int a)
// {
//     double perimeter=M_PI*(a*a)*1.0;
//     return perimeter;
// }
// double volume(int r,int h)
// {
//     double volume=M_PI*(r*r)*h;
// }
// #include <iostream>
// #include <iomanip>
// #include <cmath>
// #define _USE_MATH_DEFINES
// #define PI 3.14
// using namespace std;

// double area(double r,double h);
// double volume(double r, double h);

// int main()
// {
//     double r, h;// fixed << setprecision(1) <<
//     cin >> r >> h;//fixed << setprecision(1) << 

//     cout << "s=" << area(r,h)
//          << ", v=" << volume(r, h) << endl;

//     return 0;
// }

// double area(double r,double h)
// {
//     return 2*PI*r*r+PI*2*r*h;
// }

// double volume(double r,double h)
// {
//     return PI * r * r * h;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     char sex;
//     double hight;
//     cin>>sex>>hight;
//     cout<<measure_man(sex,hight);
//     return 0;
// }
// double measure_man(char sex,double hight)
// {
//     double standard;
//     if(sex=='W')
//     {
//         standard=(hight-105)*0.92*2;
//         cout<<"性别：男，标准体重：";
//     }
//     else if(sex='M')
//     {
//         standard=(hight-100)*0.90*2;
//         cout<<"性别：女，标准体重：";
//     }
//     return standard;
// }
#include<iostream>

using namespace std;
int reverse_integer(int num)
{
    if(num==0)
    {
        return 0;
    }
    int reversed_num=0;
    while(num>0)
    {
        int digit=num%10;
        reversed_num=reversed_num*10+digit;
        num/=10;
    }
    return 0;
}
int main()
{
    int num;cout<<"请输入一个四位整数";
    cin>>num;
    cout<<"num="<<num<<endl<<"reversed_num=";
    cout<<reverse_integer(num)<<endl;
    return 0;
}