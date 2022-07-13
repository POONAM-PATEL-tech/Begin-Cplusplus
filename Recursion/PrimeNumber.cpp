#include<iostream>
using namespace std;
bool checkPrime(int n,int i=2){
    if(n<=2)
    return (n==2)?true : false;
    if(n%i==0)
    return false;
    if(i*i>n)
    return true;
    //check for next divisor
    return checkPrime(n,i+1);
}
int main(){
     int n;
     cin>>n;
     if(checkPrime( n)){
        cout<<"Yes";

     }else{
        cout<<"no";
     }
    return 0;
}