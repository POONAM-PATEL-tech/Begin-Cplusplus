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

void deletNode(Node*& head,Node* del){
    //baseCase
    if(head==NULL || del==NULL){
        return;

    }
    //if node to be deleted is head node

    if(head==del){
        head=del->next;
    }

    //change next only if node to be delted is NOT the lsat node.
    if(del->next!=NULL){
        del->next->prev=del->prev;
    }

    //change prev only if node to be deleted is NOT the first node

    if(del->prev!=NULL){
        del->prev->next=del->next;
    }

    //free the memory occupied by del
    free(del);
    return;
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
    front(head,3);
    front(head,4);
    // deletNode(head,head);
     deletNode(head,head->next);//delete middleNode
     //with this type you can delete all the nodes
     deletNode(head,head->next);//
    display(head);//delete last node
    return 0;
}