/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//factorial of n recursively
//do it normal

/*int fact(int n){
    if(n==0)
    return 1;
    return n*fact(n-1);
}


int main()
{
    int n;
    cin>>n;
    //it is a normal approach
   /* int mult=1;
    for(int i=1;i<=n;i++){
       mult=mult*i;
       
    }
    cout<<mult<<endl;*/
     //cout<<fact(n);
    

   // return 0;
//}



//fibonacci series with recursion
/*int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;

    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
    
    return 0;
}*/

//fibonacci with normal type

#include<iostream>
using namespace std;
int fib(int n){
    int a=0,b=1,c,i;
    if(n==0){
        return a;
    }
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}
