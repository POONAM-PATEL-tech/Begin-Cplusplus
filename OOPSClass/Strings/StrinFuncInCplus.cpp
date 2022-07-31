#include<iostream>
#include<string>
using namespace std;
class greeting{
    public:
    string str1="hello";
    string str2="Hello";
     string str3;
     string str4;
    void stringO(){
       str3=str1;
        cout<<"Copied"<<" "<<str3<<endl;

        str4=str1+str2;
         cout<<"Concate"<<" "<<str4<<endl;
         

         cout<<"length"<<" "<<str4.length()<<endl;
    }
};
int main()
{  
    greeting j;
    j.stringO();
    return 0;
}