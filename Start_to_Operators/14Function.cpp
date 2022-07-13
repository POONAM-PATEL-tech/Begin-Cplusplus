//Funtion is a piece of code that performs a specific task.
//Q. Write a function to add two integer
#include <iostream>
using namespace std;
int add(int n1,int n2){
    int sum=n1+n2;
    return sum;
}
//if we want to print at function then we have to write a void function.
void print(int e,int g){
    cout<<e<<" "<<g<<endl;
    int sum2=e+g;
    cout<<sum2<<endl;
    return;
}




int main(){
    int a=1;
    int b=2;
    int c=12;
    int d=13;
    
    cout<<add(a,b)<<endl;
    cout<<add(c,d)<<endl;
    print(23,45);
    return 0;
}


