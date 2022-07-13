#include<iostream>
using namespace std;
bool is_find(int arr[],int n,int x){
    if(n<=0)
        return false;
    

    if(arr[n-1]==x)
        return true;
    
    is_find(arr,n-1,x);
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int x=1;
    if(is_find(arr,5,x)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}