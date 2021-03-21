/* switch statements
similar to if else statement
switch has case statemments
cases can have break statements
without the breaks each case after the one we chose will be executed
*/
 #include <iostream>
using namespace std;

 int main () {
	int menuItem;

	cout << "What is your favorite subject?\n";
	cout << "1.Math\n2.Biology\n3.History\n4.Geography\n";
	cout << "\n";
	cin >> menuItem;
	cout << "\n";

	switch(menuItem) {
		case(1): cout << "Math? Sounds interesting.\n";
				 //break;
		case(2): cout << "Biology? Sounds complicated.\n";
				 //break;
		case(3): cout << "History? Sounds cool.\n";
				 //break;
		case(4): cout << "Geography? That's cool.\n";
				 //break;
		default: cout <<"Enter a valid menuItem\n";

	}

	return 0;

 }
