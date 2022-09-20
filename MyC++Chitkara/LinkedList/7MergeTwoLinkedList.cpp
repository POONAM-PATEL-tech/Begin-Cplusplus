  
#include<iostream>
#include<bits/stdc++.h>
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

void front(Node *&head,int d){
    Node *n=new Node(d);
    n->next=head;
    head=n;
}
//Iterative method
/*Node* merge(Node*& head,Node*& head1){
    Node* temp1=head;
    Node* temp2=head1;
    Node* newNode=new Node(-9);
    //It is only temporary linked list in which we will contain all the elements
    Node* temp3=newNode;

    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
            temp3->next=temp1;
            temp1=temp1->next;
        }else{
            temp3->next=temp2;
            temp2=temp2->next;
        }
        temp3=temp3->next;
    }

    while(temp1!=NULL){
        temp3->next=temp1;
        temp1=temp1->next;
        temp3=temp3->next;
    }

     while(temp2!=NULL){
        temp3->next=temp2;
        temp2=temp2->next;
        temp3=temp3->next;
    }
     return newNode->next;
}*/
//recursive 
  /*Node* merge(Node*& head, Node*& head1)
    {
        if (head == NULL)
            return head1;
        if (head1 == NULL)
            return head;
 
        // start with the linked list
        // whose head data is the least
        if (head->data < head1->data) {
            head->next = merge(head->next, head1);
            return head;
        }
        else {
            head1->next = merge(head, head1->next);
            return head1;
        }
    }*/
   // Sir's recursive function
    Node* merge(Node*& head,Node*& head1){
        Node* res;

        if(head==NULL){
            return head1;
        }
        if(head1==NULL){
            return head;
        }
    
        if(head->data<head1->data){
            res=head;
            res->next=merge(head->next,head1);
        }else{
            res=head1;
            res->next=merge(head,head1->next);
        }
        return res;
    }
void display(Node *n){
    while (n!=NULL){
        cout<<n->data<<" ->";
        n=n->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{

    Node *head=new Node(7);
    Node *head1=new Node(8);
    front(head,5);
    front(head,3);
    front(head,1);
    front(head1,6);
    front(head1,4);
    front(head1,2);
    //sort()
    //we cannot use this function because linked list has not iterators
    cout<<"List 1 is :"<<endl;
    display(head);
    cout<<"list 2 is :"<<endl;
    display(head1);
    Node* newhead=merge(head,head1);
    cout<<"New Merged list"<<endl;
    display(newhead);
    return 0;
}