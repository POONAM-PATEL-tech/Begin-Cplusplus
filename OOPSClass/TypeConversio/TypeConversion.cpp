#include<iostream>
using namespace std;
int main()
{
    float pi=3.14f;
    int y=int(pi);
    cout<<"float"<<pi;
    cout<<endl<<"Int "<<y<<endl;

    int x=100;
    int z=40;
    float a=x/z;//It will give only integer value

    float b=(float)x/z; //it will change it at float
    float c=(float)(x/z);//It will not change anything
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}