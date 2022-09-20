#include<iostream>
using namespace std;
class shape{
   protected:
   int l;
   int w;
   public:
   
   void get(){
      cin>>l>>w;
   }
     shape(int l,int w){
    this->l=l;
    this->w=w;
   }


//when we do virtual function 0
//if we have any virtual function at base class then it will be abstract class
/* virtual  void Area(){
    cout<<"Shape is not known"<<endl;
   }*/
   //Only with this line you can print 
   virtual void Area()=0;

   
};

class triangle:public shape{
      public:
      
      triangle(int a,int b):shape(a,b){}
   
     void Area(){
        cout<<"Area of triangle="<<l*w/2<<endl;
      }

      //koi function banaoge to agar pointer se point karte ho to nahi hoga kyonki
      //wo function base class me nahi hai
      

};

class rectangle:public shape{
         public:
      rectangle(int a,int b):shape(a,b){}
   
      void Area(){
        cout<<"Area of triangle="<<l*w<<endl;
      }
      
};
int main()
{

   
    triangle t(10,20);
    rectangle r(5,10);

    shape *shapeptr;
    shapeptr=&r;
    shapeptr->Area();


    shapeptr=&t;
    shapeptr->get();
    shapeptr->Area();
    //You cannot create object of abstract class
    //If you run it then it will give you error
    /*shape s(1,2);
    s.Area();*/
    return 0;
}