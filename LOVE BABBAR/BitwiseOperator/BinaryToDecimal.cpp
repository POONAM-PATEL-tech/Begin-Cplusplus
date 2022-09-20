#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0){
        int remainder=n%10;//givr the last digit
        //you can also do
        //int bit=n%10;//only in this case because we hve only 0 and 1
        if(remainder==1){
            ans=ans+pow(2,i);

        }
        n=n/10;
        i++;

    }
    cout <<ans;
    cout<<(84^14);
    return 0;
}