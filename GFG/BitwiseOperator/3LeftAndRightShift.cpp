#include<iostream>
using namespace std;
int main()
{
    int x=5;

    //Left shift means equavilent to multiplication by 2.
    cout<<"x<<1 : "<<(x<<1)<<endl;
    //right shift means eqauvilent to divide by 2.
    cout<<"x<<2 : "<<(x>>1)<<endl;
    return 0;
}