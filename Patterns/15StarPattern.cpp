#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=n-i;space>0;space--){
            cout<<" ";
        }
        for(int star1=1;star1<=i;star1++){
            cout<<"*";
        }
        for(int dec=i-1;dec>=1;dec--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--){
        for(int space=n-i;space>0;space--){
            cout<<" ";
        }
        for(int star1=1;star1<=i;star1++){
            cout<<"*";
        }for(int dec=i-1;dec>=1;dec--){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}