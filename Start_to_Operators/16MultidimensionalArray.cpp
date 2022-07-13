#include<iostream>
using namespace std;
int main(){
    cout<<"First type of array implementation"<<endl;
    int arr[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<"Element at x["<<i<<"]["<<j<<"]:"<<" ";
            cout<<arr[i][j]<<endl;
        }
    }
    cout<<"Second type of implementation"<<endl;
    int n1,n2;
    cin>>n1>>n2;
    int array[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cout<<"x["<<i<<"]["<<j<<"]:"<<array[i][j]<<endl;
        }
    }

    return 0;
}