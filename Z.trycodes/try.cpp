//#include<iostream>
//using namespace std;
/*void reverse(int n){
      int sum=0;
    
    if(n>0){
        int rem=n%10;
        sum=sum*10+rem;
        int b=n/10;
         reverse(b);
    }
 
 cout<< sum;
}
int main()
{
    int n;
    cin>>n;
    reverse(n);
    return 0;
}*/
//check Palindrome

/*bool checkPalindrome(string s){
    int start=0;
    int end=s.length()-1;
    while(start<=end){
        if(s[start]!=s[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}*/
#include <iostream>
using namespace std;

/*bool isPalindrome(string s, int i){
		
	if(i > s.size()/2){
	return true ;
	}
	
	return s[i] == s[s.size()-i-1] && isPalindrome(s, i+1) ;
	
}
*/

//Look after it `
/*bool isPalindrome(string s,int i){
    if(i>s.size()/2){
        return true;
    }
    if(s[i]!=s[s.length()-i]){
    return false;
    }
     else{
    return isPalindrome(s,i+1);q22
     }
}	
	
int main()
{
	string str = "abba" ;
	if (isPalindrome(str, 0))
	cout << "Yes";
	else
	cout << "No";

	return 0;

}*/

int main(){
     float B,C,E,F;
     cin>>B>>C>>E>>F;
     int A,D;
     A=B+C;// smallest positive number
     cout<<A<<endl;
     D=E+F;// greatest positive number
     cout<<D<<endl;
     float k= float(A)/float(D); //or float(A)/D or A/float(D)
     cout<<k;




    return 0;
}
