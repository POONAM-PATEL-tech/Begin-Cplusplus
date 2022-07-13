#include<iostream>
using namespace std;
int main(){

    int a=34; //we can make it any type of pointers
    int* ptr;
    ptr=&a;
    cout<<"The value of a is"<<a<<endl;
    cout<<"The address of a is"<<ptr<<endl;
    cout<<"Address of a is"<<&a<<endl;
    cout<<"The value of a is"<<*ptr<<endl;
    return 0;
}