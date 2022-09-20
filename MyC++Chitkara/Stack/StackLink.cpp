#include<iostream>
using namespace std;
//you will do push pop from head .
//So do push pop from front so time complexity will be O(n).
class StackNode{
    public:
    int data;
    StackNode* next;

   /* StackNode(int d){
        data=d;
        next=NULL;
    }*/
};
void display(StackNode *top){
    StackNode* temp=top;
    cout<<"";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
/*bool empty(StackNode*& top){
    if(top==NULL){
        return false;
    }
}*/
int empty(StackNode *& top){
    return !top;
}
void push(StackNode *&top,int d){
   /* if(!empty(top)){
        cout<<"Stack Overflow"<<endl;
        return;
    }*/
    StackNode *n= new StackNode();
    n->data=d;
    n->next=top;
    top=n;
    cout<<d<<" ";
}

void pop(StackNode*& top){
    if(empty(top)){
        cout<<"StackUnderflow\n"<<endl;
        return;
    }
    StackNode* n=top;
    top=top->next;
    delete n;

}

void Top(StackNode*& top){
    if(empty(top)){
        cout<<"No element in Stack\n"<<endl;;
        return;
    }
    cout<<"Top element is:\n"<<top->data<<endl;

}
int main()
{
   StackNode* top;
   push(top,1);
   push(top,2);
   push(top,3);
   push(top,4);
   push(top,5);
   Top(top);
   pop(top);
   Top(top);

   while(!empty(top)){
    Top(top);
    pop(top);
   }
    return 0;
}