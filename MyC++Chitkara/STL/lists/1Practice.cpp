#include<iostream>
#include<list>
using namespace std;

class student{
    public:
    string name;
    int roll;
    student(string n,int r){
        name=n;
        roll=r;
    }

};

int main(){
    list<student> li;
    li.push_back(student("s1",1));
    li.push_back(student("s2",2));
    li.push_back(student("s3",3));
    li.push_back(student("s4",4));
    li.push_back(student("s5",5));
    int r;
    cout<<"Enter the roll number : ";
    cin>>r;
    list<student> :: iterator it;
    for(it=li.begin(); it!=li.end(); it++){
        if(it->roll==r)cout<<"Name = "<<it->name<<endl;
    }
    string na;
    cout<<"Enter the name : ";
    cin>>na;
    for(it=li.begin(); it!=li.end(); it++){
        if(it->name==na)
        cout<<"Roll no. is "<<it->roll<<endl;
    }
    return 0;
}