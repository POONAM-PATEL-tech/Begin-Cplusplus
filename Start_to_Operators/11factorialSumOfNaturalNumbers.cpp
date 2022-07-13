#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int mult=1;
    for(int i=0;i<n;i++){
        
        mult=(n-i)*mult;
    }
    cout<<mult<<endl;

    //Let's suppose we have n natural numbers to find sum
    //from maths formula we can write n*(n+1)/2 and it will give the answer
    int sum=0;
    for(int j=0;j<n;j++){
        sum=(n-j)+sum;
    }
    cout<<sum<<endl;
    return 0;
}