#include <iostream>
#include <vector>
using namespace std;
//We can initialize a vector with 6 type
int main(){
    //First type
    vector<int> vect;
     vect.push_back(10);
     vect.push_back(20);
     for(auto x:vect){
         cout<<x<<endl;
     } 

     //Specifying size and initializing all value;
     cout<<"Second Type"<<endl;
     int n=3;

     vector<int> vect1(n,10); //all values as 10.
     for(auto x:vect1){
         cout<<x<<" ";
     }
     cout<<endl;
     cout<<"Third type "<<endl;
     //Initializing like arrays
     vector<int> vect3{100,200,300};
     for(int x:vect3){
         cout<<x<<" ";
     }
     cout<<endl;
     cout<<"Fourth type"<<endl;
     //initialize with array
     int arr[]={12,13,14};
     int n1=sizeof(arr)/sizeof(arr[0]);
     vector<int> vect4(arr,n1+arr);
     for(int x:vect4){
         cout<<x<<" ";
     }
     cout<<endl;
    //fifth type(initializing from another vector)
    cout<<"Fifth type"<<endl;
     vector<int> vect6(vect3.begin(),vect3.end());
     for(int x:vect6){
         cout<<x<<endl;
     }
     //initializing all elements with particular value
     cout<<endl;
     cout<<"Sixth type"<<endl;
     vector<int> vect7(10);
     int value=5;
     fill(vect7.begin(),vect7.end(),value);
    for(int x:vect7){
        cout<<x<<" ";
    }
    return 0;
}