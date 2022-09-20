#include<iostream>
using namespace std;
int reverse(int n){
    
    static int reverse_num=0;
    
    if(n>0){
        int remainder=n%10;
        reverse_num=reverse_num*10+remainder;
        reverse(n/10);
    }
    return reverse_num;
}

int main()
{
    int n;
    cin>>n;
    cout<<"Reversed Number"<<reverse(n)<<endl;
    return 0;
}