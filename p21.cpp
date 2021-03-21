/*Goal: In the programming quiz, use a while loop to prompt
**the user to guess a target number.
**Tell the user if the guess is too high or too low.
**The user enters -1  or guesses the target number to end
**the program.
*/

#include <iostream>
#include <sstream>
#include <time.h> //added random generator
#include <cstdlib> //added to use the rand function
using namespace std;

int main(){
	int target = 55;
	int guess;
	string userString;
	while (target!=guess) {
		if (userString == "q") {
			cout << "quitting the game? (y/n): ";
			cin >> userString;
			if (userString == "y") {
				break;
			}
		}
		else if (userString != "q") {
			cout<<"Guess a number between 0 and 100: ";
			getline (cin, userString);
			stringstream(userString) >> guess;

			if (guess == target) {
				cout << "Congrats!\n";
				break;
			}

		}

	}
	return 0;
}
