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


int countOfNodes(Node *head){
    int count=0;
    while(head!=NULL){
        head=head->next;
        count++;
    }
    return count;
}
Node* delMiddle( Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    
    Node *copyHead=head;
    //find the count of nodes
    int count=countOfNodes(head);
    //Find the middle node
    int mid=count/2;
    //Delete middle nOde
    while(mid-- >1){
        head=head->next;
        //Delete
        head->next=head->next->next;

    }
       return copyHead;
    
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
    push(head,4);
    push(head,3);
    push(head,2);
    push(head,1);
    
    head=delMiddle(head);
    /*for(Node* temp=head;temp!=NULL;temp=temp->next)
    cout<<temp->data<<" ";*/
    display(head);



    return 0;
}