#include<iostream>
using namespace std;

int getMissNo(int a[], int n){

    //for xor of all the elements in array
    int x1=a[0];

    //for xor of all the elements from 1 to n+1
  int x2=1;

  for(int i=1;i<n;i++){
    x1=x1^a[i];
  }

  for(int i=2;i<=n+1;i++){
    x2=x2^i;
  }

    return (x1^x2);
}
int main()
{
    int arr[]={1,2,3,5};
    int N=sizeof(arr)/sizeof(arr[0]);

    //Function call
    int miss=getMissNo(arr,N);
    cout<<miss<<endl;
    return 0;
}