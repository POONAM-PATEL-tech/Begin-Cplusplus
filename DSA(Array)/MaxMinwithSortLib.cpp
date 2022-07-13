#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void MinMax(int arr[],int n){
    sort(arr,arr+n);
}
int main(){
int arr[]={12,1,34,1223,454,65};
int n=sizeof(arr)/sizeof(arr[0]);
// sort(arr[n],arr[n+1]);
MinMax(arr,n);
 cout<<arr[0]<<" "<<arr[n-1];
    return 0;
}
