#include<iostream>
using namespace std;

class error{
    int er;
    public:
    error(int e){
        er=e;
    }
 void display(){
        cout<<"Error :"<<er<<endl;
    }

};
int main()
{
    int x;
    cin>>x;
    try{
        if(x<0){
            throw error(x);
        }else{
            cout<<"enjoy";
        }
    }
    catch(error e){
        e.display();
    }
    return 0;
}