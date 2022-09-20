#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        //we have to give the value of data
        data=value;
        next=NULL;
    }
};
void push(Node*&head,int val){
    Node *n=new Node(val);
    n->next=head;
    head=n;
}
Node* delFirst(Node *head){
    if(head==NULL){
        return NULL;
    }
    //Move the head pointer to the next node
    Node* temp=head;
    head=head->next;

    delete temp;
    return head;
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

    //Make empty linked list
    Node *head=NULL;
    push(head,1);
    push(head,2);
    head=delFirst(head);
    /*for(Node* temp=head;temp!=NULL;temp=temp->next)
    cout<<temp->data<<" ";*/
    display(head);



    return 0;
}