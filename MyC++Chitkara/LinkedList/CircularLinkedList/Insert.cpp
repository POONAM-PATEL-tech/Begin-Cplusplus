#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    

    Node(int d){
        data=d;
        next=NULL;
    }
};
void insert(Node* last ,int newdata,int nodeVal){
    Node* temp=last->next;
    Node* n=new Node(newdata);
    while(temp->data!=nodeVal){
        temp=temp->next;
        if(temp==last){
            cout<<"Not Found";
            return;
        }
    }
    n->next=temp->next;
    temp->next=n;
}
void front(Node*& last,int val){
    Node* n=new Node(val);
    
    n->next=last->next;
    last->next=n;
    

}
void delete1(Node*&last,int data){
Node *prev=last;
Node *temp=last;
if(last==NULL){
    return ;
}
last=last->next;

while(temp->data!=data){
    prev=temp;
    temp=temp->next;
  }
  prev->next=temp->next;
  
  delete temp;
   return ;
}
void display(Node*& last){
    Node *temp=last;
    do{
        temp=temp->next;
        cout<<temp->data<<" ";
    }
    while(temp!=last);
    cout<<endl;

}
int main()
{
    Node *last=new Node(5);
    last->next=last;
    front(last,1);
    front(last,2);
    front(last,3);
    
    delete1(last,2);
    display(last);
  
    return 0;
}