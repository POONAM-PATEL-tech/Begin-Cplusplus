#include<iostream>
#include<exception>
using namespace std;
int main()
{   

    //bad allocation
    try{
        int *ptr=new int[1000000000000000000];//18 zeros
    }
    catch(exception& e){
        cout<<e.what()<<endl<<"Exception Occured"<<endl;
    }
   // cout<<ptr<<endl;
    return 0;
}