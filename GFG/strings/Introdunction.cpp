#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    //C++ has in its defination a way to represent a sequence of characters as an object of the class.
    //This class is called std:: string. String class stores the characters as a sequence

    //Operations on strings

    //  1. getline() --> the function is used to store a stream of characters as enteres by the user in the object memory.


  //A. Input function()
    string s;
    getline(cin,s);
    //it will take the characters also after the space
    cout<<"getline"<<s<<endl;

    string st;
    cin>>st;
    //it will not take the string after space it will terminate


    cout<<st<<endl;


    // 2.push_back()
    //This function is used to input a character at the end of the string.

    s.push_back('s'); 
    cout<<"push_back"<<s<<endl;

   // 3.pop_back()
   //This function is used to delete the last character from the string

   s.pop_back();
   cout<<"pop_back"<<s<<endl;


 

 // B. Capacity Functions



 //capacity : it will give the maximum capacity of the string Additional space is allocated so that when the new characters  are added to the string,operation can be done efficiently.

 cout<<s.capacity()<<endl;//It will give you a capacity
 cout<<s.length()<<endl;
 s.resize(2); //it means length will be 2.
 cout<<s.length()<<endl;
 cout<<s.length()<<endl;
 s.shrink_to_fit(); //after shrink it has only 15 capacity
 cout<<s.capacity()<<endl;

 //Iterator function
 //begin(),end(),rbegin(),rend()
 //Declaring iterator 
 string str="Geeksforgeeks";
 
 string::iterator it;

 //Displaying string
 cout<<"the string using forward iterators is:"<<" ";
 for(it=str.begin();it!=str.end();it++){
    cout<<*it;



 }
 cout<<endl;

//Declaring reverse iterator
string::reverse_iterator rit;
 //Displaying reverse string
 for(rit=str.rbegin();rit!=str.rend();rit++){
    cout<<*rit;
    
 }
cout<<endl;



//4.Manipulating Functions
string str2="Poonam";
char ch[80];
//I am just going to copy the string to char array
str2.copy(ch,5,0);

//Displaying char array
cout<<"The new copied character array is: ";
cout<<ch<<endl;

//Displaying strings before swapping
string::iterator it1;

 //Displaying string
 cout<<"the string using forward iterators is:"<<" ";
 for(it1=str.begin();it1!=str.end();it1++){
    cout<<*it1;
 }
 cout<<endl;


 string::iterator it2;

 //Displaying string
 cout<<"the string using forward iterators is:"<<" ";
 for(it2=str2.begin();it2!=str2.end();it2++){
    cout<<*it2;
 }
 cout<<endl;

 //using swap() to swap string content
 str.swap(str2);
 string::iterator it3;

 //Displaying string
 cout<<"Swapped String "<<endl;
 cout<<"the string using forward iterators is:"<<" ";
 for(it3=str.begin();it3!=str.end();it3++){
    cout<<*it3;
 }
cout<<endl;

string::iterator it4;

 //Displaying string
 cout<<"the string using forward iterators is:"<<" ";
 for(it4=str2.begin();it4!=str2.end();it4++){
    cout<<*it4;

 }

    return 0;
}