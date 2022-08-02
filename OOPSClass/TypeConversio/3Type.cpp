#include<iostream>
using namespace std;
//class to class type conversion
class triangle{
int base,height;
public:
triangle (int x,int y){
    base=x;
    height=y;
}

void print(){
    cout<<"base"<<base<<"and height is :"<<height<<endl;
}
 
 int getBase(){
    return base;
 }
 int getHeight(){
    return height;
 }


};

class rectangle{
  int l,b;
  public:
  rectangle(int l,int b){
    l=l;
    b=b;

  }
  void display(){
    cout<<l<<" "<<b;
  }
  
  rectangle(triangle T){
    b=T.getBase();
    l=T.getHeight();
  }

};



int main()
{
    triangle T(5,10);
    rectangle R=T;
    T.print();
    R.display();
    return 0;
}