#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    cout<<"printing count from 1 to n "<<endl;
  
    for(int i=0;i<n;i++){
        cout<<i<<endl;
    }

    cout<<"Second form "<<endl;
    int i=1;
    for(;i<=n;i++){
        cout<<i<<endl;
    }

    cout<<"Third form "<<endl;
    //is for ko nahi pata kahan rukna hai
    //isliye hum break laga denge
    int j=1;
     for(; ; ){
        if(j<=n){
            cout<<j<<endl;
        }else{
            break;
        }
        j++;
     }
    //You can write any type of conditions
  for(int a=0,b=1;a>=0 && b>=1;a--,b--){
    cout<<a<<" "<<b<<endl;//0 and 1
  }

    return 0;
}