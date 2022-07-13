#include<iostream>
using namespace std;
extern const int s=10;


int main(){
    const int s=20;
    //it is not taking the default value int(doubt)
   // const  p=30;
    
    int a=20;
    a+=s;
    cout<<a;
    enum {X,Y,Z};//it will give you three constant int X,Y,Z with 0 1 2 default value
    cout<<X<<Y<<Z;
    //if you want to give som value then it will be 
    //
    enum{A=10,B=20,C=30};
    cout<<A<<" "<<B<<" "<<C<<endl;
    return 0;
}