#include<iostream>
using namespace std;
#include <bits/stdc++.h>
int power(int x,int n){
    int mod=9e+7;
    if(n==0){
        return 1;
    }else{

    return (x*power(x,n-1))%mod;
    }
}
int main()
{
    int x;
    cout<<"Number:";
    cin>>x;
    int n;
    cout<<"power:";

    cin>>n;
    cout<<power(x,n);
    return 0;
}