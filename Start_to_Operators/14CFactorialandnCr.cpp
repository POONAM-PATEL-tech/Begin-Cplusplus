#include<iostream>
using namespace std;
int fact(int num){
    int factorial=1;
    for(int i=0;i<num;i++){
        factorial=factorial*(num-i);
    }
    return factorial;
}

int main(){
    //Calculate nCr
    int n,r;
    cin>>n;
    cin>>r;
    
    cout<<fact(n)/((fact(r))*(fact(n-r)));

    return 0;
}


