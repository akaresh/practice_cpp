//MULTIDIMENTIONAL ARRAY
/* C++ supports multidimentional arrays
C++ arrays can be of any dimension: 1 to n
They are initialized with the format:

typeOfVariable arrayName[size of dim. 1][size of dim. 2] ...[size of dim. n];

Example:
	int array2Dimensions[2][3];
this will create a [2 rows x 3 columns] array of integers

*/

//problem

//Goal: understand multidumentional arrays in C++

#include <iostream>
using namespace std;

int main()
{
	int array2Dim[2][3] = {0, 1, 2, 3, 4, 5};
	for (int i=0; i<2; i++)
		for (int j=0; j<3; j++)
			cout<<"array2Dim["<<i<<"]["<<j<<"] = " << array2Dim[i][j] << "\n";

	return 0;
}
