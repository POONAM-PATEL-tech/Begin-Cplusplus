#include<iostream>
using namespace std;

//recursion function
//fact(n)=n*(n-1)*(n-2)*(n-3).......1
//fact(n)=n*fact(n-1)
int fact(int n){
    //basecase
    if(n==0){
        return 1;
    }else{
    int smalloutput=fact(n-1);
    return n*smalloutput;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}