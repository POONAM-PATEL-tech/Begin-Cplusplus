#include<iostream>
using namespace std;
int main()
{

    int x,y,z;
    cout<<"Enter value of x "<<endl;
    cin>>x;
    cout<<"Enter value of y "<<endl;
    cin>>y;

    try{
        if(y!=0){
            z=x/y;
            cout<<"Value of Z "<<z<<endl;
        }else{
            throw(x);
        }
    }
    catch(double x){//if you do not give the int it will terminate auto 
        cout<<"Please enter a valid integer other than 0"<<endl;
    }
    catch(int y){ //we have taken int data type catch here so it will take this second catch
        
        cout<<"Second Catch"<<endl; //
    }

    catch(int x){
        cout<<"Third "<<endl;//it will take second catch becaue it is near to try as int data type
    }
    return 0;
}