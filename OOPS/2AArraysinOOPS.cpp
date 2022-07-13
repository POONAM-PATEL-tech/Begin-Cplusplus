#include <iostream>
using namespace std;
class employee{
    int id;
    char name[301];
    
    public:
    
     
    void setdata();
    void getdata();
    
};


void employee::setdata(){
   
    
    cout<<"id of the employee"<<endl;
    cin>>id;
    cout<<"name of the employee:"<<endl;
    cin>>name;                     
}
void employee::getdata(){
    cout<<"Print id:"<<id<<endl;
    cout<<"Print name:"<<name<<endl;
}
int main(){
    employee emp[30]; //30 is the maximum limit of employee
    int n;
    cout<<"Give the number of employee which data we have to print:"<<endl;
    cin>>n;
    
    
    for(int i=0;i<n;i++){
         cout<<i+1<<" "<<"No of employee:"<<endl;
        emp[i].setdata();
    }
    for(int i=0;i<n;i++){
        emp[i].getdata();
    }
  /*  employee emp; //one member 
    emp.setdata(); //Input data
    emp.getdata();//Access data
//But we can only access one member data if we want another member data we have to write emp.setdat(),emp.getdata()
//again and again so for this solution we can use array so let's see.
*/
    return 0;
}