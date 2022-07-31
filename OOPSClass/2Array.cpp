#include<iostream>
using namespace std;
class arrayI{
    int i;
    int arr[10];
    public:
    
    void getdata(){
        cin>>i;
    }
    void setdata(){
        cout<<i;
    }
};
int main()
{    //It is the maximum length which an array have.
    arrayI a[10];
    //n is the length given by us.
    int n,i;
    cout<<"Nember of elements:";
    cin>>n;
    for(i=0;i<n;i++){
        a[i].getdata();
    }
    for(i=0;i<n;i++){
        a[i].setdata();
    }
     
    return 0;
}