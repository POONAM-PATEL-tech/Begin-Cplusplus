#include<iostream>
using namespace std;
int main()
{
    int a=15;
    int b=6;
    cout<<"a&b  "<<(a&b)<<endl;
    cout<<"a|b   "<<(a|b)<<endl;
    cout<<"a!b  "<<(~a)<<endl;
    cout<<"a^b  "<<(a^b)<<endl;
    //left shift
    cout<<(5<<1)<<endl;
    //Right Shift
    cout<<(5>>1)<<endl;

    cout<<(5<<2)<<endl;

    int i=7;
    cout<<(++i)<<endl;//8
    cout<<(i++)<<endl;//8
    cout<<(--i)<<endl;//--9->8
    cout<<(i--)<<endl;//8--->8

    return 0;
}