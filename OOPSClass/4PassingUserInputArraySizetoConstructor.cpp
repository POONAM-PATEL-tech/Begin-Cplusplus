#include<iostream>
using namespace std;
class Quizdata{
   private:
   string name;
   
   public:
   Quizdata(int Size){
   
    for(int i=0;i<Size;i++){
        cout<<"Enter in name of student"<<i+1<<":";
        cin>>name;
    }
   }
   void print(Quizdata[],int Size){
    for(int i=0;i<Size;i++){
        cout<<Quizdata[i];
    }
   }
};
int main()

{ 
     int Size;
     cin>>Size;
    Quizdata q(Size);
    q.print();
    
 
    return 0;
}