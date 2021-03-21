// Array in C++
/* in C++ you don't need to learn arrays
Instead of using arrays, you can use vectors.
Vectors are more versatile than arrays
Here, we will learn arrays but later we will learn
about vectors and have the tolls to make your own own
Vector/Array decisions.
*/

/*C++ can be declared as:
		variableType arrayName [ ] = {variables to be stored in the array};
	or
		variableType arrayName[array size]
*/

/* we can access the values in an array by identifying the specific index

	variableType arrayName[ index number ]
*/

//PRACTICE ARRAY

/*Goal: Practice array manipulation in C++.
**The user will input 40 integers.
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order
**and print it.
**The each print of the array should separate the numbers in the array by
**one space.
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int userInput[40];
	for (int i=0; i < 40; i++){
		/*scanf = reads data from stdin and stores them according to
		the parameter format into the locations pointed by the
		additional arguments
		i = integer
		d or u = decimal integer = any number of decimal digits
		o = octal int
		a = floating point number
		input format = scanf("format", integer)
		*/

		scanf("%d", &userInput[i]);
	}

	//printing out the array
	cout << "Printing out the array\n";
	for (int i=0; i < 40; i++){
		cout << userInput[i] << " ";
	}
	cout << "\n";

	//printing out the array in reverse order
	cout << "Printing out the array in reverse\n";
	for (int i=39; i >= 0; i--){
		cout << userInput[i] << " ";
	}
	cout << "\n";

	//sorting the array using bubble sort
	for(int i = 0; i < 40; i++)
	{
		for(int j = 0; j < 39 - i; j++)
			{
				if(userInput[j] > userInput[j + 1])
				{
					int temp;
					temp=userInput[j];
					userInput[j]=userInput[j + 1];
					userInput[j + 1]=temp;
				}
			}
	}
	cout << "Sorted array sorted\n";
	for(int i = 0; i < 40; i++){
		cout << userInput[i] << " ";
	}
	cout << "\n";

	return 0;
}
