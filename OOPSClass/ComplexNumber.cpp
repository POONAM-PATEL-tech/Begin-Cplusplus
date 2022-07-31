#include<iostream>
using namespace std;
//there will be two compartment at class one is public or private
//we will put data at private section
class Complex{
    private :int real;
    private:int img;
    public:void input(){
        cout<<"Enter Real Pass:";
        cin>>real;
        cout<<"Enter Imaginary Part:";
        cin>>img;
    }
    public:void display(){
        cout<<real<<"+"<<img<<"i";

    }
    public:void add(Complex p, Complex q){
        int realnum=p.real+q.real;
        int imag=p.img+q.img;
        
        cout<<realnum <<"+"<<imag<<"i";
        cout<<endl;
    }

    public:void multiply(Complex p, Complex q){
        int a_real=p.real*(q.real);
       
        int a_img=p.img*(q.img);
        int a_real_img=p.real*(q.img);
        int a_img_real=p.img*(q.real);
        int sum_img=a_real_img+a_img_real;
        int sum_real=a_img+a_real; 


        cout<<sum_real<<"+"<<sum_img<<"i";
    }
};



int main()
{
  Complex p;
  Complex q;
  Complex ans;
  Complex mult;

  p.input();
  q.input();
  ans.add(p,q);
  mult.multiply(p,q);

  

    return 0;
}