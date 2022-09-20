#include<iostream>
using namespace std;
void display(int x){
    try{
        if(x<0){
            throw x;
        }
       else if(x==0){
            throw 'x';
        }
        else{
            throw 1.0;
        }
    }
    catch(int x){
        cout<<"Negative integer"<<endl;
       
    }
    /*catch(char c){
        cout<<"X=0"<<endl;
    }
    catch(double x){
        cout<<"Positive Integer "<<endl;
    }*/
    //ye upar waale catch ko kaam kar dena aur wo kaam upar waale se nahi hoga tab ye cath call ho jayega
    catch(...){
        cout<<"Reconsider"<<endl;
            }
    
}
int main()
{

    
    int x;
    cout<<"the value of x ";
    cin>>x;
    
    display(x);

    return 0;
}