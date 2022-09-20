#include<iostream>
using namespace std;
class A{
    
     public:
     int x;

    void display(){
         try{
        if(x<0){
            throw x;
        }
       else if(x==0){
            throw 'x';
        }
        else{
            throw 1.0;
        }
    }
    catch(int x){
        cout<<"Negative integer"<<endl;
    }
    catch(...){
        cout<<"reconsider"<<endl;
    }
    }

};
int main()
{

    A a1;
     cin>>a1.x;
    a1.display();

    return 0;
}