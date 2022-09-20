#include<iostream>
using namespace std;
class Node{
    public:
   int data;
   Node* next;
  Node(int d){
    data=d;
    next=NULL;
  }

};
void split(Node*& temp,Node*& first,Node*& second){
    Node* fast=temp->next;
    Node* slow=temp;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
    }
    first=temp;
    second=slow->next;
    slow->next=NULL;
}

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
void mergeSort(Node*& head){
    Node* temp=head;
    if(temp==NULL || temp->next==NULL){
        return;
    }

    Node* first;
    Node* second;
    split(temp,first,second);
    mergeSort(first);
    mergeSort(second);
    head=merge(first,second);

}
void front(Node *&head,int d){
    Node *n=new Node(d);
    n->next=head;
    head=n;
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
Node *head=NULL;
    
    front(head,5);
    front(head,3);
    front(head,1);
    
    //sort()
    //we cannot use this function because linked list has not iterators
    mergeSort(head);
    cout<<"List 1 is :"<<endl;
    display(head);
    
   
    
    return 0;
}