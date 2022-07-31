#include<iostream>
using namespace std;

    //Trying to insert an array
    class Employee{
        int id;
        char name[30];
        public:
        //Declaration of function
        void getdata();

        //Declaration of function 
        void putdata();
    
      
};

void Employee::getdata(){
    cout<<"Enter Id:";
    cin>>id;
    cout<<"Enter Name:";
    cin>>name;
}

//Defining the function outside the class

void Employee::putdata(){
    cout<<id<<" ";
    cout<<name<<" ";
    cout<<endl;
}
int main()
{
    //This is an array of objects having 
    //maximum limit of 30 employess
  Employee emp[30];
  int n,i;
  cout<<"Enter Number of Employee";
  cin>>n;
  //Accessing the function
  for(i=0;i<n;i++){
    emp[i].getdata();
  }

  for(i=0;i<n;i++){
    emp[i].putdata();
  }
   

    return 0;
}