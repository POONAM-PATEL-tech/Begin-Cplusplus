#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//if you want double or any type of data type with only one class you can make a template
template<class T>
class vector{
      public:
    T* arr;
    int size;
   
    vector(int ar){
        size=ar;
       
        arr=new T[size];
    }
     T dotProduct(vector &v){
        T d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];
        }
        return d;
     }

     vector sum(vector &v,vector &m){
        t s=0;
        for(int i=0;i<size;i++){
            m.arr[i]=this->arr[i]+v.arr[i];

        }
        return m;
     }

};
int main()
{
//It is for normal 
  // vector V(3),W(3);

  //It is for template
  vector<int> V(3),W(3);
   cout<<"Enter elements of first vector: "<<endl;
   cin>>V.arr[0];
   cin>>V.arr[1];
   cin>>V.arr[2];   
   

   cout<<"Enter elements of second vector: "<<endl;
   cin>>W.arr[0];
   cin>>W.arr[1];
   cin>>W.arr[2];   
   

   cout<<"dot Product of 2 vecotrs is :"<<V.dotProduct(W)<<endl;

    vector<int> m(3);

   V.sum(m,W);
   for(int i=0;i<3;i++){
    cout<<m.arr[i]<<endl;
   }



    return 0;
}