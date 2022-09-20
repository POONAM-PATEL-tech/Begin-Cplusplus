#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){
       data=val;
       next=NULL;       
    }
};

void insertTail(Node*&head,int val){
    //we have made a a new node and give the value
    Node * n=new Node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    //temp node
    Node *temp=head;
    //Now traverse jab tak NULL nahi ho jata
    while(temp->next!=NULL){
        temp=temp->next; //jaise hi hua
    }
    temp->next=n;//aakhiri waali node se link kardo new waali

}

Node* delLast(Node *head){
    if(head==NULL){
        return NULL;
    }

    if(head->next==NULL){
        delete head;
        return NULL;
    }
    //Find the second last node

    Node *second_last=head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }

    //delete last node
    delete(second_last->next);

    //change next of second last
    second_last->next=NULL;
    return head;
}
void display(Node *head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
//Insert node at the end
int main()
{

Node *head=NULL;

insertTail(head,1);
insertTail(head,2);
insertTail(head,3);
insertTail(head,4);
head=delLast(head);
display(head);

    return 0;
}