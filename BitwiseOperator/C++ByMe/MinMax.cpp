#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[n]={2,3,5,1,8};
    int min=arr[0];
    int max=arr[0];
    int i=0;
    while(i<n){
        if(arr[i]<min){
            min=arr[i];
            i++;
        }else if(arr[i]>max){
            max=arr[i];
            i++;
        }else{
            i++;
        }
        

        
    }
    cout<<max<<" "<<min;
    
    return 0;
}