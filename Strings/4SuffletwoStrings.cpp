#include<iostream>
using namespace std;
#include<bits/stdc++.h>

bool checkSuffledSubString(string str1,string str2){
     int n=str1.length();
     int m=str2.length();
     //Return false if length of string A is greater than length of string B
     if(n>m){
        return false;
     }
     else{
        //sort string A
        sort(str1.begin(),str1.end());

        //Traverse String B
        for(int i=0;i<m;i++){
            //Return false if (i+n-1>=m)
            // doesn't satisfy
            //it is just check the length for traversing.
            if(i+n-1>=m)
            return false;
        
        //Initialize the new string
        string str="";

        //Copy the characters of string B in str till length n
        for(int j=0;j<n;j++){
            str.push_back(str2[i+j]);
        }
        //sort the string str

        sort(str.begin(),str.end());

        //return true if sorted 
        //string of "str" & sorted
        //string of "A"  are equal
        if(str==str1)
        return true;

        }
    
     }
     
}

int main()
{

    //Input str1
    cout<<"Str1:";
    string str1="geekforgeeks";
    //cin>>str1;
    cout<<"Str2:";
    string str2="ekegorfkeegsgeek";
   // cin>>str2;
   

   bool a=checkSuffledSubString(str1, str2);
   
   if (a)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;

    return 0;
}