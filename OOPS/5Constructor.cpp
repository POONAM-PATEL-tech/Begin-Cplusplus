//constructor is a special member of a function with the same  as of the class.
//it is used to initialize the objects its  .
//It is automatically invoked whenever an object is created.
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
   
};
Complex::Complex(void){
    a=0;
    b=0;
}


int main(){
    Complex c1,c2,c3;
    c1.print();
    c2.print();
    c3.print();
    return 0;
}