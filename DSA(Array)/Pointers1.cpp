#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int *p=&a;//*p=a,p=&a
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&a<<endl;
    
    return 0;
}
