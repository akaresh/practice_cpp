// first C++ program

#include <iostream>
//Notes
/* # = prerocessor directive
**inluclude = add directives of a given library = iostram library
**<stream> = look in the current directory first, then look in the
**directory where the standard libraries are kept
**basically changing <> to "" = it can make a difference
**<> - goes straight to the standard directory
**"" - goes to the current directory first and only then to the standard */

int main() {
// int maint = function returns an int
	std::cout << "Hello World!\n";
	return 0;
}
/* functions always need to return something
**it is customary to return a 0 at the end of main, as
**this indicates the program completed without errors
**#include <iostream>
**specifying the end and start of program with curly brakets
**returns 0 = at the end of main = indicates the program completed
**without errors
**cout = command to printout to the console
**std:: before out is necessary, because cout is part of the standard library */


