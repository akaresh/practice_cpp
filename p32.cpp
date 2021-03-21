/* FXN VS RETURN VALUES
Functions with return values require the declaration and definition state
the variable type of the return

FOR EXAMPLE:

int calculateSum(int m1, int m2)
{
	int sum;
	sum = m1 + m2;
	return sum;
}

or the shorter version

int calculateSum(int m1, int m2)
{
	return m1 + m2;
}

*/

//PRACTICE RETURN VALUES

#include <iostream>
using namespace std;

//specificying the return type of the function
float add(float m1, float m2);
float sub(float m1, float m2);
float mult(float m1, float m2);
float div(float m1, float m2);
void printEquation(float m1, float m2, char operation, float result);

int main(){
	float m1 = 4.0;
	float m2 = 3.5;

	printEquation(m1, m2, '+', add(m1, m2));
	printEquation(m1, m2, '-', sub(m1, m2));
	printEquation(m1, m2, '*', mult(m1, m2));
	printEquation(m1, m2, '/', div(m1, m2));

}

void printEquation(float m1, float m2, char operation, float result){
	cout<<m1<<" "<<operation<<" "<<m2<<" = "<<result<<"\n";
}


float add(float m1, float m2) {
	return m1 + m2;
}

float sub(float m1, float m2){
	return m1 - m2;
}

float mult(float m1, float m2){
	return m1 * m2;
}
float div(float m1, float m2){
	return m1 / m2;
}
