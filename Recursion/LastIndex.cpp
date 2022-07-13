#include<iostream>
using namespace std;
int lastIndex(int a[],int n,int x){
    if(n-1<=0){
        return -1;
    }
    if(a[n-1]==x){
        return n-1;
    }
    
        return lastIndex(a,n-1,x);
        
    
    
}
int main()
{
    int a[5]={1,2,3,3,4};
    int x=3;

     cout<<lastIndex(a,5,x);
    return 0;
}