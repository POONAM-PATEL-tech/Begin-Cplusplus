#include <iostream>
using namespace std;
// At heirical we will make to or maore driven classes but with one parent class and after thiis anything at base class that can be accessed by driven class.
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle\n";
    }
};
class Car : public Vehicle
{
};
class Bus : public Vehicle
{
};
int main()
{
    Car obj1;
    Bus obj2;

    return 0;
}