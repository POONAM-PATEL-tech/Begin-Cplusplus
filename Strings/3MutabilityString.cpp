#include<iostream>
using namespace std;
int main()
{
    string str="Hello World";
    str[6]='p';//just remember this should be in single quote.

    cout<<str;
    cout<<endl;

    string str1="Poonam Patel.";
    str1.front()='p';//it will change first word.
    str1.back()='!';//it will change last word.
    cout<<str1<<endl;
    
    return 0;
}