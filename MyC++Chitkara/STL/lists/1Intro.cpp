#include<iostream>
#include<list>
using namespace std;

//list has not fast  random access
//they had different access
//you can not access direct any element at this.
//Elements can be insert at any place and remove from any place
//you can use push_back and push_front .
//pop_back ,pop_front
// we donot know the position of elements
void display(list<int> &L){
    list<int>::iterator it;
    for(it=L.begin();it!=L.end();it++){
        cout<<*it<<" ";//Iterator is handled like a pointer
    }
    cout<<endl;
}

void display1(list<int> &L){
    list<int>::iterator it;
    for(it=L.begin();it!=L.end();it++){
        cout<<*it<<" ";//Iterator is handled like a pointer
    }
    cout<<endl;
}


int main()
{
    list<int> L;
    list<int> M(5);//here you have given size so you do not need to write push_back you can use iterator here
int size,element;
cout<<"Enter size of list:"<<endl;
cin>>size;
//This loop is  not like indexing
for(int i=0;i<size;i++){
    cout<<"Enter element "<<i+1<<"th of list:"<<endl;
    cin>>element;
     L.push_back(element);  //4->3->2->1
}

//L.pop_back(); //3->2->1
//L.pop_front();4->3->2
L.remove(2);//it will remove all the 2 from the list
display(L);


list<int>:: iterator ir;
ir=M.begin();
*ir=5;
ir++;
*ir=7;
ir++;
*ir=9;
display1(M);
L.sort();
M.sort();
display(L);
display1(M);
L.merge(M);
display(L);
    return 0;
}