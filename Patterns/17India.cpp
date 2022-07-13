#include<iostream>
using namespace std;
int main()
{
    char s[]="INDIA";
    for(int i=0;s[i];i++){
        for(int j=0;j<=i;j++){
            cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}