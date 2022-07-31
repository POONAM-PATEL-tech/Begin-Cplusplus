#include<iostream>
using namespace std;
#define N 4
int main()
{
int mat1[N][N] = { { 1, 1, 1, 1 },
                       { 2, 2, 2, 2 },
                       { 3, 3, 3, 3 },
                       { 4, 4, 4, 4 } };
 
    int mat2[N][N] = { { 1, 1, 1, 1 },
                       { 2, 2, 2, 2 },
                       { 3, 3, 3, 3 },
                       { 4, 4, 4, 4 } };
 int res[N][N];
 multiply(mat1,mat2,res);
 
 cout<<"result matrix is \n";
 for(int i=0;i<N;i++){
    for(int j=0;j<N;)
 }
    return 0;
}