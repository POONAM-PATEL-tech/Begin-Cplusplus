#include<iostream>
using namespace std;
class Node{
 public:
 int data;
 Node *next;

 //A constructor is called here
 Node(int value){
    data=value;
    //Next pointer is pointed to NULL.
    next=NULL;
 }

};

void insertHead(Node*&head,int val){
    //creating new node and insert the value
    Node *n=new Node(val);
    //Now new node next will point to previous node(head) 
    n->next=head;
    //and now head will be new node
    head=n;

}

void insertTail(Node*&head,int val){
    Node *n=new Node(val);
    //if list is empty
    if(head==NULL){
        head=n;//make the head of new node
        return;
    }
    //Now traverse all linked list
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //when it will reach at the end means null then temp->next will indicate the new node
    temp->next=n;

}


void insertafter(Node *head,int key,int val){
    //key -> a data which is at list or not 


    Node *n=new Node(val);

    //if val is equal to key
    if(key==head->data){
        n->next=head->next;
        head->next=n;
        return;
    }

    Node *temp=head;
    //if temp->data is not found at 1st position
    while(temp->data!=key){
        temp=temp->next;
        if(temp==NULL){
            return;
        }
    }
    n->next=temp->next;
    temp->next=n;
}

void display(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{

    //Declaring an empty linked list
    Node *head=NULL;
    

    //insert At head
    insertHead(head,5);
    insertHead(head,4);

    insertTail(head,3);
    insertafter(head,5,2);

    display(head);
    return 0;
}