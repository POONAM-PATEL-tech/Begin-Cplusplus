#include<iostream>
using namespace std;
class Employee{
    private:
    int pass;

    public:
    string name;
    int sal;

    Employee(string name,int s,int pas){
        this->name=name;
        this->sal=s;
        this->pass=pas; 

    }

    void get()
    {
        cout<<"The password"<<this->pass<<endl;

    }

    void print(){
        cout<<"print details"<<this->name<<" "<<this->sal<<endl;
    }
};
int main(){
    Employee Poonam("Poonam",12,3545);
    Poonam.get();
    Poonam.print();


    

    return 0;

}