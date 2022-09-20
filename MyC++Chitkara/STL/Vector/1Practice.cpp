#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void find(vector<int> v1,vector<int> v2,vector<int> v3){
    
        int newSize=v1.size()+v2.size();


         int max1,max2;
        //max element of v1 vector
        for(int i=0;i<v1.size();i++){
         max1=*max_element(v1.begin(),v1.end());
        }
        //max element of v2 vector
        for(int i=0;i<v2.size();i++){
         max2=*max_element(v2.begin(),v2.end());
        }
        if(newSize==v1.size()+v2.size()){
            if(max1>max2){
              for(int i=0;i<newSize;i++){
                v3.push_back(v1[i]);
                v3.push_back(v2[i]);
              }
            }
              else{
                for(int i=0;i<newSize;i++){
                    
                    v3.push_back(v2[i]);
                    v3.push_back(v1[i]);
                }
              }
            }
            for(auto i=v3.begin();i!=v3.end();i++){
                cout<<*i<<" ";
            }
        }


int main() 
{


    vector<int> v1;
    vector<int> v2;
    int size1,size2;
    int element;

cout<<"Size of Array 1 :";
    cin>>size1;
    cout<<"enter element of fist :"<<endl;
    
   
 for(int i=0;i<size1;i++){
       cin>>element;
       v1.push_back(element);
    }

    cout<<"Size of array 2:";
  cin>>size2;
  cout<<"enter element of second :"<<endl;
  

for(int i=0;i<size2;i++){
   cin>>element;
   v2.push_back(element);
}

vector<int> v3;

find(v1,v2,v3);





    return 0;
}