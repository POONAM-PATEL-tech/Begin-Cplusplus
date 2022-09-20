#include<iostream>
using namespace std;
//In tempalates we will make a class which take all type of data types.


//template<class Temp>{
   
      template<class T>
      T maxi(T x,T y){
        return (x>y) ? x:y;
      }

      //we have template on above function not below finction

      int maxi(int x,int y){
        return(x>y)?y:x;
      }
double maxi(double x,double y){
    return(x>y)? y:x;
}

int main()
{ 
  //cout<<maxi(2,3.1);//we cant write this type we have to write same type of datatype
  cout<<maxi(2,3)<<endl;//if we specify two functions for int type then it will take best function so , it is given 2 at first.
  cout<<maxi(2,3)<<endl;
  cout<<maxi<int>(2,3)<<endl;//If I write like this then it will choose template
  cout<<maxi(2.2,3.3)<<endl;
    

    //
    return 0;
}