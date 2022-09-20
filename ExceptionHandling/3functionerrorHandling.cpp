#include<iostream>
using namespace std;

void divide(int x,int y,int z){
     if(y!=0){
            z=x/y;
            cout<<"Value of Z "<<z<<endl;
        }else{
            throw(x);
        }
}
int main()
{
    int x,y,z;
    cout<<"enter the value of x: ";
    cin>>x;
    cout<<"enter the value of y: ";
    cin>>y;
    try{
        divide(x,y,z);
    }
    catch(int x){
        cout<<"enter the value of y othr than 0"<<endl;
    }
    return 0;
}