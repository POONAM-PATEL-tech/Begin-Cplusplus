                                   //Constructor
 //Object created then it will call constructor by default every object will call default constructor
 //which has not any return type. //It will invoked at the time of object creation
 //Default Constructor //Pehle se jo hamare pass hoga // BTS | Hero Ram // Ram.Hero(); //it will the defaultConstrucor
 //Define default Constructor
 /*Hero{
    cout<<"Constructor Called";
 } */ 
 //When we use our self made constructor then this default constructur jo pehle se hai wo delete ho jata hai

#include<iostream>
using namespace std;
class Hero{
    int health;
    string behave;
    //You should always write constructor at public   
    
    public:
     Hero(){
        cout<<"Called Default Constructor"<<endl;
    }
    //2.Parametrized Construcor.
    Hero(int health){
        cout<<"this->"<<this<<endl;
        this->health=health;
    }

    //3.Copy constructor
    //You will have to use & to remove a loop
    Hero(Hero &temp){ 
        this->health=temp.health;
    }
    char level;

    void setHealth(int h){
        health=h;
    }

    int getHealth(){
        return health;
    }
    void print(){
        cout<<health<<endl;
        
    }

};

int main()
{
    Hero Ram; //As you can see when object is created ten constructor will call.
   // cout<<"Hi";
   // Ram.setHealth(5);
   // cout<<Ram.getHealth();//You can also print like this
   //  cout<<endl;
   // Ram.print();//And also you can make a function

   //You can give different object name and call different type of constructors.
   //Like function overloading you can also do cunstructor overloading but object name should be differnet.
    Hero Shyam(10);
    cout<<endl<<"The address will be same for this and ramesh "<<endl;
    cout<<"Address Of Ram"<<&Shyam<<endl;
    Hero Ritesh(Shyam);//How to call copy Cunstructor
    Ritesh.print();//So it will indicate the address of Shyam and take the health value from there.
    
    
     
    








  







    return 0;
}