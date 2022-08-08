#include<iostream>
using namespace std;
//Reusibility is important
//we can reuse class and add additional features
//saves time and money
//reusing tested and debugged class .

//To reuse code  we will use inheritance.
//Existing Class->Base Class

//Private ,Protected and public 
//We can use Protected and public.
//Types of inheritance-->
//Single level (1 base class ad 1 derived class)
//Multilevel (1 base->1 derved->2 derived class)//man -> child -> grandson
//Hierachal(1 base class 2 derived class) university ->teacher student
//Multiple (//2 base class 1 derived class).//bowler batter ->team
//Hybrid class(Multiple and Multilevl both). // indian team->bowler batter -> Pakistan team (1 class se 2 derived class then one more base class).
class student{
    public:
    string name;

    int id;
     
     student(){};
     
     

     void display(){
        switch(id){
            case 1:
            cout<<"poonam"<<endl;
            break;
            case 2:
            cout<<"Prerna"<<endl;
            break;
            case 3:
            cout<<"dsfkjf"<<endl;
            break;
            case 4:
            cout<<"dfhgh"<<endl;
            break;
        }
     }

     


};

//modes depend on datatypes 
//Public ,protected and private
//you can only access public or protected


class university: public student
{

    public:
    int semester=5;
    
  university(int id){
      
        this->id=id;
  }

    void print(){
      if(id==1){
        
        cout<<id<<" "<<semester<<" "<<endl;
      }else if(id==2){
       
        cout<<semester<<" "<<id<<endl;
      }
      else{
        cout<<"Not a student"<<endl;
      }
    }



};   

class faculty: public student
{

    public:
    string facultyname="abc";
    
  faculty(int id){
      
        this->id=id;
  }

    void print1(){
      if(id==1){
        
        cout<<id<<" "<<facultyname<<" "<<endl;
      }else if(id==2){
       
        cout<<facultyname<<" "<<id<<endl;
      }
      else{
        cout<<"Not a faculty"<<endl;
      }
    }



};  



int main()
{
     university s(3);
     s.display();
     s.print();
     faculty s2(1);
     s2.display();
    s2.print1();
    
    

    
     
     
    

    return 0;
}