//same problem as p33 but here im passing by reference
/* passing by reference refers to passing the address of the variable rather
than the variable itself
when we make a change in a function, we are changing the value at the address
but not the variable
once the value is changed at its address, any access to that address will
retrieve a new value
*/

#include <iostream>
using namespace std;

void increment(int &input);

int main()
{
	int a = 34;
	cout << "Before a function call a = "<<a<<"\n";
	increment(a);
	cout<<"After the function call a = "<<a<<"\n";
	return 0;
}

void increment(int &input){
	input++;
	cout<<"In the function call a = "<<input<<"\n";
}
