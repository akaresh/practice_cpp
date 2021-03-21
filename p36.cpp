//C++ does not allow array to be passed to functions
//BUT IT ALLOWS POINTERS TO BE PASSED
/* Three methods for passing an array by reference to a function:
	void functionName(variableType *arrayName)
	void functionName(variableType arrayName[length of array])
	void functionName(variableType arrayName[])
*/

#include <iostream>
#include <iomanip>

using namespace std;

//Pass the array as a pointer
void arrayAsPointer(int *array, int size);
//Pass the array as a sized array
//also known as fixed array = specified number of elements your array will
//hold ahead of time
void arraySized(int array[3], int size);
//Pass the array as an unsized array
//also known as dynamic size array = expands as you add more elements
void arrayUnSized(int array[], int size);

int main(){
	const int size = 3;
	int array[size] = {33, 66, 99};
	arrayAsPointer(array, size);
	arraySized(array, size);
	arrayUnSized(array, size);
	return 0;
}

void arrayAsPointer(int *array, int size)
{
	cout<<setw(5);
	//output formating, 5 is the width
	//setw = sets the field width to be used on output operations
	for(int i=0; i<size; i++)
		cout<<array[i]<<" ";
	cout<<"\n";
}

void arraySized(int array[3], int size)
{
	cout<<setw(5);
	for(int i=0; i<size; i++)
		cout<<array[i]<<" ";
	cout<<"\n";
}

void arrayUnSized(int array[], int size)
{
	cout<<setw(5);
	for(int i=0; i<size; i++)
		cout<<array[i]<<" ";
	cout<<"\n";
}
