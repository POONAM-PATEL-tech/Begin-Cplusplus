#include <iostream>
using namespace std;
/*void swap(int *a2,int *b2){
    int temp=*a2;
    *a2=*b2;
    *b2=temp;
    cout<<*a2<<" "<<*b2;
    

}
*/

// Reference Variable
void swapp(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
    
}
int main(){
    int a1=10;
    int b1=20;
    int *a=&a1;
    int *b=&b1;
    int temp=*a;
    *a=*b;
    *b=temp;
    //cout<<temp<<endl;
   // cout<<*a<<endl; //  Value of a is 20 here
   // cout<<*b<<endl; // Value of b is 10 here.
   // swap(&a1,&b1)<<endl;
    swapp(a1,b1);


    return 0;
}