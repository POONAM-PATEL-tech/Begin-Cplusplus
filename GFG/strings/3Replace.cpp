#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="Hello World";
    string str2="Poonam";

    //front se 3 character ud jayenge aur Poonam add ho jayega
    str.replace(0,3,str2);

    for(int i=0;i<str.length();i++){
        cout<<str[i];
    }
cout<<endl;
    for(int i=0;i<str2.length();i++){
        cout<<str2[i];
    }


    cout<<endl;
    str2.replace(1,3,"hello");//1 se 3 tak replace karke
    for(int i=0;i<str2.length();i++){
        cout<<str2[i];
    }
  cout<<endl;

    string s3="GeeksforGeeks";
//from index 6 replace 5 characters and tkae only 3 characters from string  to alldfd
    s3.replace(6,5,"to alldfd",3);

    for(int i=0;i<str.length();i++){
        cout<<s3[i];
    }
  cout<<endl;
    string s4="HeyWorld!";

    //from index 4 replace 1 character and make 3 copies of ! 
    s4.replace(4,1,3,'!');
   for(int i=0;i<s4.length();i++){
    cout<<s4[i];
   }
    

    return 0;
}