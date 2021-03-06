#include <iostream>

using namespace std;
//instead of std::cout, can just do cout
//telling the compiler that we are going to use standard library

int main()
{
    cout << "hey, writing std:: is pain, ";
    cout << "change the program so I don't have to write it. \n";
    return 0;
}

//Notes
/* Problems:
when the commands are not explicitly defined, there is a possibility that
when your code is added to a large project, you code might reference a command
from a different library */
