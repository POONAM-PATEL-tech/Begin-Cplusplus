#include<iostream>
using namespace std;

void divide(double x,double y,double z){
    
        try{
        if(y!=0){
            z=x/y;
            cout<<"Value of Z "<<z<<endl;
        }else{
            throw(x);
        }
    }
    catch(int x){
        cout<<"Hello";
    }


}
int main()
{

    double a,b,c;

    cin>>a>>b;

    try{
        if(double a){
            cout<<"done"<<endl;
        }else{
            throw(a)
        }
    }
    catch(int ){
        cout<"hdsfh";
    }
    
  divide(a,b,c);
    return 0;
}