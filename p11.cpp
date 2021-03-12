/* using stringstream library and getline to get the string
and then we can convert the string variable to a number variable
*/

#include <sstream>
#include <iostream>
#include <string>

using namespace std;

int main ()

{
	string stringLength;
	float cm = 0;
	float km = 0;

	cout << "Enter number of cm: ";
	getline(cin, stringLength);
	stringstream(stringLength) >> cm;
	cout << "You entered " << cm << "\n";
	km = cm/1000;
	cout << "You entered " << km << " km\n";

	return 0;
}

/*
main.cpp = the main program
main.hpp = the header file
mainFunctions.cpp = a file for any finction
*/
