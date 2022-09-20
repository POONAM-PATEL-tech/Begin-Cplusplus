#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void anagram(string s1,string s2){
    if(s1.length()==s2.length()){
        if(s1.compare(s2)==0)
            cout<<"Yes";
            cout<<"No";
        
    }else{
        cout<<"No";
    }
}
int main()
{
    string s1;
    cout<<"String 1"<<endl;
    cin>>s1;
    string s2;
    cout<<"String 1"<<endl;
    cin>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    anagram(s1,s2);
    return 0;
}