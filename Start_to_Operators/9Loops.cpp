#include <iostream>
using namespace std;
/* So we have three types of loop while loop,for loop,do while loop  */
int main(){
// we are printing the table of 6 with while,for,do while loop
int table=6;
int mult=1;
/*
for(int i=1;i<=10;i++){
    mult=table*i;
    
    cout<<"6 x "<<i<<" = "<<mult<<endl;
}
*/

int i=1;
while(i<=10){
 mult=table*i;
 cout<<mult<<endl;
 i++;
}

int j=1;
do{
    mult=j*table;
    cout<<mult<<endl;
    j++;

}while(j<=10);



    return 0;

}