#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Node{
    public:
    int data;
    Node* next;
};


int main(){
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;

    //allocate 3 nodes in the heap
    head=new Node();
    second=new Node();
    third=new Node();

    //Three blocks have been allocated dynamically
    //Assign the value to head
    head->data=1;
    //Link first node to second
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    
    return 0;
}