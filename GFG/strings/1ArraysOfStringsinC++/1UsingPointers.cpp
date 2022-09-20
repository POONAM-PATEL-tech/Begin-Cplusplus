#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{


    //The number of strings is fixed,but needn't be. The 4 may be ommited, and the compiler will compute the correct size.
    //These strings are constants
    // and their contents cannot be changed. 
    //Because string literals (literally, the quoted strings) exist in a read-only area of memory, we must specify “const” here to prevent unwanted accesses that may crash the program.

   const char* colr[4]={"Blue","red","Orange","Yellow"};
    //Printing Strings stored in 2d array

    for(int i=0;i<4;i++)
    cout<<colr[i]<<endl;    
    return 0;
}