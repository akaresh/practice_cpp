//write program that uses passing variables by reference
/*write a rogram that uses two fxns:
	calculate(input1, input2, operation, result);
	printEquation(input1, input2, operation, result);

Input, input2, and result are floats.
Operation is a char. The choices are '+', '-', '*', '/'
The result is modified by the function called calculate.
*/

#include <iostream>
using namespace std;

void calculate(float input1, float input2, char operation, float &result);
void printEquation(float input1, float input2, char operation, float result);

int main() {
	char operation = '*';
	float input1 = 9.8;
	float input2 = 2.3;
	float result;

	calculate(input1, input2, operation, result);
	printEquation(input1, input2, operation, result);
	return 0;
}

void calculate(float input1, float input2, char operation, float &result){
	switch(operation){
		case '+': result = input1 + input2;
		break;
		case '-': result = input1 - input2;
		break;
		case '*': result = input1 * input2;
		break;
		case '/': result = input1 / input2;
		break;
	}
}

void printEquation(float input1, float input2, char operation, float result){
	cout << input1<<operation<<input2<<" = "<<result<<"\n";
}
