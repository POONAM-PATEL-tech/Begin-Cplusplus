#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int maximum(int arr[],int n){
    if(n==1)
        return arr[0];
    
    return max(arr[n-1],maximum(arr,n-1));

}
int minimum(int arr[],int n){
    if(n==1)
    return arr[0];
    return min(arr[n-1],minimum(arr,n-1));
}
int main(){
    int arr[]={12,3,34,56,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum Value "<<" :";
    cout<<maximum(arr,n)<<endl;
    cout<<"Minimum Value"<<" :";
    cout<<minimum(arr,n);
    return 0;
}