#include<iostream>
using namespace std;

class Q{
    public:
    int size;
    int* arr;
    int front;
    int back;

    Q(int size){
        this->size=size;
        arr=new int [size];
        front=-1;
        back=-1;
    }

    bool empty(){
        if(front==back){
            return true;
        }
        else{
            return false;
        }

    }

    bool full(){
        if(back==size-1){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data){
        if(!full()){
            back++;
            arr[back]=data;
            cout<<"enqueued "<<arr[back]<<endl;
        }else{
            cout<<"Queue Overflow"<<endl;;
        }
    }

    void dequeue(){
        if(!empty()){
            front++;
             cout<<"dequeued"<<arr[front]<<endl;
        }else{
            cout<<"Queue Underflow "<<endl;
        }
    }

    void firstElement(){
        if(!empty()){
            cout<<arr[front+1]<<endl;
        }else{
            cout<<"No element"<<endl;
        }
    }

    void lastElement(){
        if(!empty()){
            cout<<arr[back]<<endl;
        }else{
            cout<<"No element"<<endl;
        }
    }
};
int main()
{
   Q A(8);
   cout<<A.empty()<<endl;
   A.enqueue(1);
   A.enqueue(2);
   A.enqueue(3);
   A.enqueue(4);
   A.enqueue(5);
   A.enqueue(6);
  A.firstElement();
   cout<<A.full()<<endl;
   A.dequeue();
   A.dequeue();
   A.firstElement();
    A.dequeue();
   A.dequeue();
   A.lastElement();
    A.dequeue();
    
    A.dequeue();
   
   cout<<A.empty()<<endl;
  

    return 0;
}