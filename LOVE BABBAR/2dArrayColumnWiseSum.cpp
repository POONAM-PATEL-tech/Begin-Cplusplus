#include<iostream>
using namespace std;
void Sum(int arr[][3],int n,int m){
    //j is column and i is row
    for(int j=0;j<n;j++){
        int sum=0;
        for(int i=0;i<m;i++){
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