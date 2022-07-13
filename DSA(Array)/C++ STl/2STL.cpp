#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//You can use set at interviews 

//arrays vector struct
//set map
//set
//given n elements, tell me the unique elements
//arr[]={2,5,2,1,5}//3 unique elements->1,2,5


int main(){
    
//set it is a container which contains all types of data type
//if you give 1,2,1,3,3 then it will store only unique elements like 1,2,3
//it will always print values in ascending order
//set<int> st;
//int n;
//cin>>n;
//for(int i=0;i<n;i++){
//    int x;
//    cin>>x;
//    st.insert(x);//NlogN
//}
////iteration for set
//for(auto i=st.begin();i!=st.end();i++){
//    cout<<*i<<endl;
//
//}
//it will give 3rd element
//cout<<*st.begin()+2<<endl;

//erase functionality
//st->{1,2,3,4,5}
//this will erase 1st element
//cout<<"Erase First Element"<<endl;
//st.erase(st.begin());//set->2,3,4,5
//logn
//st.erase(st.begin(),st.begin()+ 2);//->[)
//logn
//st.erase(startIterator,endIterator)
//cout<<"Elements after erased by first element"<<endl;
//cout<<*st.begin()<<endl;

//st.erase(4);//st.rase(key)//delete the 4
//declare set
//set<int> st1={1,5,7,8,0};
//auto it=st1.find(7);//log n
//auto i=st1.find(2);//it=st1.end(); //id element does not exist then it will give length of the set
//cout<<*it<<endl;
//cout<<*i<<endl;
//
//st1.emplace(3);
//st1.insert(9); //we can use emplace instead of insert because it take less time instead of insert
//for(auto i:st1){
//    cout<<i<<" ";
//}
//cout<<endl;
//cout<<st1.size()<<endl;

//
//st1.erase(st1.begin(),st1.end());
//for(auto i:st1){
//    cout<<i<<endl;
//}
//you can define iterators with this type also
//set<int>::iterator it1,it2;
//it1=st1.begin();
//it2=st1.end();

//st1.erase(it1,it2);//It will erase all the elements from startinfg to end
//print last two elements
//it2--;
//it2--;
//st1.erase(it1,it2);
//for(auto i:st1){
//    cout<<i<<" ";
//}
//cout<<endl;
//cout<<st1.size()<<endl;


//unordered_set
//difference between set and unordered set
//set->increasing order ,at search time -> log(n)
//unordered_set->no ordering, at search time->Avg. O(1),Worst O(n)

//define unordered set

//All functions will work of sets 
//unordered_set<int> st2={2,3};
//
//
//st2.emplace(1);
//st2.emplace(5);
//st2.emplace(7);
//st2.emplace(8);
//st2.emplace(6);
//
//int a=12;
//st2.insert(a);
//print->6,8,7,5,1,3,2 but in this order is not define
//It depends on hashes
//This set is also unique

//for(auto it=st2.begin();it!=st2.end();it++)
//cout<<*it<<" ";
//cout<<endl;
////multiset
////define multiset
////it will no give unique elements
//multiset<int> ms;
//ms.insert(1);
//ms.insert(2);
//ms.insert(1);
//ms.insert(2);
//ms.insert(3);
//ms.insert(4);//ms.emplace,ms.erase
//ms.erase(2);//all the instances will erased
//auto it3=ms.find(2);//returns an iterator pointing to the first 2
//cout<<"Pointer"<<*it3<<endl;
//ms.clear();//deleted the entire set
//ms.erase(ms.begin(),ms.end());
//ms.erase(2);//it will remove all the 2 from set
//ms.erase(ms.find(2))//it will remove only first element

//ms.count() give you the count number of the duplicate element


//cout<<ms.count(2)<<endl;
//
//
//for(auto i:ms)
//cout<<i<<" ";







//map
//Use Of Map
//C++ map use cases
//First, a map allows fast access to the value using the key.
// This property is useful when building any kind of index or reference.
//  Second, the map ensures that a key is unique across the entire data structure, which is an excellent technique for avoiding duplication of data.
//Key value (You can decide key value)//It works like dictionery
//according to the key stuff map is working sorted
//map only storres unique keys
//if we get same key then there will be overwrite
//Map always make a pair
//
//map<string,int> mpp;
//mpp["Poonam"]=12;
//mpp["Patel"]=10;
//mpp["CSE"]=23;
//mpp["Patel"]=15;//->{CSE 23,Patel 15, Poonam 12}//it will no give duplicate key name
//mpp.emplace("Keyboard",11);//for emplace you can write like this
//mpp.insert(pair<string,int>("mouse",13));//for insert you have to write like this
//mpp.erase("Poonam");//erase key Poonam
//mpp.erase(mpp.begin());//mpp.erase(iterator)
//mpp.clear();//It will erase all the map
//mpp.erase(mpp.begin(),mpp.end())//It will erase all in this rannge
//mpp.erase(mpp.find("Poonam"));//find will point to Poonam
//
//for(auto i=mpp.begin();i!=mpp.end();i++){
//    cout<<i->first<<" "<<i->second<<endl;
//}
//if(mpp.empty()){
//    cout<<"Yes it is empty";
//}else{
//    cout<<" No it is not empty";
//}
//
//cout<<mpp.count("Patel");//always return 1 as it stores only 1
//
//
//
//unordered_map it does not store in any order
//define
//unordered_map<int,int> mpp1;

//unordered map cannot define pair like unordered_map<pair<int,int>,int> mpp;
//it can store only single keys
//all the functions will work like map

//...........Pair Class
//cout<<endl;
//pair<int,int>1 pr={1,2};
//nested Pairs
//pair<pair<int,int>,int> pr2={{1,2},2};
//cout<<pr2.first.second<<endl;//->2
//pair<pair<int,int>,pair<int,int>> pr3={{1,2},{2,4}};
//cout<<pr3.first.first<<endl;//->1
//cout<<pr3.second.second<<endl;//->4
//
//vector<pair<int,int>> vec;  //You can also define like this 
//set<pair<int,int>> st5;//You can also define like this 
//map<pair<int,int>,int> mpp3;//You can also define like this


//multimap
//define
//multimap<string,int> mpp4;
////
//mpp4.emplace("Poonam",3);
//mpp4.emplace("Poonam",5);
//mpp4.emplace("Hatel",1);
////sorted with duplicacy
//for(auto i=mpp4.begin();i!=mpp4.end();i++){
//    cout<<i->first<<" "<<i->second;
//}
//

//Stack and Queue
stack<int> sta;//last in first out data Structure
//pop
//top
//size
//empty
//push
//emplace

sta.push(1);
sta.push(2);
  sta.push(3);
  sta.push(4);
  sta.push(5);
  sta.push(6);
  sta.emplace(7);

  cout<<sta.top()<<endl; //give the top element prints->7
  sta.pop();//delete 7
  cout<<sta.top()<<endl;//prints 6

  bool flag=sta.empty();//returns true if stack is empty,or flase
  //deleted the entire stack
  while(!sta.empty()){ 
      cout<<sta.top()<<endl;//you can print all elements by this             
        sta.pop();
  }
  //before implementing stack.top you have to always check 
  if(!sta.empty()){ //it is emty so it will not give anything        
      cout<<sta.top()<<endl;
  }

  cout<<sta.size()<<endl;


//Queue 
//First in first out data Structure
//push        time complexicity O(1)
//pop     time complexicity O(1)
//front     time complexicity O(1)
//size     time complexicity O(1)
//empty     time complexicity O(1)

queue<int> q;
q.push(1);
q.push(5);
q.push(3);
q.push(7);  
q.push(6);

//lnear time
while(!q.empty()){
   cout<< q.front()<<" ";//->15376

   q.pop();
}
cout<<endl;
cout<<q.size()<<endl;



// priority_queue
//push
//size
//top
//pop
//empty
priority_queue<int> pq;
pq.push(1);
pq.push(5);
pq.push(3);
pq.push(4);
cout<<pq.top()<<endl;  //it contains all the elements in descending order
//maximum element will be at top
pq.pop();
cout<<pq.top()<<endl;

priority_queue<pair<int,int>> pq1;
pq1.push_back(1,5);
pq1.push_back(1,6);
pq1.push_back(1,7);
cout<<pq1.top()<<endl;





return 0;
}

