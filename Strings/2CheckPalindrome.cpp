#include<iostream>
using namespace std;


//now we will let upper and lower case same
char uppertolower(char ch){
    if(ch>='a' && ch<='z')
    return ch;
    else{
        char temp=ch-'A'+'a';
        return temp;
    }

}
bool checkPalindrome(string s){
    int start=0;
    int end=s.length()-1;
    while(start<=end){
        if(uppertolower(s[start])!=uppertolower(s[end])){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}
int main()
{  //int n=5;
    string s="Noon";
    
    cout<<checkPalindrome(s);
    return 0;
}