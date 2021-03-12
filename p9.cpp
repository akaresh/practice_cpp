/* cout = writing to the counsole
cin = reading from the console
cout = ask question
cin = to get the answer (entered in terminal)
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//defining the variables
	int year = 0;
	int age = 0;
	int age_c = 0;
	int v = 0;
	string name = " ";
	//printing a message
	cout<<"what year is your favorite? ";

	//getting the response and assinging to the variable defined above
	cin >> year;

	//output using the the input from the previous question
	cout<<"How interesting, your favorite year is "<<year<<"!\n";

	cout<<"What is your name? ";
	cin >> name;
	cout<<"Hello "<<name<<".\n";

	cout<<"How old are you? ";
	cin >> age;

	cout<<"At what age did you start learning programming? ";
	cin >> age_c;
	v = age - age_c;
	cout<<"So you have been coding for " << v <<" years.\n";

	return 0;
}


