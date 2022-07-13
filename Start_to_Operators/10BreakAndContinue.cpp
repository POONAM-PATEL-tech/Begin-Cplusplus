#include <iostream>
using namespace std;
int main(){
    
   for(int i=1;i<=10;i++){
        cout<<i<<endl;
        if(i==2){
            
            break;
        }
        
    }
    cout<<"end the loop"<<endl;
    
   for(int i=1;i<=10;i++){
       
       if(i==2){
           continue;
       }
       cout<<i<<endl;
   }
   cout<<"end the loop"<<endl;
    return 0;

}