///Arrays
/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100.
**We will do it now for practice and again later when we learn arrays and
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/

#include <iostream>
using namespace std;

int main() {
	float total = 0;
	float min = 101;
	float max = -1;
	float var;
	cout << "You will be asked to enter 15 random numbers\n";
	for(int i = 0; i<15; i++){
		cout << "Enter random numbers from 0 to 100: ";
		cin >> var;
		total = total + var;
		if (var < min) {
			min = var;
		}
		if (var > max) {
			max = var;
		}
	}
	cout << "Max: " << max << "\tMin: " << min << "\n";
	cout << "Average: " << total/15 << "\n";
}
