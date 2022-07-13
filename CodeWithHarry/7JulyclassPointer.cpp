#include<iostream>
using namespace std;
/*int f(int *a,int n){
    if(n<=0){
    return 0;
    }
    else if(*a%2==0){
        return *a+f(a+1,n-1);
    }else{
        return *a-f(*-+a+1,n-1);
    }
}
int main(){
    int a[6]={12,7,13,4,11,6};
    cout<<f(a,6);*/

   // return 0;
//}
/*void f(int *p,int *q){
    p=q;
    *p=2;


}
int i=0,j=1;
int main(){
    f(&i,&j);
    cout<<i<<j<<endl;
}*/
/*int main(){
    int n,i;
    cout<<"Entr size :"<<endl;
    cin>>n;
    int *p;
    p=new int[n];
    for(i=0;i<n;i++){
        cin>>p[i];
    }k.ik8ik
    cout<<"Print"<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i];
    }
    delete[]p;
}*/

//Dynamic Memory in 2D
int r,c,i,j;
cout<<"ENter the number of rows and column"<<endl;
cin>>r>>c;
int **p=new int *[r];
for(i=0;i<r;i++){
    p[i]=new int[c];
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        cin>>p[i][j];
    }
}