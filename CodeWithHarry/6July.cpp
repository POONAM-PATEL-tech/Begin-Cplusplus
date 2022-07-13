#include<iostream>
using namespace std;
/*inline void add(int x,int y){
    cout<< x+y;
}
int main(){
    int a=10;
    int b=20;
    add(a,b);
    return 0;
}
*/
//Default Parameter
int add(int a=0,int b=0,int c=0,int d=0){
    int sum=a+b+c+d;
    return sum;
}
int main(){
  cout<<add();
  cout<<add(1);
  cout<<add(1,2);
  cout<<add(1,2,3);
  cout<<add(1,2,3,4);
}3
