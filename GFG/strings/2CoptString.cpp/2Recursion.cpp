#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void mycopy(char s1[],char s2[],int index=0){
    //copying each  character from s1 to s2

    s2[index]=s1[index];
    if(s1[index]=='\0')
    return ;

    mycopy(s1,s2,index+1);
}
int main()
{
    char s1[100]="GeeksForGeeks";
    char s2[100]="";
    mycopy(s1,s2);

    cout<<s2;
    return 0;
}