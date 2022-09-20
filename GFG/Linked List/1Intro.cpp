/*
Like arrays,Linked List is a linear data structure. Linked list elements are not stored at a contiguous location;the elements are linked using pointers.
They include a series of connected nodes.Here,each node stores the data and the address of the next node.

-->   Arrays has some limitation
1.Arrays size is fixed.
2.Insertion and deletion is expensive 

---> Advantages of linked list over arrays
-- Dynamic Array.
-- Ease of Insertion/Deletion.

-----> Drawbacks Of linked list:
1.Random access is not allowed means we have not any type of indexing here.
We have to call seqentially.
2.Extra memory space is needed for a pointer.
3.So not cache friendly. Since array elements are contiguous locations, there is locality of reference which is not there in case of linked lists.


----> Representation of Linked Lists:

A linked list is represented by a pointer to the first node of the linked list.
The first node is called the head of the linked list.If the linked list is empty,then the value of the head points to NULL.

>> Each node in a list consists of at least two parts:

. A data item(we can store integer,strings,or any type of data).
. Pointer (Or Reference) to the next node(connects one node to another) or An address of another node.

*/
//class is uder defined data type which has data and address of another node




//Only head is sufficient to traverse the all linked list

//Time Complexity
/*

Time Complexity    Worst Case      Average Case
Search             O(n)            O(n)
Insert             O(1)            O(1)
Deletion           O(1)            O(1)
*/
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};
void printList(Node *n){ //it is pointing the head
    while(n!=NULL){
        cout<<n->data<<"->";
        n=n->next;
    }
    cout<<"NULL";
}

int main()
{

    Node *head=NULL;
    Node *second=NULL;
    Node *third=NULL;

    //allocate the memory dynamically.
    head=new Node();
    second=new Node();
    third=new Node();
    //Now you can also write like this

    Node *fourth=new Node();

    //Now give data and connect with the next node
head->data=1;
head->next=second;

second->data=2;
second->next=third;

third->data=3;
third->next=fourth;

fourth->data=4;
fourth->next=NULL;

printList(head);

    return 0;
}