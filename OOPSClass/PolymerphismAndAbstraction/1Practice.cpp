#include<iostream>
using namespace std;
class Base{
    public:
  virtual  void display(){
        cout<<"Base function"<<endl;
    }
};
class Derived : public Base {
    public:
    void display(){
    cout<<"Derived function"<<endl;
    }
};
int main()
{
    Derived a;
    Base  b;
    a.display();
    b.display();
    Base* pa=&b;
    pa->display();
   Derived * derivedptr=&a;
   derivedptr->display();
    Base * base=&a;//by this we can print the data of base function becuase base ko pata hai ki base class derived class me hai
    base->display();//if we write virtual keyword then we can print the the derived function
    return 0;
}