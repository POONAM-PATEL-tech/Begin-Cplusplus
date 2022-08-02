#include<iostream>
using namespace std;
class complex{
    int real;
    int img;
   public:
    complex(int real,int img){
        this->real=real;
        this->img=img;
    }

    void display(){
        cout<<"img"<<img<<endl;
    }

    friend void print(complex c);
      
    

    

};
void print(complex c){
        cout<<"real"<<c.real<<endl;
    }
int main()
{
   complex A(2,5);
   print(A);
   A.display();
   

    return 0;
}