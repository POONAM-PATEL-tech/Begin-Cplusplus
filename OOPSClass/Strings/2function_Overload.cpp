#include<iostream>
using namespace std;
//function overloading means we will give different number of argumens or different type of data type.
class displayDat{
    public:
    void display(int i){
        cout<<"Display integer i:"<<i<<endl;
    }

   void display(double i){
        cout<<"Display double i:"<<i<<endl;
    }

    void display(string i){
        cout<<"Display character i:"<<i<<endl;
    } 
    


};
int main()

{
    displayDat d;
    d.display(5);
    d.display(4.5);
    d.display("ajdhfjjd");
    return 0;
}