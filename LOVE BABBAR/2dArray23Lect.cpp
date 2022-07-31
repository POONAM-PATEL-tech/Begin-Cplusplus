#include<iostream>
using namespace std;
//if you will not give column size then it will throw error.
bool isPresent(int arr[][4],int target,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{

    //create 2d array
    //int arr[3][4];

    //if we want it will initialize row wise
   // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    //these elements are 3*4=12 

  //if we want that which type of elements should be there in array 
  int arr[3][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4}};



    //row wise input
   /*for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }*/

    //taking input column wise
   /*for(int j=0;j<4;j++){
        for(int i=0;i<3;i++){
            cin>>arr[i][j];//here we need row to increment
        }
    }*/
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Now we are going to check this target element will be there or not
    //Linear Search
    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"Element is found"<<endl;
    }else{
        cout<<"Element is not found"<<endl;
    }
    return 0;
}