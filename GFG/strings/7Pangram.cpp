//What is Pangram??
//Ans->we will find all the characters under the sentence from a to z.
//Now we are considering a and A as same marked 0 and
// z and Z same marked 25
#include<iostream>
#include<vector>
using namespace std;

bool checkPangram(string &str){
    vector<bool>mark(26,false);
    //For indexing in mark[]
    int index;
    //Traverse all characters
    for(int i=0;i<str.length();i++){
        //If uppercase character,subtract 'A' to find index
        if('A'<=str[i] && str[i]<='Z')
        index=str[i]-'A';

        //If lowercase character,subtract 'a' to find index
        else if('a' <=str[i] && str[i]<='z')
        index=str[i]-'a';
        //If this character is other than english lowercase
        //and uppercase characters.
        else
        continue;
        mark[index]=true;
    }

    //Return false if any character is unmarked
    for(int i=0;i<=25;i++){
        if(mark[i]==false)
        return (false);
        //If all characters were present
        
    }
    return (true);
}
int main()
{
    string str;
    getline(cin,str);
    if(checkPangram(str)==true)
      cout<<"It is Pangram";
      else
      cout<<"Not a Pangram";
    return 0;
}