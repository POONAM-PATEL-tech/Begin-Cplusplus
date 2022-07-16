#include<iostream>
using namespace std;
int allindex(int a[],int n,int x,int ans[]){
    if(n<=0){
        return 0;
    }
    //getting recursive number
   int smallans= allindex(a+1,n-1,x,ans);
   if(a[0]==x){
    for(int i= smallans-1;i>=0;i--){
        ans[i+1]=ans[i]+1;

    }
   ans[0]=0;
   smallans++;

   }else{
    for(int i=smallans-1;i>=0;i--){
        ans[i]=ans[i]+1;
    }
   }
   return smallans;

    
}
void allIndices(int a[],int n,int x){
    int ans[n];
    int sizeOfsmallans=allindex(a,n,x,ans);
    for(int i=0;i<sizeOfsmallans;i++){
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int a[]={1,2,1,3,1};
    int n=sizeof(a)/sizeof(a[0]);
    int x=1;
    int output[n];
     allIndices(a,n,x);
   

    return 0;
}