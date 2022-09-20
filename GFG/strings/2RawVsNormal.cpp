// C++ program to demonstrate working of raw string literal
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	// A Normal string
   //n->next line
   //t->tab or space
	string string1 = "Geeks.\nFor.\tGeeks.\n";

	// A Raw string

    //it always starts with R prefix and 
	string string2 = R"(Geeks.\nFor.\nGeeks. \n)";

	cout << string1 << endl;

	cout << string2 << endl;

	return 0;
}
