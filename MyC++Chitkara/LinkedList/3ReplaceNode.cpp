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

void replace(Node*&head,int old,int new1){
Node *temp=head;
while(temp->data!=old){
    temp=temp->next;
    if(temp==NULL){
        return;
    }

}
temp->data=new1;
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
 replace(head,1,3);
 display(head);

    return 0;
}