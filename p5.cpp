/* allowing for enumerated constants
enumerated constant = allows to create a new var type => assign a finite number of
**values to it
**kinda like dictionaries???
*/

#include <iostream>
#include <iomanip>
//standard library = can set the width for certain spaces
using namespace std;

int main()
{
	enum SUBJECTS {Math, English, Literature, Physics, Chemistry, Biology, ComputerScience, Art};

	SUBJECTS bestSUBJECT;
	//defining bestSUBJECT as a variable type SUBJECTS

	bestSUBJECT = ComputerScience;

	if(bestSUBJECT == ComputerScience)
		//; - not needed here
	{
		cout<<"I love computer science,"<<setw(26)<<"and I dislike literature\n";
	}

	return 0;
}
