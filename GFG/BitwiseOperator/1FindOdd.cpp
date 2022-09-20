#include<iostream>
using namespace std;
//Find odd means you have to out the different number
int findOdd(int arr[],int n){
    

int res=0;
    int i;
    for(i=0;i<n;i++){
     res=res^arr[i];
        

    }
    return res;
}
int main()
{
    int n;
    cin>>n;
     int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"print the unique number or odd number"<<endl;
    cout<<findOdd(arr,n);
    
    return 0;
}