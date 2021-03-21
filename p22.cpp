/* Pointers
example: int a = 54;
54 is the value of the variable
in other words, it is the value that is stored
in the location reserved for the variable called a

location of a could be found using a pointer

int a = 54;
	std::cout<< &a<<"\n"; //This will print the LOCATION of 'a'
*/

#include <iostream>
using namespace std;

int main() {
	int a = 54;
	cout << "a = " << a << "\n";
	cout << "address of a is at &a = "<< &a << "\n";

	int * pointerToA =  &a;
	cout << "value of a at address &a = "<< * pointerToA << "\n";

	return 0;
}

/*dereferencing = if we have a pointer and want to access the value stored there
it is indicated by adding the operator * before the variable name
*/

//Note
/*
1.To get address of a variable
2.To pass large structures so that complete copy of the structure can be avoided
3.To implement linked data structures
*/
