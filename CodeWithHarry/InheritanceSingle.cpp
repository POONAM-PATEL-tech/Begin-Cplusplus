#include<iostream>
using namespace std;
class Parent{
    public:
    int p_id;
    Parent(){
        cout<<"Access from Child"<<endl;
    }
};
class Child:public Parent{
    public:
    int c_id;
    

};

int main(){

    Child obj1;
    
   // obj1.c_id=7;
    //obj1.p_id=6;
    //cout<<"Child id"<<" "<<obj1.c_id<<endl;
    //cout<<"Parent id"<<" "<<obj1.p_id<<endl;
    return 0;
}