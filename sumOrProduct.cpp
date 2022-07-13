#include<iostream>
using namespace std;
long long int sumOrProduct(long long int n,long long int q){
  for(long long int i=1;i<=n;i++){
      long long int sum=0;
      long long int mult=1;
      if(q==1)
        sum=sum+i;
         
      
      return sum;
      if(q==2)
          mult=mult*i;
      
      return mult;

  }

  }

int main(){
   long long int n;
  long long  int q;
    cout<<sumOrProduct(2133,2);
    return 0;
}