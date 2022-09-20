#include<iostream>
using namespace std;
class Music{
  public:
//abstract class because pure virtual function
  virtual void display()=0;
  void play(){
    cout<<"Playing..."<<endl;
  }
};
class MusicDevice :public Music{
     public:

     void display(){
        cout<<"ExtraBase"<<endl;
     }
     void device(){
        cout<<"Laptop"<<endl;
     }
};

class MusicPlayer{
    //we have made an object
    MusicDevice md;
     public:
     void display(){
        cout<<"Super Extra Base"<<endl;
     }
     void playMusic(){
        md.device();
        md.display();
        md.play();
     }

      
      

     
};
int main()
{

    //Base class
    MusicDevice d;
    d.display();
  

  //Independent class
    MusicPlayer mp;
    mp.display();
    mp.playMusic();

   //Derived class
    Music *shapeptr;
    shapeptr=&d;
    shapeptr->display();
  

  //Because MusicPlayer is not inherited with Base class 
  //  shapeptr=&mp;
   // shapeptr->display();

    

    

    return 0;
}
