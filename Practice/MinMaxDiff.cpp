#include<iostream>
using namespace std;

int max(int*arr ,int n){
    int min=arr[0];
    int max=arr[0];
    int i=0;
    while(n>0){
        if(max>arr[i]){
           arr[i]=max;
           i++;
        }else if(min<arr[i]){
            arr[i]=min;
            i++;
        }else{
            i++;
        }
        
    }
    return max-min;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<max(arr,n);
    return 0;
}