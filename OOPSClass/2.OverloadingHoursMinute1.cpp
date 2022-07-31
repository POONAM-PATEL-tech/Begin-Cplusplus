#include<iostream>
using namespace std;
class Time{
    int hour;
    int minute;

    public:
    
    Time(int h,int m){
        hour=h;
        minute=m;
    }
    void display(){
        cout<<"Time is"<<hour<<":"<<minute<<endl;
    }
    Time operator ++(){
        ++minute;
        if(minute>=60){
            ++hour;
            minute-=60;
        }
        return Time(hour,minute);
    }

};
int main()
{   
    Time T(11,23);
    T.display();
    T.operator++();
    T.display();
    return 0;
}