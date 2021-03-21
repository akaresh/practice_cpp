//Goal: write a function called printMessage that prints: Functions

#include <iostream>
using namespace std;

void printMessage();
/*defining funtion ahead of time so that the order in which
functions are placed no longer matter
if it is not defined then the void printMessage() would be above int main()
*/

int main(){
	printMessage();
	return 0;
}

void printMessage(){
	cout<<"Functions\n";
}
