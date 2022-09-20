#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    
     Node* next;
   Node(int data){
   this->data=data;
   next=NULL;
  
  }
  Node(){  }


    
};
class Q{
    //Ye nahi karna hai
//Node* first=new Node();
Node* first=NULL;
//Node* last=new Node();
Node* last=NULL;
public:
void NQ(int val){
    Node* n=new Node(val);
    
    cout<<"enqueeue"<<n->data<<endl;
    if(first==NULL){
        first=n;
        last=n;
    }
    first->next=n;
    last=n;
}

void DQ(){
    if(first==NULL){
        cout<<"Q is empty "<<endl;
        return;
    }
    Node* n =first;
    first=first->next;
   // cout<<"Deque"<<n->data;
    n->next=NULL;
   cout<<"Deque"<<n->data;
    delete n;
   /* Node* temp=head; //prev node will be curr
        head=head->next; //(current node will go next)
        //memeory deletion of first node
        temp->next=NULL;*/
    
}

void First(){
    cout<<"First in the Q is:"<<first->data<<endl;
}
void Last(){
    cout<<"Last in the Q is :"<<last->data<<endl;
}

void empty(){
    if(first==NULL){
        cout<<"Q is empty"<<endl;
    }else{
        cout<<"Q is full"<<endl;
    }
}
};
int main()
{

   
    Q q;
    q.NQ(1);
    q.NQ(2);
    q.DQ();
    return 0;
}