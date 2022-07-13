//Always remember one thing if you create a priority queue then it will default make the max heap (means greatest number will be on the top)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void showq(priority_queue<int> gq){
    priority_queue<int> g=gq;
    while(!g.empty()){
        cout<<g.top()<<" ";
        
        g.pop();
    }
    cout<<endl;
}
int main(){
    priority_queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);
    cout<<"The priority queue is:";
    showq(gquiz);
    cout<<"Size of queue"<<gquiz.size()<<endl;
    cout<<"top element of queue"<<gquiz.top()<<endl;
    gquiz.pop();
    showq(gquiz);
    return 0;

}