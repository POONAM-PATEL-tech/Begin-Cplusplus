#include<iostream>
using namespace std;
class Time{
    int hour;
    int minute;

    public:
    Time(int h,int m){
        hour=h;
        minute=m;
        if(m>59){
            hour++;
        }

    }

    void display(){
        
        cout<<hour<<endl;
    }

};
int main()
{
    Time t(0,23);
    t.display();
    
    return 0;
}