#include<iostream>
using namespace std;
class Geeks{
    public:
   int salary ;
  string name;

  void printname();
  void printsal(){
      cout<<"Geeks salary"<<salary<<endl;
  }

  


};
void Geeks::printname(){
      cout<<"Geek"<<name<<endl;
  }
int main(){

    Geeks obj1;
    obj1.name="Poonam";
    obj1.salary=1000;
    //call print name()
    obj1.printname();
    cout<<endl;
    obj1.printsal();
    cout<<endl;

    return 0;
}