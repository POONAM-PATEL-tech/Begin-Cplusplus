//Compiler will store copies of inline function whenever inline function will call.
//member function will be inline function

//this pointer
//it is use only for member function not for friend function



#include<iostream>
using namespace std;
inline int maximum(int a,int b){
    return (a>b) ? a:b;   
}
int main()
{
    int a=10;
    int b=20;
    cout<<"Maximum :"<<maximum(a,b);
    

    return 0;
}