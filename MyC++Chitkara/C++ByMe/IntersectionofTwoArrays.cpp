#include<iostream>
using namespace std;
void printIntersection(int arr1[],int arr2[],int n,int m){
    int i=0;
    int j=0;
    while(i<n && j<m){
    if(arr1[i]<arr2[j]){
        i++;
    }else if(arr2[j]<arr1[i]){
        j++;
        
    }else{
        cout<<arr2[j]<<" ";
        
        i++;
        j++;
    }
}
}
int main()
{  //if you havee unsorted array htn you can sort them first
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,3,4,5};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    printIntersection(arr1,arr2,n,m);
    return 0;
}