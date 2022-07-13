#include<iostream>
using namespace std;


//with recursion
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
}*/

// Driver Program
int main()
{
   int n=1234;
   reverse(n); //Calling recursive function
   return 0;
}
int main(){
    int n;
    cin>>n;
    int remainder;
    int reversed_number;
    while(n!=0){
       remainder=n%10;
       reversed_number=reversed_number*10+remainder;
       n=n/10;

    }
    cout<<reversed_number;
  //  reverse(n);



    

    return 0;
}