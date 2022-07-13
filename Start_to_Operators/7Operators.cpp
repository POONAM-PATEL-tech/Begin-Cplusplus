#include <iostream>  //Here in this program I am going to talk about all type of operators.
using namespace std;
int main(){
    int a=123;
    int b=456;
    int c;
    //Arithmetic Operators(+,-,*,/,%,++,--,**)
    //Assignment Operators(+=,-=,*=,/=,%=,>>=,&=,^=)
    //Comparison Operators(==,<=,>=,!=,>,<)
    //Logical Operators(&&,||)
    cout<<a++<<" "<<a<<" "<<a--<<" "<<a<<endl;
    cout<<++a<<" "<<a<<endl;  
    if(a>b){
        cout<<"NO"<<endl;
    }
    if((a||b)>747){
      cout<<"YES"<<endl;
    }
    c=a+b*(4+9)/2;
    int d=a+b*4+9/2;
    cout<<c<<endl;
    cout<<d<<endl;
    


}