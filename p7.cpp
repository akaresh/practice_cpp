/* files
the library = <fstream>
writing to a file = ofstream myfile;
reading to a file = ifstream myfile;
reading and writing to a file = fstream myfile;
open the file = myfile.open("filename");
close the file = myfile.close(); */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string line;
	ofstream myfileI ("input.txt", ios::app);
	//writing to a file
	if (myfileI.is_open())
	{
		myfileI << "\n I am practicing to write to a file.\n";
		myfileI << "\n Let's see how it is going to turn out.\n";
		myfileI.close();
	}
	else cout << "Unable to open file for writing";

	//create an input stream to read the file
	ifstream myfile0 ("input.txt");

	if (myfile0.is_open())
	{
		while ( getline (myfile0,line) )
		{
			cout << line << '\n';
			//reads by line and prints the output out in the terminal
		}
		myfile0.close();
	}

	else cout << "Unable to open for reading\n";

	return 0;
}
