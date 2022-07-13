#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = 0;  //bool is use for stopping overprinting and it is use with for loop.
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            flag = 1;
            break;
            
        }
        
    }
    if(flag==0){
        cout<<"Prime";
    }
   

    return 0;
}