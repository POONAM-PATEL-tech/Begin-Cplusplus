#include<iostream>
using namespace std;
//mahesh@myanatomy.in
//insrtion,deletion,replace
//singly,double,doubly circular
class Node{
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};


void front(Node*& head,int val){
    Node* n=new Node(val);
   /* n->next=head;
    head->prev=n;
    head=n;*/
    n->next=head;
    n->prev=NULL;

    //change prev of head node to new node
   if(head!=NULL){
    head->prev=n;
   }
   head=n;

}
void update(Node*& head,int newdata,int data){
    
    Node* temp=head;
    
    int pos=0;
    while(temp!=NULL){
        if(temp->data==data){
            
            temp->data=newdata;
        }else{
            temp=temp->next;
            pos++;
            
        }
        
    }
    
}
void display(Node * node){
    Node * last;
    while(node!=NULL){
        cout<<" "<<node->data<<" ";
        last=node;
        node=node->next;
    }
    cout<<endl;
    cout<<"Print inreverse Direction"<<endl;
    while(last!=NULL){
        cout<<" "<<last->data<<" ";
        last=last->prev;
    }
}
int main()
{
   
    Node *head=NULL;
    front(head,1);
    front(head,2);
    update(head,3,3);
    display(head);
    return 0;
}