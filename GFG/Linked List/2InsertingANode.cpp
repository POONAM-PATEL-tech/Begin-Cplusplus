/*
There are three ways to insert a  node in linked list
. At the front of the linked list
. After a given node.
. At the end of the linked linst.
*/



/*
//At the front of the linked list-:
So here the new node will be the new head
*/

#include<iostream>
using namespace std;

//it is without constructor

class Node{
    public:
    int data;
    Node *next;
};

// -------------------  1.  -----------------
//At the front of the linked list.
void push(Node **head_ref,int new_data){
    //1.allocate node
    Node *new_node=new Node();

    //2.put in the data
new_node->data=new_data;
   
   //3.Make next of new node as head

    new_node->next=(*head_ref);

    //4.Move the head to point to the new node
    (*head_ref)=new_node;

}
//----------------------   2.   _-------->
//At the end of the linked list
//It will be append because we are using last element
    //at the end of linked list
void append(Node **head_ref,int new_data){

    //1.allocate node
    Node *new_node=new Node();

    //Now the last node will point the new node  
    Node* last=*head_ref;

    //2.put in the data
    new_node->data=new_data;

    //3. This new node is going to be the last node , so make next of it as NULL

    new_node->next=NULL;


    //4. If the linked List is empty, then make the new node as head
    if(*head_ref==NULL){
        *head_ref=new_node;
        return ;
    }

//5. Elese traverse till the last node
while(last->next!=NULL){
    last=last->next;
}

//6.Change the next of last node
last->next=new_node;
return ;



}


void insertAfter(Node* prev_node,int new_data){
    //1.Check if the given prev-node is NULL
    if(prev_node==NULL){
        cout<<"the given previous node cannot be NULL";
        return;
    }

    //2.Allocate new node

    Node * new_node=new Node();

    //3.Put in the data
    new_node->data=new_data;

    //4.Make next of new node as next of prev_node
    new_node->next=prev_node->next;

    //5.move the next of prev_node as new_node

    prev_node->next=new_node;
}
void display(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{

    Node *head=NULL;
    push(&head,6);
    push(&head,2);
    append(&head,1);
    insertAfter(head->next,2);
   display(head);
    return 0;
}