#include<iostream>
#include<map>
#include<list>
using namespace std;

class Person{
    public:
    string name,religion,email;
    int age,mobile;
    char gender;
    Person(string name,char gender,int age,string email){
        this->name=name;
        this->gender=gender;
        this->age=age;
        // this->religion=religion;
        // this->mobile=mobile;
        this->email=email;
    }
    void display(){
        cout<<"Name : "<<name<<" Gender : "<<gender<<" Email Address : "<<email<<endl;
    }
};

int main(){
    
    Person p1("person1",'M',18,"person1@gmail.com");
    map<Person,char> m;
    m[p1]='M';
    

    return 0;
}