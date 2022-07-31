#include<iostream>
#define N 3
using namespace std;
class Arrar2{
    int x;
    public:
    
    void input(){
        cin>>x;
    }
    void output(){
        cout<<x;
    }

};
int main()
{
   Arrar2 **Arr=new *Arrar2[N];
   
   for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        Arr->input();
    }
   }
   for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        Arr->output();
    }
   }

    return 0;
}
/*int** mesh = new int*[size1];
for( int i = 0; i < size1; i++ ) {
    mesh[i] = new int[size2];
    for( int j = 0; j < size2; j++ ) {
        mesh[i][j] = 0;
    }
}*/