#include <iostream>
#include <math.h>
using namespace std;
/*int main(){
    int a=10,b=20;
    for(int i=a;i<=b;i++){
        bool flag=0;
        for(int i1=2;i1<sqrt(i);i1++){
            if(i%i1==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i;
        }
    }

    

    return 0;
}
*/
//Print this with use of function
//we will create a boolean retrn type function
bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }

    return 0;
}
