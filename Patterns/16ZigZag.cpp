#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=3;i++){    //if you want to get a zig zag then value of i will be fixed 3 and value of j can be odd 
        for(int j=1;j<=n;j++){
            if((i+j)%4==0 || (i==2 && j%4==0)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}