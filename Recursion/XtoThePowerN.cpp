#include<iostream>
using namespace std;
#include<math.h>
//basically we use recursion to remove loops
//int power=1;
int ans=1;
int pow(int x,int n){
    for(int i=0;i<n;i++){
        int power=pow(x,i);
         ans=power*ans;
    }
    return ans;
}
int main()
{
    int x;
    cout<<"The number"<<":";
    cin>>x;
    int n;
    cout<<"The Power"<<" :";
    cin>>n;
     cout<<pow(x,n);
    return 0;
}