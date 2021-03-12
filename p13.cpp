// integer can be treated as a character or as a float
#include <iostream>
using namespace std;

int main() {
	int a = 65;
	char charA = 65;
	char charB = 'B';
	float answer = 0;
	char charC = 67;
	int integer = 80;
	float floatNumber = 0.0;

	cout << "a = " << a << "\n";
	cout << "charA = " << charA << "\n";
	cout << "charB = " << charB << "\n";

	//can assign a char to a float
	floatNumber = charB;
	cout << "floatNumber = charB = " << floatNumber << "\n";

	answer = floatNumber/4;
	cout << "answer = floatNumber/4 = " << answer << "\n";

	//But assinging a float to a char doesn't work
	charC = answer;
	cout << "charC = answer = " <<charC << "\n";

	//when a float is assigned to an integer, results in the float bein truncated
	integer = answer;
	cout << "integer = floatNumber = " << integer << "\n";

	return 0;
}
