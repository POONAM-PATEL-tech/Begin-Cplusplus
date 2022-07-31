#include<iostream>
using namespace std;
void Sum(int arr[][3],int n,int m){

    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum;
    }
    
}
int main()
{
    
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    Sum(arr,3,3);
    return 0;
}