#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";//you can give i for printing row same value
        }//you can give j for printing column same value
        cout<<endl;//if you do not want to give space then remove " ".
    }
    return 0;
}