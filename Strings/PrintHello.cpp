#include<iostream>
using namespace std;
int main()
{
    string str="hello";
    for(int i=0;i<str.size();i++){
        if((i==0) || (i==str.size()-1)){
          str[i]=  toupper(str[i]);
            
        }
    }
    for(int i=0;i<str.size();i++){
        cout<<str[i];
    }
    return 0;
}