#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //A vector is a dynamic array that doubles

    vector<string> color{"Blue","Red","orange"};
    //Strings can be added at any time with push_back

    color.push_back("yellow");

    //Print Strings stored in vector 
    for(int i=0;i<color.size();i++)
    cout<<color[i]<<" ";

    return 0;
}