#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int y=5;
    x=x^y ;
    cout<<"1->X ^ Y: ";
 cout<<"x "<<x<<" "<<"y "<<y<<endl;
    y=y^x;
    cout<<"2->Y^X: ";
    cout<<"x "<<x<<" "<<"y "<<y<<endl;
    x=x^y;
    cout<<"3->X^Y: ";
    cout<<"x "<<x<<" "<<"y "<<y<<endl;

    return 0;
}