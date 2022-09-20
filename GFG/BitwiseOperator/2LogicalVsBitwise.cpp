#include<iostream>
using namespace std;
int main()
{
    int x=2;
    int y=5;
    if(x & y){
        cout<<"True";
    }else{
        cout<<"False";
    }
    cout<<endl;
    if(x && y){
        cout<<"True";
    }else{
        cout<<"False";
    }
    cout<<endl;
    cout<<(x&y)<<endl;
    cout<<(x&&y)<<endl;
    return 0;
}