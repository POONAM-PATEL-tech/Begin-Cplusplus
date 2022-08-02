#include<iostream>
using namespace std;
class complex{
   int real,img;
   public:
   complex(int r,int i)
   {
    real=r;
    img=i;
   }
   void display()
   {
    cout<<"My number is "<<real<<" + i "<<img<<endl;
   }
//if you use constructor type then you have to use source class at top.
//if we do not use getfunction then you have to public the variable.
   int getReal(){return real;}
   int getImg(){return img;}
   //If you use operator then you have to use source class at bottom 
  /* operator rectangle(){
    rectangle temp(real,img);
    return temp;
   }*/
};


class rectangle{
    int length,width;
    public:

    rectangle(complex c){
        length=c.getReal();
        width=c.getImg();
    }
    rectangle(int l,int w)
    {
        length=l;
        width=w;
    }

    void print(){
        cout<<"Length of rectangle is:"<<length<<endl<<"Width of rectangle is :"<<width<<endl;;
    }

};



int main()
{
    complex A(2,3);
    rectangle B=A;//source class A destination class B
    //A.operator rectangle B
    A.display();
    B.print();
    return 0;
}