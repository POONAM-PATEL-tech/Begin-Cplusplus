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

void deleteNode( Node*& start, int key)
{
    // If list is empty
    if (start == NULL)
        return;
  
    // Find the required node
    // Declare two pointers and initialize them
    Node *curr = start, *prev_1 = NULL;
    while (curr->data != key) {
        // If node is not present in the list
        if (curr->next == start) {
            cout<<"List doesn't have node with value ="<<key;
            return;
        }
  
        prev_1 = curr;
        curr = curr->next;
    }
  
    // Check if node is the only node in list
    if (curr->next == start && prev_1 == NULL) {
        start = NULL;
        free(curr);
        return;
    }
  
    // If list has more than one node,
    // check if it is the first node
    if (curr == start) {
        // Move prev_1 to last node
        prev_1 = start->prev;
  
        // Move start ahead
        start = start->next;
  
        // Adjust the pointers of prev_1 and start node
        prev_1->next = start;
        start->prev = prev_1;
        free(curr);
    }
  
    // check if it is the last node
    else if (curr->next == start) {
        // Adjust the pointers of prev_1 and start node
        prev_1->next = start;
        start->prev = prev_1;
        free(curr);
    }
    else {
        // create new pointer, points to next of curr node
        struct Node* temp = curr->next;
  
        // Adjust the pointers of prev_1 and temp node
        prev_1->next = temp;
        temp->prev = prev_1;
        free(curr);
    }
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
deleteNode(start,5);
    display(start);
    return 0;
}