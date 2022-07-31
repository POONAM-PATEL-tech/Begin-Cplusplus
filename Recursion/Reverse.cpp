#include<iostream>
using namespace std;
void reverse(int n){
    static int sum=0;
    
    if(n>0){
        int rem=n%10;
        sum=sum*10+rem;
        int b=n/10;
         reverse(b);
    }
 
 cout<< sum;
}
int main()
{
    int n;
    cin>>n;
    reverse(n);
    return 0;
}