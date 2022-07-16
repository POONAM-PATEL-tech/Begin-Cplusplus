#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=6;
    int c=a&b;
    cout<<"&"<<c<<endl;
    int d=a|b;
    cout<<"|"<<d<<endl;
    int e=a^b;
    cout<<"XOR"<<e<<endl;
    cout<<"Left Shift :"<<endl;
    int f=a<<2;
    cout<<f<<endl;
    cout<<"Right Shift :"<<endl;
    int g=a>>2;
    cout<<g<<endl;
   cout<<"5's Complement "<<~a<<endl;
   cout<<"6's Complement "<<~b<<endl;

 
    return 0;
}
