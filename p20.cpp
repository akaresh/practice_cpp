//do while loops practice
/*
the statements are executed the first time going through the loop
then the condition is checked
usually we check condition before going into the while loop

do
{
	statements;
}while(condition );

Notes on infinite loops:
Sometimes it is desired to create an infinite loop.
For example, in embedded systems a infinite loop is
often used for the main task.

Two ways of creating infinite loops:

for( ; ;)
{
     std::cout<<"This for loop will run forever\n";
}

while(1)
{
     std::cout<<"This while loop will run forever\n";
}
*/

#include <iostream>
using namespace std;

int main() {
	int count = 0;

	do {
		cout << "Count " << count << "\n";
		count ++;
	}while (count < 5);

	do {
		cout << "Count back " << count << "\n";
		count --;
	}while(count <= 5 && count >= 0);

	return 0;
}
