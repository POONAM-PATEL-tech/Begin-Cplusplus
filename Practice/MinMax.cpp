#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
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
   cout<<max<<endl;
   cout<<min<<endl;
    delete[] arr;


    return 0;
}