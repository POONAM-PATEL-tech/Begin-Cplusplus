#include<iostream>
using namespace std;
int gcd(int a,int b){
 // return b==0 ? a : gcd(b,a%b);
 if(b==0)
 return a;
 else return gcd(b,a%b);
}

//in short you can use turnary operator
//return b==0 ? a : gcd(b,a%b);
int main(){
    int a=98;
    int b=56;
    cout<<a<<" "<<b<<" "<<gcd(a,b)<<endl;
    return 0;
}