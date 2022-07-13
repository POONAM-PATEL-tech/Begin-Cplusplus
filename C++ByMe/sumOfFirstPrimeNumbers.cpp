#include<iostream>
using namespace std;
bool is_Prime(int n,int i=2 ){
    if(n<=2){
       return (n==2)? true:false;
    }
    if(n%i==0){
        return false;
    }
    if(i*i>n)
        return true;
        return is_Prime(n,i+1);
    
}
int main(){
    int n=5;
    int i=0; //count of numbers
    int j=1;//number to check
    int sum=0;
    while(1){
      j++;  //incremnet by one
      if(is_Prime(j)){  //which means it will be 2 here
        sum+=j;
        i++;
      }
      if(i==n){   //if the count is equal to given n then break
        break;
      }
    }
    cout<<sum;
      return 0;
    }

