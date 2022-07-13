#include<iostream>
#include<bits/stdc++.h>
//this priority_queue .........syntax will make min heap like sort the elements in increasing order
//time complexicity will be O(nlogn)
using namespace std;
void showq(priority_queue<int,vector<int>,greater<int>>gq){
    priority_queue<int,vector<int>,greater<int>>g=gq;
    while(!g.empty()){
        cout<<g.top()<<" ";
        g.pop();
    }
    cout<<endl;
}



int main(){
    priority_queue<int,vector<int>,greater<int>>gquiz;
   gquiz.push(10) ;
   gquiz.push(20);
   gquiz.push(30);
   gquiz.push(15);
   gquiz.push(5);
   gquiz.push(2);
   gquiz.push(1);
   gquiz.push(0);
   cout<<"Min heap"<<endl;
   showq(gquiz);
    return 0;
}