#include<iostream>
#include<cstring>
using namespace std;

//Default Copy Construcor==Shallow Constructor

class Hero{
    
    public:
   Hero(){
    cout<<"Simple Constructor Called"<<endl;
    name=new char[100];
   }
   char* name;
   void setName(char name[]){
    strcpy(this->name,name);
   }
   void print(){
    cout<<"Name:"<<this->name<<" ";  //You can print simply name which is a char value intialized initial and you can call this->name.
   }
};
int main()
{
    Hero hero1;
    char name[7]="Poonam";
    hero1.setName(name); //First we have Poonam .
    hero1.print();
    cout<<endl;

    //If you want to change name
    Hero hero2(hero1); //It is a copy .
    hero1.name[0]='G';//Here I have changed G at hero 1 at the place of P.
    hero1.print();//Goonam
    hero2.print();//And it will also print Goonam because it is also indicates the address of hero1 .
    return 0;
}