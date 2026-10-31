// #include <iostream>
// #include<iomanip>
// using namespace std;

// int main() 
// {
//     int a, b;
//     float c,d;
//     d = 15.0 / 5.0;
//        a = 5; b = 3; c = 2;
//        cout << "a/b = " <<a/b<< endl;
//        cout << "a%b = " << a%b<< endl;
//        cout << "a/c = " <<fixed<<setprecision(1)<<(double)a/c<< endl;
//        cout << "d=" <<(int)d<< endl;
//        cout << "14/3.0 = " <<fixed<<setprecision(5)<<(double)14/3<< endl;
//        cout << "14/3 = " <<(int)14/3<<endl;
//     return 0;
// }

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int input_temperture=0;double ouput_temperture=0;
    cin>>input_temperture;
    ouput_temperture=(double)(9.0/5)*(input_temperture+32);
    cout<<"华氏温度:"<<fixed<<setprecision(2)<<(double)ouput_temperture<<endl;
    return 0;
}