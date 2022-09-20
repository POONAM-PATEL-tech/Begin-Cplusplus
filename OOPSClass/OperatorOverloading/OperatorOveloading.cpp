#include<iostream>
using namespace std;
//Scope Operator,Member Operator,ternamry Operator ,we cannot overload it.
class Complex{
   int real,img;
   public:
   void display(){
    cout<<real<<"+"<<img<<"i"<<endl;
   }
   Complex(){
    real=0;
    img=0;
   }

   Complex(int r,int i){
    real=r;
    img=i;
   }

  /* Complex operator - (){
    real=-real;
    img=-img;
    return Complex(real,img);
   }*/
 
Complex operator + (Complex d){  //iska matlab hai complex a + complex b
                                 //a will get the values from constructor and b will get from implicit
     Complex temp;
     temp.real=real+d.real;  //(to write in . it will implicit)
     temp.img=img+d.img;
     return temp;
}
  


};
int main()
{
    Complex A(2,3), B(4,2),C(0,0);
    C=A+B; //A.add(B)
    // -A   you can do it like this.
   //  A.display();
  //  A.operator-();
   // A.display();
   A.display();
   B.display();
    C.display();
    return 0;
}