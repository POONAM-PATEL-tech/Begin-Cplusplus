#include<iostream>
#include<stack>
using namespace std;
class Q{
    public:

    stack<int>st1,st2;
    void enqueue(int data){
        st1.push(data);
        cout<<"enqueued"<<data<<endl;
    }
//
    void dequeue(){
        if(st1.empty() && st2.empty()){
            cout<<"Q is empty"<<endl;
            return;
        }
        if(st2.empty()){
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            
        }
        cout<<"Dequeued "<<st2.top()<<endl;
            st2.pop();

           /* if(st1.empty()){
                while(!st2.empty()){
                    st1.push(st2.top());
                    st2.pop();
                }
            }*/

    }
};
int main()
{
    Q s;
    s.st1.push(1);//for push you can also do this
    s.st1.push(2);
    s.st1.push(3);
    s.enqueue(4); //this is a function which I have made for insert an element at stack1
    s.dequeue();
    s.dequeue();
    

    return 0;
}