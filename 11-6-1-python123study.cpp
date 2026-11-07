// #include<iostream>
// #include<cmath>
// #include<iomanip>
// using namespace std;
// int main()
// {
//     double a,b,c,D,x1,x2;
//     D=b*b-4*a*c;
//     cin>>a>>b>>c;
//     if(a!=0)
//     {
//         if(D>0)
//         {
//             double x1=-b/(2*a);
//             double x2=sqrt(D)/(2*a);
//             cout<<"两个实数根为：x1="<<x1<<"+"<<x2<<"i"<<",x2="<<x1<<"+"<<x2<<"i"<<endl;
//         }
//         //else if(D==0)
//         //{
//             //x1=(-b)/(2*a);
//             //cout<<"一个实数根为：x1="<<x1<<endl;
            
//         //}
//         else
//         {
//             double x1=(-b)/(2*a);
//             double x2=(sqrt(-D))/(2*a);
//             cout<<"两个虚数根为：x1="<<x1<<"x2="<<x2<<endl;
//         }
//     }
//     else
//     {
//         cout<<"输入数据有错"<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int a;
//   cin>>a; 
//   if(a<=10) 
//     cout<<0.1*a<<endl;
//   else if(a<=20)
//     cout<<0.1*10+0.075*(a-10)<<endl;
//   else if(a<=40)
//     cout<<0.1*10+0.075*10+0.05*(a-20)<<endl;
//   else if(a<=60)
//     cout<<0.1*10+0.075*10+0.05*20+0.03*(a-40)<<endl;
//    else if(a<=100)
//     cout<<0.1*10+0.075*10+0.05*20+0.03*20+0.015*(a-60)<<endl;
//     else
//     cout<<0.1*10+0.075*10+0.05*20+0.03*20+0.015*40+0.01*(a-100)<<endl;
//     return 0;
// }

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int arr[5],max=0,min=0;
    
    double sum;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        //
    }
    // int max=arr[0],min,min;
    for(int i=0;i<5;i++)
    {
        
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
        sum+=arr[i];
    }
    cout<<"max="<<setw(5)<<max<<endl;
    cout<<"min="<<setw(5)<<min<<endl;
    cout<<"ave="<<setw(5)<<sum/6<<endl;
}
