#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    int sum;
    cin>>n;
    int originaln=n;
    
    while(n>0){
        
        int lastdigit=n%10;
        sum=pow(lastdigit,3)+sum;
        n=n/10;

    }
    
   if(originaln==sum){
        cout<<"ArmStrong"<<endl;
    }else{
        cout<<"Not Armstrong"<<endl;
    }
    
    return 0;

}