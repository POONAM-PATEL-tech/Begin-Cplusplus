#include<iostream>
using namespace std;
//you can made anything a head.
//you have to put a condition and you can start from anywhere.
//Costructor se ek node banayenge.
//we are writing last not head 
//last->next will be always head

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