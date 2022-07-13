 
#include <bits/stdc++.h>
using namespace std;
class Employee
{
    // Access specifier
    public:
 
    // Data Members
    string geekname;
  int salary;
 
    // Member Functions()
    
};
 
int main() {
 
    // Declare an object of class geeks
    Employee obj1;
 
    // accessing data member
    obj1.geekname = "Abhi";
    obj1.salary=20;
 
    // accessing member function
    //obj1.printname();

    cout<<obj1.geekname<<endl;
    cout<<obj1.salary<<endl;
    return 0;
}