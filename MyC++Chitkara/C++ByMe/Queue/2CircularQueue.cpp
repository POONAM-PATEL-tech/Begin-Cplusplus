#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class CQ{
    public:
    int size;
    int* arr;
    int front;
    int back;

    CQ(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        back=-1;

    }

    

    bool full(){
        if(back-front==size-1){
            return true;
        }else{
            return false;
        }
    }

    bool empty(){
        if(front==-1){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data){
        if(full()){
            cout<<"Queue is full";
            return;
        }else if(front==-1){
            front=back=0;
            arr[back]=data;
            cout<<arr[back];
        }else if(back==size-1 && front!=0){
            back=0;
            arr[back]=data;
            cout<<arr[back];
        }else{

            back++;
            arr[back]=data;
            cout<<arr[back];
        }
    }

    void dequeue(){
      /*  if(front==-1){
            cout<<"Queue is Empty "<<endl;
            return ;
        }*/
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return;
            
        }

        int value=arr[front]; //starting element
        arr[front]=-1;//first element is -1
        if(front==back){//dono same jagah par hai
        front=-1;
        back=-1;


        }else if(front==size-1)
        front=0;
        else
        front++;

        cout<<"data"<< value<<endl;
    }
};  
int main()
{

    CQ Circular(5);
    cout<<Circular.empty()<<endl;
   Circular.dequeue();
    Circular.enqueue(1);
    cout<<Circular.empty()<<endl;
    Circular.enqueue(6);
   // cout<<Circular.empty()<<endl;
   cout<<endl;
    cout<<Circular.full()<<endl;
    Circular.dequeue();
    Circular.dequeue();
    Circular.dequeue();
    return 0;
}