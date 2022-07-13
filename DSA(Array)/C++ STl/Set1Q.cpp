//Given a set of integers,remove all the even elements from the set and print the set.
#include<bits/stdc++.h>

#include<iostream>
using namespace std;
int main(){
   set<int> myset={1,2,4,5,8,10};
   for(auto it:myset){
       if(it%2==0){
      it= myset.erase(it);
       }
      else{
      it++;
      }
   }

   for(auto it:myset)
   cout<<it<<" ";


    return 0;

}
