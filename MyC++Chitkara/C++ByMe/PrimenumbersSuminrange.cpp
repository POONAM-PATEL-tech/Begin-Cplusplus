#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n==0){
        return 0;
    }else{
        for(int i=2;i<=n/2;i++){
            if(n%2==0){
                return false;
                break;
            }
        }
        return true;
    }
}
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=2;i<=n;i++){
    if(isPrime(i)){
      sum=sum+i;
    }
    }
    cout<<sum;
    return 0;
}