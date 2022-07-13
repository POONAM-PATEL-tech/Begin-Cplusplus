#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int spaces=n-i;spaces>0;spaces--){
            cout<<" ";
        }
        for(int stars=1;stars<=i;stars++){
        cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}