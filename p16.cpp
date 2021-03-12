// if statements practice

#include <iostream>
using namespace std;

int main() {
	int a;

	cout<<"This program is checking value a.\n";
	cout<<"Enter value of a: ";
	cin >> a;

	if(a == 10) {
		cout << "a is equal to 10.\n";
	}
	else if (a == 6) {
		cout << "a is equal to 6.\n";
	}
	else {
		cout << "There is not much to say about a.\n";
	}

	return 0;
}
