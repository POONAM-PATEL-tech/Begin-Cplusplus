#include<iostream>
using namespace std;

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

    Complex operator + (Complex d){
        Complex temp;
        temp.real=real+d.real;
        temp.img=img+d.img;
        return temp;
    }
    Complex operator ()(int a,int b ,int c ,int d){
        Complex ans;
        ans.real=a+b+c;
        ans.img=b+c+d;
        return ans;
    
    }

};
int main()
{
    Complex A(2,3),B(4,5),C,D,ans1;
    C=A+B;
    C.display();

   ans1=D(2,3,4,5);
   ans1.display();
   D.display();

    


    
    return 0;
}