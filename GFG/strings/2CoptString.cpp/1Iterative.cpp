#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//You have to just copy one string to another

void mycopy(char s1[],char s2[]){
    int i=0;
    //Always remember it has a null value at the end
    //
    for(i=0;s1[i]!='\0';i++)
    s2[i]=s1[i];

    //if you do not include it then it will not give any error
   // s2[i]='\0';
}

int main()
{

    char s1[100]="GeeksForGeeks";
    char s2[100]="";
  mycopy(s1,s2);
  cout<<s2;

    return 0;
}