#include<iostream>
using namespace std;
int main(){
    /*int x;// decalare an int variable
    int *p=&x;//address of x assingned to p
    int *q;//int pointer
    int a=20;//first decide value
    q=&a;//address of a assigned to q
    *p=10;//10 assigned to x through indirection
    cout<<*q<<*p;//cout means answer
    */ 
//................................................................................................................
    int x=10;
    int * const poin=&x;//constant pointer

    //we can not modify the address which pon is initialized to
    cout<<poin<<endl;
    cout<<*poin<<endl;

    *poin=30;
    cout<<poin<<endl;
    cout<<*poin<<endl;
     
     //.............................................................................................................
      int a=20;
      int  const * point=&a;
      //Pointr to a constant
      //int a=10;
    int const *p=&a;
    //It can point to any variable of correct type , but the contents of what it points to cannot be changed.
    cout<<p<<endl;
    cout<<point<<endl;
    //*point =20;//you can not do this means you can not change the value.

   // cout<<point<<endl;//it will show error
    //......................................................................................................................  

      //we can declare both the pointer and variable as a contants
      const char * const cp="xyx";
      cout<<cp<<endl;
     // cp="abc";//it will not give any thing because variable is constant and also pointer is constant






    
    return 0;
}