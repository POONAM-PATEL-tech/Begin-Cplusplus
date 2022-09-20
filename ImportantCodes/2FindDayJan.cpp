//Given two integers Y and B representing two years, the task is to find the day of the week in which 1st January of the year Y lies assuming that 1st January of the year B was a Monday.
/*
1.Total years lying between base year (B) and the year (Y) is equal to (Y – 1) – B.
2.Total number of leap years lying in between = Total years / 4
3.Total number of non-leap years in between = Total Years – Leap Years.
4.Total Days = Total Leap Years * 366 + Non-Leap Years * 365 + 1.
5.Therefore, the day of the 1st January of Y is Total Days % 7.
*/
#include<iostream>
using namespace std;
string findDay(int Y,int B){
    int leapYear,nonleapYear,totalDays,day;
    //Count years between years y and B
    Y=(Y-1)-B;
   //count leap years
   leapYear=Y/4;
   //Non Leap Years
   nonleapYear=Y-leapYear;
   //tottaldays
   //lying between Y and B
   totalDays=(nonleapYear*365)+(leapYear*366)+1;

   //Actual Day
   day=(totalDays)%7;

     if(day==0){
        return "Monaday";
     }else if(day==1){
        return "tuesday";
     }else if(day==2){
        return "Wednesday ";
     }else if(day==3){
        return "Thursday ";
     }else if(day==4){
        return "Friday";
     }else if(day==5){
        return "Saturday";
     }else if(day==6){
        return " Sunday";
     }

}
void calender(string month,int Y,int B){
    
    cout<<"Sun Mon Tue Wed Thu Fri Sat "<<endl;
   string day=findDay(Y,B);
     
   

}
int main()
{

    int Y=2022,B=1900; //Like assuming B was a Monday on 1st january
   
    calender("January",2022,1900);
    
    return 0;
}