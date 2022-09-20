#include<iostream>
#include<array>
using namespace std;
//it can be used similar to vector but it has fixed size.
int main()
{

    //you have given 3 size but you want to take elements
    //from size 4
    array<string,3>color{"Blue","Red"};

    //Printing Strings stored in array

    for(int i=0;i<4;i++){  //it will give some random values
      cout<<color[i]<<" ";
    }
    return 0;
}