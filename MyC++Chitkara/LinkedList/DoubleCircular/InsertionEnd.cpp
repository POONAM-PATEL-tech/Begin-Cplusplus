#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

void insertEnd(Node*& start,int val){
    //If the list is empty, create a single node

    if(start==NULL){
        Node* n=new Node();
        n->data=val;
        n->next=n->prev=n;
        start=n;
        return;
    }
    //if list is not empty
   //find last node
    Node* last=start->prev;

    //Create Node dynamically
    Node* n=new Node();
    n->data=val;

    //Start is going to be next of new node
    n->next=start;
    //Make last previous of start
    start->prev=n;

    //Make last previous of new node
    n->prev=last;

    //Make new node next of old last
    last->next=n;

}
void display(Node* start){
    Node* temp=start;
    while(temp->next!=start){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<" ";



}
int main()
{

   Node* start=NULL;
   insertEnd(start,5);
    insertEnd(start,1);

    display(start);
    return 0;
}