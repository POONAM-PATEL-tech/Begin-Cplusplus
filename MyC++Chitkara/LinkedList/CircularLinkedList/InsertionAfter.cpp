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

void front(Node*& last,int val){
    Node* n=new Node(val);
    
    n->next=last->next;
    last->next=n;
    last=n;

}

void display(Node*& last){
    Node *temp=last;
    do{
        temp=temp->next;
        cout<<temp->data<<" ";
    }
    while(temp!=last);
    cout<<endl;

}
int main()
{
    Node *last=new Node(5);
    last->next=last;
    front(last,1);
    front(last,2);
    front(last,3);
    display(last);
  
    return 0;
}