#include<iostream>
using namespace std;


//All the base classes can be accessed by driven class.
class Vehicle{
    public:
    Vehicle(){
        cout<<"This is a Vehicle"<<endl;
    }

};

class FourWheeler{
    public:
    FourWheeler(){
        cout<<"This is a 4 Wheeler Vehicle\n";
    }

};

class Car:public Vehicle,public FourWheeler{
   
    public:
    Car(){
        cout<<"Done"<<endl;
    }
    int id;


};



int main(){
Car obj;
    obj.id=10;
    cout<<"ID"<<" "<<obj.id<<endl;
    return 0;
}