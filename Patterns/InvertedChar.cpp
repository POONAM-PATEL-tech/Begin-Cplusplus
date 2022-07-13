#include <iostream>
using namespace std;
 
int main()
{
    int i,j,k;
    char c='A';
    int n=5;
 
    for(i=0;i<=n;i++)
    {
       for(j=0;j<=i;j++)
       {
    cout<<" ";
       }
       for(k=n-i-1;k>=0;k--)
       {
           cout<<c;
           c++;
       }
       cout<<endl;
    }
return 0;
}