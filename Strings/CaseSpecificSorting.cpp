#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  string caseSort(string str,int n){
    vector<char> lower;
    vector<char> upper;
    for(int i=0;i<n;i++){
        if(str[i]>='a' && str[i]<='z')
        lower.push_back(str[i]);
        else
        upper.push_back(str[i]);
    }
    //sorting both vectors
    sort(lower.begin(),lower.end());
    sort(upper.begin(),upper.end());

    //i=0 :lower[0]  , j=0 :upper[0]
   int i=0; int j=0;
    for(int k=0;k<n;k++){
        if(str[k]>='a' && str[k]<='z'){
            str[k]=lower[i];
            i++;
        }else if(str[k]>='A' && str[k]<='Z'){
            str[k]=upper[j];
            j++;
        }
    }
    return str;
}
int main()
{

    string str;
    cin>>str;
    int n=6;

    cout<<caseSort(str,n);
    
    return 0;
}