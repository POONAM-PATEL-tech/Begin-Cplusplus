#include <iostream>
using namespace std;
int main(){         //find the second largest of three
    int a=10;
    int b=20;
    int c=18;
    if((a<b)&&(b<c)){
    cout<<b<<endl;

    }else if((a<c)&&(c<b)){
        cout<<c<<endl;

    }else{
        cout<<a<<endl;
    }
    


//Switch Case
int age;
cin>>age;
switch(age)
{
    case 18:
    cout<<"It is valid";
    break;
    case 12:
    cout<<"It is not valid";
    break;
    default:
    cout<<"This is not any case";
    break;
}
return 0;
}