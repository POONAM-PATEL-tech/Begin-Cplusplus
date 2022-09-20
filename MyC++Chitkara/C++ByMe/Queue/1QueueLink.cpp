#include<iostream>
using namespace std;
class Node{
public:
int data;

Node* next;
//constructor
Node(int data){
    this->data=data;
   
    next=NULL;
}
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
       
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node*& tail,Node*& head,int data){
    //if head NULL
    //means empty list.
    if(head==NULL){
      Node* temp=new Node(data);
      head=temp;
      tail=temp;
    }else{
 Node* temp=new Node(data);
 temp->next=head;
 
 head=temp;  
    } 
}

void insertAtTail(Node*& tail,Node*& head,int data){
    if(tail==NULL){
        Node* temp=new Node(data);
        tail=temp;
        head=temp;
    }else{
    Node* temp=new Node(data);
    tail->next=temp;
    
    tail=temp;
    }
}

void  deleteNode(Node*&head,int position){
    //deleting first Nod
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }else{
           //deleting last Node or middle Node
           Node* curr=head;
           Node* prev=NULL;
           int cnt=1;
           while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
           }
           curr->prev=NULL;
           prev->next=curr->next;
           curr->next=NULL;
          
            
    }
    
   

}

/*void insertAtPosition(Node*& head,Node*& tail,int position,int data){
    if(position==1){
        insertAtHead(tail,head,data);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp->next==NULL){
        insertAtTail(tail,head,data);
        return;
    }

    //insert At any position
    Node* nodeToInsert=new Node(data);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp; 
    
}*/
int main()
{

    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    
    cout<<"Length of list"<<getLength(head)<<endl;

    /*insertAtHead(tail,head,11);
    insertAtHead(tail,head,12);
    print(head);*/
    
    insertAtTail(tail,head,25);
    print(head);
    /*insertAtPosition(head,tail,1,45);
    insertAtPosition(head,tail,6,34);
    insertAtPosition(head,tail,3,67);
    insertAtPosition(head,tail,8,544);

    print(head);*/
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;
    return 0;
}