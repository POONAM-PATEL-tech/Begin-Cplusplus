#include<iostream>
using namespace std;
class Integer{
public:
int x,y;
int newint;
    Integer(int a,int b){
        x=a;
        y=b;
        cout<<"Object is created"<<endl;
    }
    void display(){
        cout<<"Integer 1:"<<x<<endl<<"integer2:"<<y<<endl;
    }
    void add(){
        newint=x+y;
        cout<<"Sum of INtegers is:"<<newint<<endl;
    }
};

int main()
{
   // Integer I;//When Object created the constructor will call and here we have a parametrized cunstructor so we have to need 
    //this Parametrized Object .
    Integer I(2,8);
   I.display();
   I.add();
    return 0;
}