#include<iostream>
using namespace std;
class ComplexOverload{

    
    public:
    void display(int a){
        cout<<a<<"+i 0"<<endl;
    }
    void display(int a,int b){
        cout<<a<<"+i"<<b<<endl;
    }                             
    void display(float a,float b){
        cout<<a<<"+i"<<b<<endl;
    }
     
};
int main()
{ 

    //ComplexNumber a,b,c
    ComplexOverload d;
    d.display(5);
    d.display(2,3);
    d.display(1.2f,2.3f);
    return 0;
}