#include<iostream>
using namespace std;
//Recursive Method
//odd  and even both
class tof{
  public:
    int n;
    char source;
    tof(int n){
        this->n=n;
    }
   

void tofh(int n, char source,char rem,char des){
      if(n==0){return;}
      tofh(n-1,source,des,rem);//n-1 elements will go at the last means Destination
      //sorce will source destination will be B and aux will be C.
     
      cout<<"Move disk "<<n<<" from "<<source<<" to "<<des<<endl;
       
      tofh(n-1,des,rem,source);//n-1 will go from C to A via B
      
}
};


int main()
{
    int num_disks;
    cout<<"Enter number of disks:\n";
    cin>>num_disks;
    tof T(num_disks);
    T.tofh(num_disks,'A','B','C');
    return 0;
}