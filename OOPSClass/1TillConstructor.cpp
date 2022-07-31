#include<iostream>
using namespace std;
//1.we have object which has state or properties and behaviour
    //Hero is like a object
//which has behaviour of attack and defense and more like this.

//Class -> It is a userdefined datatype which has a type of object
//Object-> Instance of class 
//Instance is a data member at a class which define the property of object.
//class Hero{
   // int health; //we cannot call these data members directly because  
   // int level;//by defualt they are private.

   /*public:
   int health; //at this time both of them will throw the garbage value.
   char level;//it will also. //beacause here there is not any value.
   */

  //IF YOUR CLASS IS EMPTY
  //means here will be nothing
 // public:
 // int health;//Instances
 // char level;
  
 //By default we have private instances.
 //There are three type of access modifier
 //1.Public 2.Private 3.Protected
//But when access modifier are privates then what will happen??
//Then  you cannot get and set the value of private .
//So you can build the function for this
//private:
//int health;
//string behave;
//public:
//char level;
// //we can modify the value of private modifier
//void setHealth(int h){
//    health=h;
//}

//We can also use conditions at setter
/*void setHealth(int h,string c){
    if(c=="Attack"){
    health=h;
    }
    
}*/
/*void setHealth(int h,string c){
    health=h;
    behave=c;
    
}*/


//By this we can get the value.
/*int getHealth(){
    return health;
    
}*/

/*string getBehave(){
    return behave;
}*/
//It will print the modify value of  health.
/*void print(){
    cout<<health<<endl;
    cout<<behave<<endl;
}*/

  

//};

//int main(){
   // Hero Ram;
    
   // cout<<sizeof(Hero)<<endl;//if your class is empty then 1 bytes will be the size of class.//
    //If it has members then the answer will be sizeOf(sizeof(health)+sizeof(level)) but here you will get 8 bytes not 5 bytes why??
    //So answer is this there is a padding means the compiler is greedy if int has 4 bytes and char has 1 then it will 
    //as much memory which is greatest this is a greedy behaviour of compiler. 
    //cout<<sizeof(Ram.health)<<endl;//size of this is 8
    //cout<<sizeof(Ram.level)<<endl;//size of this is 1.
   // Ram.health=70;  //It will give you the 70. when it is public
    //cout<<Ram.health;
    //But when access modifier are privates then what will happen??
    //But when it is private ->

   // Ram.setHealth(10,"Attack");
    //cout<<Ram.getHealth(); //Modify value of health
    //If you do not write a print function then you have to call all the  get function manually to print the values.


    //This print function called
  //  Ram.print();//10

    //Dynamically allocation of memory
    //int *i=new int //this is mormal
    //But for object
   // Hero *b=new Hero;
    //(*b).getHealth();//I have goten error with this pointer
    //(*b).getBehave();
    
    //(*b).print();
   // b->setHealth(20);//20  //if tou print it.
     //So I am going to do it with this ->.
   // b->setHealth(20,"Defense");//20 defense
   // b->print(); // 

//..................................................................................................................................//


    

  //  return 0;
//}