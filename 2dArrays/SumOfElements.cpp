#include<iostream>
using namespace std;
#define M 4
#define N 4

int sum(int arr[M][N]){
    int sum=0;
    int i,j;

for(i=0;i<M;i++){
    for(j=0;j<N;j++){
        sum=sum+arr[i][j];
    }
}
return sum;
}
int main()
{
   int i,j;
   int arr[M][N];
   //Get the matrix 
   int x=1;
   for(i=0;i<M;i++)
    for(j=0;j<N;j++)
    arr[i][j]=x++;
   
   for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }

   cout<<sum(arr);

    return 0;
}