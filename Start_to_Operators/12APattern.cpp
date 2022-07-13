#include <iostream>
//print a square with n number of rows and column
using namespace std;
int main(){
     int n;
     cin>>n;
     /*for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
             cout<<"*"<<" ";
         }     
         cout<<endl;    
     }
     */
    


//Hollow rectangle pattern we have n rows and n-1 colums
/*
for(int i=1;i<=n;i++){
    for(int j=1;j<n;j++){
        if(i==1 || i==n || j==1 || j==(n-1)){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
    
}
*/

// Triangle Pattern
/*
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}*/
//Inverted Triangle
for(int i=n;i>0;i--){
    for(int j=1;j<=i;j++){
        cout<<"*"<<" ";
    }
    cout<<endl;
}

//Half Pyramid after 180 degree rotation
for(int i=1;i<=n;i++){
    for(int spaces=(n-i);spaces>0;spaces--){
        cout<<" ";
    }
    
    for(int stars=1;stars<=i;stars++){
        cout<<"*";
    }
    
    cout<<endl;
}
// ................................................................................................

//Half Pyramid Using Numbers
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<i;
    }
    cout<<endl;
}

//Floyd's Triangle
int p=0;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        p=p+1;
        cout<<p<<" ";
    }
    cout<<endl;
}

//.............................................................................................................

//Butterfly Pattern
//Now I am making above part of butterfly 
for(int i=1;i<=n;i++){
    for(int star1=1;star1<=i;star1++){
        cout<<"*";
    }
    for(int space=1;space<=(2*n-2*i);space++){
        cout<<" ";
    }
    for(int star2=1;star2<=i;star2++){
        cout<<"*";
    }
    cout<<endl;
}
//Print below Part
for(int i=n;i>0;i--){
    for(int star1=1;star1<=i;star1++){
        cout<<"*";
    }
    for(int space=1;space<=(2*n-2*i);space++){
        cout<<" ";
    }
    for(int star2=1;star2<=i;star2++){
        cout<<"*";
    }
    cout<<endl;
}
//............................................................................................................
//inverted Pattern  
/*
   1           (1,1)                      If we add (1,1) then we have 2 if we divide 2%2==0 so at this place we have             
   0 1         (2,1) (2,2)                  1 means at even position we have 1 and at odd position we have 0.
   1 0 1       (3,1) (3,2) (3,3)
   0 1 0 1     (4,1) (4,2) (4,3) (4,4)
   1 0 1 0 1   (5,1) (5,2) (5,3) (5,4) (5,5)
 */
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if((i+j)%2==0){
            cout<<"1"<<" ";
        }else{
            cout<<"0"<<" ";
        }
    }
    cout<<endl;
}

// Rohumbus Pattern
//print space
for(int i=1;i<=n;i++){
    for(int space=(n-i);space>0;space--){
        cout<<" ";
    }
    for(int star=1;star<=n;star++){
        cout<<"*"<<" ";
    }
    
    cout<<endl;
    
}
//........................................................................................................
//Number Pattern
for(int i=1;i<=n;i++){
    for(int space=(n-i);space>0;space--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}

//Palindromic Pattern
for(int i=1;i<=n;i++){
    for(int space=(n-i);space>0;space--){
        cout<<" ";
    }
    for(int star=i;star>0;star--){
        cout<<star;
    }
    for(int dec=2;dec<=i;dec++){
        cout<<dec;
    }
   
    cout<<endl;
}

//Star Pattern 
for(int i=1;i<=n;i++){
    for(int space=(n-i);space>0;space--){
        cout<<" ";
    }
    for(int star1=1;star1<=i;star1++){
         cout<<'*';

    }
    for(int star2=2;star2<=i;star2++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=n;i>0;i--){
    for(int space=(n-i);space>0;space--){
        cout<<" ";
    }
    for(int star=1;star<=i;star++){
        cout<<'*';
    }
    for(int star2=2;star2<=i;star2++){
        cout<<"*";
    }
    cout<<endl;
}

//Zig Zag Pattern
cout<<"Zig Zage"<<endl;
for(int i=1;i<=3;i++){
    for(int j=1;j<=9;j++){
        if(((i+j)%4==0) || (i==2 & j%4==0)){
            cout<<"*";
        }else{
            cout<<" ";
        }

    }
    cout<<endl;
}






return 0;
}