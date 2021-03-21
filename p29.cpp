//FUNCTIONS
/* All C++ functions (except the special case of the main function) must have:
	- a declaration: statememnt of how the function is to be called
	- a definition: statement(s) of the task the function performs when called

C++ fxn can:
	- accept parameter
	- return values, but a return value is NOT required
	- can modify parameters, if given explicit direction to do so


SYNTAX:
	retVariableType  functionName(parameter1, parameter2, ...,parameterN)
	{
		statement(s);
	}


EXAMPLE:
void printValues()
{
	std::cout<<"Hello World!";
}
The function accepts no parameters in this case and returns no value.
When it is called, it will execute this statment: std::cout<<"Hello World!";


FUNCTION DECLARATION: a function is declared with the synthax:
	returnVariableType  functionName(parameter1, parameter2, ...,parameterN);

Note the semi-colon at the end of the statement


CALLING THE FUNCTION
Functions are called using their function name with any parameters specified in the
declaration and definition

For example:

int main()
{
	...
	functionName(parameter1, parameter2, ..., parameterN);
	...
}

MOST BASIC FUNCTION is the one that accepts no parameters and does not return a value
	- The syntax for the declaration of this type of function is:
		void functionName();
	- The syntax for definition is:
		void functionName(){
			statemmnt(s);
		}

EXAMPLE OF THE FUNCTION DECLARATION AND DEFINITION
The declaration:
	void printMessage();

The definition:
	void printMessage():
	{
		std::cout<<"Call your parents!";
	}

TO CALL THE FUNCTION:
int main()
{
	...
	printMessage();
	...
	return 0;
}
INT vs VOID:
- int main indicates that integer ype data can be returned
- void main indicates that fxn will not return any value


*/

//Practice toy problem

#include <iostream>
using namespace std;

void printMessage(); //PLACED BEFORE MAIN = definition the function
//similar to how we defined int value before

int main() {
	printMessage();
	return 0;
}

//the definition of printMessage is conventionally placed after main

void printMessage() {
	cout<<"This is a void function\n";
	//no return value since void
}

//function order does not seem to play a role
