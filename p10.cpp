/* cin has limitations
cin will consider a space in an input string to be the end of the input
getline = a function will retrieve character from the cin source and
store them in the variable called variableName. It will rretrieve all characters until the
newline or \n is detected => \n is a stopping point
we can spacify a different delimiter if the newline character is not desire

example
std::getline(std::cin, variableName);
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string subjectsName;
	cout<<"Tell me your favorite subjects? ";
	getline(cin, subjectsName);
	cout<<"I also like "<<subjectsName<<"\n";
	return 0;
}
