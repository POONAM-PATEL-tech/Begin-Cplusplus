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

void NQ(Node*& first,Node*& last,int val){
    Node* n=new Node(val);
    
    cout<<"enqueeue"<<n->data<<endl;
    if(first==NULL){
        first=n;
        last=n;
    }
    first->next=n;
    last=n;
}

Node* DQ(Node*& first){
    if(first==NULL){
        cout<<"Q is empty "<<endl;
    //    return;
    }
    Node* n =first;
   // cout<<"Deque"<<n->data<<endl;
    first=first->next;
    cout<<"Deque "<<n->data<<endl;
    delete n;
    
    
}

void First(Node*& first){
    cout<<"First in the Q is:"<<first->data<<endl;
}
void Last(Node*& last){
    cout<<"Last in the Q is :"<<last->data<<endl;
}

void empty(Node*& first,Node*& last){
    if(first==NULL){
        cout<<"Q is empty"<<endl;
    }else{
        cout<<"Q is full"<<endl;
    }
}
int main()
{

   
    Node* first=new Node();
    Node* last=new Node();

    
    NQ(first,last,2);
    NQ(first,last,3);
    DQ(first);
    First(first);
    Last(last);
    return 0;
}