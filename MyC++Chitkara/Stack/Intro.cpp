#include<iostream>
using namespace std;
//LIFO if there is not any element then top will be -1.
//there will be 4 function push(),pop(),top(),empty().
#define n 50
class Stack{
    public:
   int* arr;
   int top;
   
   Stack(){
    arr=new int[n];
    top=-1;
   }
   void push(int ele){
       if(top==n-1){
        cout<<"Stack Overflow"<<endl;
         return;
       }
       top++;
       arr[top]=ele;

   }

   void pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
        return;
    }
    top--;
   }
   void Top(){
    if(top==-1){
        cout<<"No element in Stack"<<endl;
        return;
    }
    cout<<arr[top];
   }
   bool empty(){
    return top==-1;
   }
};
int main()
{
     Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.empty()<<endl;
   // s.pop();
    s.Top();
   //print all elements of stack
   cout<<"Elements present in stack:"<<endl;
   while(!s.empty()){
    s.Top();
    //remove top element in stack
    s.pop();
   }
 


    return 0;

}