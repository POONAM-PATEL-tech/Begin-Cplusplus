#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data=value;
        prev=NULL;
        next=NULL;

    }

};

void push(Node*& head,int data){
 Node *n=new Node(data);
    n->next=head;
    head=n;

}

bool palindrome(Node* head){
    string ans="";
    Node *temp=head;
    if(head==NULL){
        return true;
    }
    while(temp!=NULL){
        ans+=to_string(temp->data);
        temp=temp->next;
    }

    string x=ans;
    reverse(x.begin(),x.end());
    return x==ans;

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
 Node *head=NULL;
 push(head,1);
 push(head,2);
 push(head,1);
 int result=palindrome(head);
 if(result==1){
    cout<<"palindrome"<<endl;
 }else{
    cout<<"Not Palindrome"<<endl;
 }
 display(head);

    return 0;
}