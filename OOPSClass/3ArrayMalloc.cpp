#include <iostream>
#define N 5
 
using namespace std;
 
class Test {
    // private variables
    int x, y;
 
public:
    // parameterized constructor
    Test(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
 
    // function to print
    void print() { cout << x << " " << y << endl; }
};
 
int main()
{
    // allocating dynamic array
    // of Size N using malloc()
    Test* arr = (Test*)malloc(sizeof(Test) * N);
   //it will point to the address of array=then with the help of malloc arr will contain 8*5=40 bytes memory.
    // calling constructor
    // for each index of array
    for (int i = 0; i < N; i++) {
        arr[i] = Test(i, i + 1);
    }
 
    // printing contents of array
    for (int i = 0; i < N; i++) {
        arr[i].print();
    }
 
    return 0;
}