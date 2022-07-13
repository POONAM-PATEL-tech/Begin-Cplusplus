#include <iostream>
using namespace std;
//There will be three step for this solution 
///(a)Find last digit number, (b)reverse number starting with its place value,(c)skip the last number
int main(){
    int n;
    cin>>n;
    int reverse; //default value will be 0.
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    cout<<"reverse number"<<reverse<<endl;

     
    return 0;
}