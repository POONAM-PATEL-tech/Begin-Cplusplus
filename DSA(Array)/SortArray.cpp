#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n]={1,5,6,2,7};
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    
    return 0;
}