#include<iostream>
using namespace std;
int sumofa(int a[],int n){
   // int sum=0;
    
    if(n<=0){
        return 0;
    }
    
    return (sumofa(a,n-1)+a[n-1]);
}
int main()
{
    int n;
    cin>>n;
    // int sum=0;
    int a[n]={9,8,9};
    cout<<sumofa(a,n);
    return 0;
}