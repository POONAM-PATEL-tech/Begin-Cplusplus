#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }

};

void push(Node*& head,int data){
 Node *n=new Node(data);
    n->next=head;
    head=n;

}
//You cannot delete the first node with it.
void delete1(Node*&head,int data){
Node *prev=head;
Node *temp=head;
if(head==NULL){
    return ;
}
head=head->next;

while(temp->data!=data){
    prev=temp;
    temp=temp->next;
  }
  prev->next=temp->next;
  delete temp;
   return ;
}
void display(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}

int main()
{
 Node *head=NULL;
 push(head,1);
 push(head,2);
 delete1(head,2);
 display(head);

    return 0;
}