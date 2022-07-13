#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int multAdd(int a,int b){
    
    return a*b+add(a,b);
}
int sumMultDivi(int a,int b){
    return (multAdd(a,b)/add(a,b));
}
int main()
{

    int a,b;
    cin>>a>>b;
    cout<<sumMultDivi(a,b);
    return 0;
}