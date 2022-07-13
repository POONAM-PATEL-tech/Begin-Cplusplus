#include<iostream>
using namespace std;
void abc(){
    int a;
    static int s;
    a=++s;
    cout<<a<<s<<endl;
    if(a<=3){# 
    abc();
    cout<<a<<s<<endl;
}

int main(){
  abc();
  abc();
    return 0;
}