#include<iostream>
using namespace std;
int main()
{
    string str="geeksfor geeks a computer science";
    string str1="geeks";

    //Find first occurence of "geeks"
    size_t found=str.find(str1);
    if(found!=string:: npos)
    cout<<"first occurence is "<<found<<endl;


    //As style of like c language

    /*char arr[]="geeks";
    found=str.find(arr,found+1);
    if(found!=string::npos)
    cout<<"next occurence is "<<found<<endl;
*/

    //we can also do it for char only
    //like
    //char c='g'
    //and all process is same



    //We can also search for a partial string
   //Here it will be take only 5 characters to find 
    size_t found1=str.find("geeks.practice",0,5);
    if(found1!=string:: npos)
    cout<<found<<endl;
    return 0;
}