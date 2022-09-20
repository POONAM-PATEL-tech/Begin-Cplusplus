#include<iostream>
using namespace std;
int main()
{
    //A 2-d array is the simplest form of a multidimensional array in which it stores the data in a tabular form.
    //This method is useful when the length of all strings
    //is known and a particular memory footprint is desired, Space for strings will be allocated in a single block.
    char color[4][10]={"Blur","Red","Orange","Yellow"};
    //Printing Strings stored in 2-d Array

    for(int i=0;i<4;i++){
        cout<<color[i]<<endl;
    }
    return 0;
}