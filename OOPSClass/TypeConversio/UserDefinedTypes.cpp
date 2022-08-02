#include<iostream>
using namespace std;
//There are three types of conversion
//Basic to class type Conversion
//Class to basic tyoe Conversion
//class to class type Conversion
class Integer{
   int x;
   public:
   void display(){
    cout<<"The number is "<<x<<endl;
   }

   Integer (int x){
    this->x=x;//Basic to class type
   }
  operator int(){
    return x;//class to basic
  }
};
int main()
{
    Integer i=50;
    i.display();
    

    int y=i;//i.operator int()
    cout<<"The value of y is: "<<y<<endl;
    return 0;
}