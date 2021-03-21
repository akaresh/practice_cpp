//while loops
/*
has two forms:
- regular while loops
- do .. while loops

while(condition)
{
	statements;
}
*/

#include <iostream>
using namespace std;

int main() {
	int entry = 0;

	while(entry <= 5) {
		cout<<"incrementing entry = "<<entry<<"\n";
		entry ++;
	}

	while (entry >= 0 && entry <= 6) {
		cout<<"decrementing entry = "<<entry<<"\n";
		entry--;
	}

	return 0;
}
