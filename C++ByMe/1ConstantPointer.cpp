#include<iostream>
using namespace std;
int main(){
    //int  *const  pointer => constant pointer (you can not give the address to other)
    // int const * pointer  => pinter to a constant interger(means you can not change th variable but give the address to other)
    //const int const *pointer =>means you neither can assign other value  nor address
    int a=10;
    int *const p=&a;
   // int b=20;
    //error
    //p=&b;

    //valid
    *p=10;//(you can change the value at that place)
      
      int const *q=&a;
      //it will show error
      //*q=20;
      //valid
      int b=20;
      q=&b; 

      const int const *r=&a;
     // int b=20;//these are not valid
     // r=&b;//these are not valid
     // *r=20;//these are not valid



    return 0;
}