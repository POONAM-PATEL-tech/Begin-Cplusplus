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
        for(int num=i;num>0;num--){
            cout<<num;
        }
        for(int dec=2;dec<=i;dec++){
            cout<<dec;
        }
        cout<<endl;
    }
    return 0;
}