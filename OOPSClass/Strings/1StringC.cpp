#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
int main()
{
    //char Hel[6]={'H','e','l','l','o'};
    char Hel[6]="hello";
   
    char Hel1[6]="Hell";
    cout<<Hel;
    cout<<endl;
    cout<<Hel1;
    char str[40];
    
    cout<<endl;
   strcpy(str,Hel);
   cout<<str<<endl;
   strcat(str,Hel);
   cout<<str;
   cout<<endl;
   cout<<strlen(str)<<endl;
   cout<<strcmp(Hel,str);

    
    return 0;
}