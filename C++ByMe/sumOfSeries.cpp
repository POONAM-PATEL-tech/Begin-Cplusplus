#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int x=2;
    int i=1;
    int n=10;
    int sum=0;
    for(;i<n;i=i+2){
      int power=pow(x,i);
      sum=sum+power;
    }
    cout<<sum;

    return 0;
}