#include<iostream>
using namespace std;
int main()

{
    int a[3][2]={{1,2},{3,5},{6,7}};
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<"Element at x["<<i<<"]["<<j<<"]"<<a[i][j];
            cout<<endl;
        }
    }
    return 0;
}