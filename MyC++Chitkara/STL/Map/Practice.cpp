#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int>Car;
    Car["A"]=1;
    Car["B"]=2;
    Car["C"]=3;
      int unitPrice;
      
    map<string,int>::iterator it;
      for(it=Car.begin();it!=Car.end();it++){
        
        if((*it).second==1){
            cin>>unitPrice;
            cout<<((*it).second)*unitPrice;
        }else if((*it).second==2){
            cin>>unitPrice;
            cout<<((*it).second)*unitPrice;
        }else{
            cin>>unitPrice;
            cout<<((*it).second)*unitPrice;
        }
        
      }
   

    return 0;
}