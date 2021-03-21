/* for loops
for loops in C++ have the following forms:
- for ( declaration : range ) statement;
- for (initialization; condition; increase) statement;
*/

//for now, we will be only using for second version

//Writing a program that asks user for five numbers
//Prints out the sum and avg of five nums
#include <iostream>
using namespace std;

int main() {
	float a = 0;
	float b;
	for(int i = 0; i<5; i++){
		cout<<"Enter the number: \n";
		cin >> b;
		a = a + b;
	}

	cout << "Sum of numbers is: " << a << '\n';
	cout << "Average of those 5 numbers: " << a/5.0 << "\n";
	return 0;

}
