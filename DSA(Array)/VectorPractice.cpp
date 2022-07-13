#include<iostream>
#include<vector>
#include<stdlib.h>


using namespace std;
int main(){
    //we can set the size of vector later. And we can also change it.
    //But in arrays it is not possilble
    vector<int> v1;
   v1.push_back(1);
   v1.push_back(2);
   v1.push_back(3);
   v1.push_back(5);

   //Method of Iteration
   //Method 1
   for(int i=0;i<v1.size();i++){
       cout<<v1[i]<<" ";//1 2 3 4 5
   }

   cout<<endl;

  //Method 2
  vector<int> :: iterator it;
  for(it=v1.begin();it!=v1.end();it++){
      cout<<*it<<" ";
  }//1 2 3 4 5
  cout<<endl;

  for(auto element:v1){
      cout<<element<<endl;
  }

  vector<int> v2(3,10);//10 10 10

  swap(v1,v2);
  

  vector<int> :: iterator iter;
  for(iter=v1.begin();iter!=v1.end();iter++){
     
      cout<<*iter<<" ";
  }
  cout<<endl;
  for(auto element:v2){
      cout<<element<<" ";
  }
  cout<<endl;
 // sort(v2.begin(),v2.end());


   

    return 0;
}