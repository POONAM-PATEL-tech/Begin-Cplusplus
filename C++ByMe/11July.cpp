#include<iostream>
using namespace std;
//2d array using dynamic memory allocation
/*int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int c=0;
    int **a =new  int *[m];
    for(int i=0;i<m;i++){
        a[i]=new int[n];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            a[i][j]=++c;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
    int s;
    cin>>s;
    int r;
    cin>>r;
    int **a1 =new  int *[s];
    for(int i=0;i<s;i++){
        a[i]=new int[r];
    }
    for(int i=0;i<s;i++){
        for(int j=0;j<r;j++){
            a[i][j]=++c;
        }
    }
    for(int i=0;i<s;i++){45
        for(int j=0;j<r;j++){
            cout<<a[i][j]*a1[i];


        }
        cout<<endl;
    }
}

    for(int i=0;i<m;i++)
    delete [] a[i];
    delete [] a;
    return 0;
    */

    //function overloading
   /* void add(int x,int y){
        cout<<"2 integer"<<endl;
        cout<<x+y<<endl;
    }
    void add(int x,double y){
        cout<<"1 integer,1 double"<<endl;
        cout<<x+y<<endl;
    }
    void add(double x,int y){
        cout<<"1st double, 2nd Integer"<<endl;
        cout<<x+y<<endl;
    }
    void add(double x,double y){
        cout<<"2 double"<<endl;
        cout<<x+y<<endl;
    }
int main(){
    add(1,2);
   // add(1.2,1);
    //add(2,2.1);
    //add(1.2,2.1);


    return 0;
}
*/
/*void reverse(int n)
{

   // base condition to end recursive calls
   if (n < 10) {
      cout<<n;
      return;
   }

   else{
      cout<<n%10;
      reverse(n/10);
   }
}

// Driver Program
int main()
{
   int n=1234;
   reverse(n); //Calling recursive function
   return 0;
}

*/
long long int pow(int b,int e){
    int mod=9e7;
if(e==0){
    return 1;
}
else{
    return b*pow(b,e-1)%mod;
}
}
int main(){
    int b=5;
    int e=55;
    cout<<pow(b,e);
    return 0;
}
//find prime number using recursion




    
