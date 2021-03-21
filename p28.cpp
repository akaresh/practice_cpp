/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array
**and a vector of size 4.
**Use the dot product to multiply the array by the vector.
**Print the resulting vector.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	//array dimensions must be known at compile time
	int row = 4;
	int col = 4;

	int arr[row][col];
	int vector[row], product[row];
	int sum;

	//get the values for the array from the user
	//populating the already existing array
	for(int i=0;i<row;i++)
		for(int j=0;j<row;j++)
		{
			cout<<"arr["<<i<<"]["<<j<<"] = ";
			cin>>arr[i][j];
			//std::cout<<"arr["<<i<<"]["<<j<<"] ="<<arr[i][j]<<"\n";
		}

	//getting the values for the vector from the user
	for(int i=0; i<row; i++)
	{
		cout<<"vector["<<i<<"] = ";
		cin>>vector[i];
		//std::cout<<"vector["<<i<<"] = "<<vector[i]<<"\n";
	}
	sum = 0;

	for(int i=0;i<row;i++)
	{
		for(int j=0; j<row;j++)
		{
			//calculating the dot product
			sum = (arr[i][j] * vector[i]) + sum;
		}
		product[i] = sum;
		sum=0;
	}

	for(int i=0;i<row;i++)
	{
		cout<<"product["<<i<<"] = "<<product[i]<<"\n";
	}
	return 0;
}
