#include<iostream>
using namespace std;
//Three types of constructor :

class integer{
    
    int x,y;
    
    //Default cunstructor
    public:
    integer(){
        x=10;
        y=5;
        cout<<"Object is created"<<endl; 
    }
    //It is destructor (when all the work will done of object then it will destroy)
    ~integer(){
        cout<<"Object is destroyed or memory is freed"<<endl;
    }
    void display(){
        cout<<"1st Integer is:"<<x<<endl; 
        cout<<"2nd Integer is:"<<y<<endl;
    }
    void add(){
        cout<<"Add"<<" "<<x+y<<endl;
    }
};

int main()
{
    integer I;
    I.display();
    I.add(); 


    return 0;
}