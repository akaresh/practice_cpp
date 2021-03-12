/*
prefix and postfix

incrementing
prefix ++ a
postfix a ++

prefix operators:
- increment the value
- return a reference

postfix operators
- create a copy of the vairable
- increment the value
- then return the copied value from BEFORE the increment
*/

#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int post = 0;
	int pre = 0;
	cout << "Initial values: \t\tpost = " << post << " pre= "<<pre<<"\n";
	post = a++;
	pre = ++b;
	cout << "After one postfix and prefix: \tpost = " << post << " pre= " << pre <<"\n";
	post = a++;
	pre = ++b;
	cout << "After two postfix and prefix: \tpost = " << post << " pre= " << pre << "\n";
	return 0;

}
