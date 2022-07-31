#include<iostream>
using namespace std;
#define N 5
class ArrayInput{
   int x; //This will be the element
    public:
   /*ArrayInput(int ele){
      x=ele;
   }*/
   /*ArrayInput(){}*/
   //we can run all of the array like this without cobstructor
   void input(){
    cin>>x;
   }
   void output(){
    cout<<x;
   }
};
int main()
{
  ArrayInput *Arr=new ArrayInput[N];
  //callng function input

  for(int i=0;i<N;i++){
    Arr[i].input();
  }

  //calling function output
 for(int i=0;i<N;i++){
    Arr[i].output();
 }
    return 0;
}