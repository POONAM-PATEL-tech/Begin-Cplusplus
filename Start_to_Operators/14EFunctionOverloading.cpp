#include <iostream>
using namespace std;
int add(int a,float b){
    float c=a+b;
    return c;
}
int add(float a,float b){
    float c=a+b;
    return c;
}
int add(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    cout<<add(1,1.67f)<<endl;
    cout<<add(1,3)<<endl;
    cout<<add(2.3f,5.6f)<<endl;

    return 0;
}