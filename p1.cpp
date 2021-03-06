#include "iostream"
// program takes in name and favorite year
int main()
{
	int year = 0;
	int age = 0;
	std::string name = "";
	//declerating variables above

	std::cout << "What is your name?";
	std::cout << "\n";
	std::cin >> name;
	std::cout <<"What year is your favority? \n";
	std::cin >> year;

	std::cout << "Your name: " << name << "\n";
	std::cout << "Favorite year: " << year << "\n";
	return 0;
}

//cin is an object of class istream = accept the input
