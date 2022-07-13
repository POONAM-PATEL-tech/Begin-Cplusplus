#include <iostream>
using namespace std;
int main(){
    
  //  int arr[5]={1,2,3,4,5}; <--This is first type of arr declaration
 /* int arr1[10];  <-- This is second type of declaration
     for(int i=0;i<10;i++){
         cin>>arr1[i];
     }
    //Iteration over Array
    for(int i=0;i<5;i++){
        cout<<arr1[i]<<" ";
    }
    */
   //third type of declaration(User friendly)
   cout<<"give the length of array:";
   int n;
   cin>>n;
   int arr2[n];
   cout<<"values of array:";
   for(int i=0;i<n;i++){
       cin>>arr2[i];
   }
   cout<<"Print Array:";
   for(int i=0;i<n;i++){
       cout<<arr2[i]<<" ";
   }

   //we can also iterate it with the help of pointers so you do refer 15PointerArraysIteration .
   
    return 0;

}