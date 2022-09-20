#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
cout<<endl;
    for(int i=0;i<n;i++){
        cout<<x[i];
    }
cout<<endl;
    sort(x,x+n,greater<int>());

    for(int i=0;i<n;i++){
        cout<<x[i];
    }

    cout<<endl;
    return 0;
}