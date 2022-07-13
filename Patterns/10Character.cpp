#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int spaces=n-i;spaces>0;spaces--){
            cout<<" ";
        }
        for(int alpha =1;alpha<=i;alpha++){
            cout<<char(64+alpha);
        }
        for(int j=i-1;j>=1;j--){
            cout<<char(64+j);
        }
        cout<<endl;
    }

    return 0;
}