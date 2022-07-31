#include <iostream>
#define N 5
 
using namespace std;
 
class Test {
    // private variables
    int x, y;
 
public:
    // parameterized constructor
 
    Test(int x, int y)
        : x(x)
        , y(y)
    {
    }
 
    // function to print
    void print() { cout << x << " " << y << endl; }
};
 
int main()
{
    // allocating array using
    // pointer to pointer concept
    Test** arr = new Test*[N];
 
    // calling constructor for each index
    // of array using new keyword
    for (int i = 0; i < N; i++) {
        arr[i] = new Test(i, i + 1);
    }
 
    // printing contents of array
    for (int i = 0; i < N; i++) {
        arr[i]->print();
    }
 
    return 0;
}