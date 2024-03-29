#include<iostream>
#include<exception>
using namespace std;

class derived_exception : public exception{
    public:
    const char* what() throw(){
        return "selfmade exception";
    }
};
int main()
{
    derived_exception de;
    try{
        throw de;
    }
    catch(derived_exception& e){
        cout<<e.what();
    }
    catch(exception &e){
      cout<<e.what();
    }
    return 0;
}