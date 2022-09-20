#include<iostream>
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

void insertafter(Node *head,int d,int val){
    Node *n=new Node(d);
    if(val==head->data){
        n->next=head->next;
        head->next=n;
        return;
    }

    Node *temp=head;
    while(temp->data!=val){
        temp=temp->next;
        if(temp==NULL){
            return;
        }
    }
    n->next=temp->next;
    temp->next=n;
}

void atend(Node *&head,int d){
    Node *n=new Node(d);

    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
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

    Node *head=new Node(5);
    front(head,7);
    //front(head,5);
    //front(head,1);
    atend(head,3);
insertafter(head,8,5);
    display(head);
    return 0;
}