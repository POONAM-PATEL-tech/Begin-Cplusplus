#include <iostream>
using namespace std;   // class-> Basic template for creating objects.  
class employee{
    private:     //if we want to access private data then you have to made  two function set and get data.
    int d,e;
    public: 
        //This public is neccessary to be here otherwise all function will be private and we will not be
                 //not be able to get values. and we want only to private d and e here.
    int a,b;   //These are thepublic values and we can access these from anywhere .             
    void setdata(int d1,int e1){
        d=d1;
        e=e1;
    }
    void getdata(){
        cout<<"These are set and get because of private:"<<endl;
        cout<<d<<" "<<e<<endl; 
        cout<<"These are set at main function without any set function and get"<<endl;
        cout<<"a"<<" "<<a<<" "<<"b"<<" "<<b<<endl;
    }

};
int main(){
    cout<<"these values if for Poonam"<<endl;
    employee Poonam;   
     // We gave Poonam it is the first object and we can write more objects like this.
    
    employee Madhav;
    Madhav.a=90;  //These are public so we can set like this.
    Poonam.a=45;
    Poonam.b=100;
    Madhav.b=20;


    Poonam.setdata(12,13);
    Poonam.getdata();
    Madhav.setdata(1,2);
     cout<<"These values is for Madhav"<<endl;
    Madhav.getdata();
    return 0;
}