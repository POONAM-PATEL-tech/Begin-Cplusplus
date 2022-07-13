#include <iostream>
using namespace std;
int main(){
    int a=10;
    int *b=&a;
   cout<<*b<<endl;
   //Iterate of array use of pointers
    int marks[]={12,34,54,65,76}; //here marks is like a address of that values.
    int *p=marks; //so that is why we did not use & as a prefix of marks.
    cout<<"Iteration of array"<<endl;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    return 0;
}
