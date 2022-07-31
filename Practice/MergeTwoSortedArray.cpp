#include<iostream>
using namespace std;

void mergeTwoArrays(int arr1[],int arr2[],int n,int m ,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;

        }else{
            arr3[k]=arr1[j];
            k++;
            j++;
        }

        while(i<n){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        while(j<m){
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    
}
int main()
{    int n;
cin>>n;
int m;
cin>>m;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int arr3[n+m];
    mergeTwoArrays( arr1, arr2, n, m, arr3);
    for(int i=0;i<n+m;i++){
        cout<<arr3[i]<<" ";
    }


    return 0;
}