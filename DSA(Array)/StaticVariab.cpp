#include<iostream>
using namespace std;
static int count=0;
int var(int a){
    for(int i=0;i<a;i++){
    count=count+i;

    }
    return count;

}

int var1(int b){
    for(int i=0;i<b;i++){
        count=count+i;
    }
    return count;
}
int main(){
    cout<<var(5)<<endl;
    cout<<var1(2)<<endl;
    return 0;
}