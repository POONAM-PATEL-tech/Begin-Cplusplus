

#include<iostream>
using namespace std;
//first element will be said as head.
//if you want to take the head value 4.
//Node * head,*second , *third
//head->data=4,head->next=second
class Node{
    public:
    int data;
    Node *next;
    


   
};



void display(Node *n){
    while (n!=NULL){
        cout<<n->data<<" ->";
        n=n->next;
    }
}
int main()
{

Node *head,*second,*third;
head=new Node();
second=new Node();
third=new Node();
head->data=4;

head->next=second;

second->data=5;
second->next=third;
third->data=6;
third->next=NULL;

display(head);


    return 0;
}