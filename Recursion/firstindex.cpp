#include<iostream>
using namespace std;
int firstIndex(int a[],int n,int x){
    if(n<=0){
        return -1;
    }
    if(a[0]==x){
        return 0;
    }else{
       int ans=firstIndex(a+1,n-1,x);
       if(ans==-1){
        return -1;
       }else{
        return ans+1;
       }

    }
    
}
int main()
{
    int a[5]={5,5,6,8,8};
    int x;
    cin>>x;
    cout<<firstIndex(a,5,x);
    return 0;
}