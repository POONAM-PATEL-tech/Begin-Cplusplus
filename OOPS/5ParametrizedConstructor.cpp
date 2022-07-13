//we can make many type of constructor like parametrized means we can write two to many parameter
#include <iostream>
using namespace std;
class Complex{
   int a;
   int b;
   public:

   Complex(void);
   void print(){
       cout<<a<<"+ i"<<b<<endl;
   }
   Complex(int a1,int b1){  //Parametrized constructor
       a=a1;
       b=b1;
   }
   Complex(int v1,float v2){   //Parametrized Constructor
       a=v1;
       b=v2;
   }
   
};
Complex::Complex(void){  // This is default constructor.
    a=0;
    b=0;
}


int main(){
    Complex c2;
    
    Complex c1(1,3);//Implicit   {Parametrized}
    c1.print();//It will print value of c1
    c2.print();//It will c2
    Complex c3=Complex(1,2.5f);//Explicit
    c3.print();//It will of c3

   // c1.print(1,3);
    return 0;
}