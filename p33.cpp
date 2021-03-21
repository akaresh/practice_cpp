/*What is wrong with this program?*/

#include<iostream>

int increment(int input);
using namespace std;

int main()
{
	int a = 34;
	cout<<"Before the function call a = "<<a<<"\n";
	a = increment(a);
	cout<<"After the function call a = "<<a<<"\n";
	return 0;
}

int increment(int input)
{	input ++;
	cout<<"In the function call a = "<<input<<"\n";
	return input;
}

//NOTE
/*
C++ respects variable scope.
Changes to a variable that are made in a function will not
effect hte variable in the main part of the program

Two method to rectify this stuation:
	return the altered variable
	pass the variable as a reference
*/
