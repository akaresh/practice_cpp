/*For this program print for each variable
**print the value of the variable,
**then print the address where it is stored.
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int givenInt;
    int * pointerTogivenInt = &givenInt;
    float givenFloat;
    float * pointerTogivenFloat = &givenFloat;
    double givenDouble ;
    double * pointerTogivenDouble = &givenDouble;
    string givenString;
    string * pointerTogivenString = &givenString;
    char givenChar;
    char * pointerTogivenChar = &givenChar;

    cout << "Enter Int:\n";
    cin >> givenInt;
    cout << "Address\t" << &givenInt << "\tValue\t" << * pointerTogivenInt << "\n";

    cout << "Enter Float:\n";
    cin >> givenFloat;
    cout << "Address\t" << &givenFloat << "\tValue\t" << * pointerTogivenFloat << "\n";


    cout << "Enter Double:\n";
    cin >> givenDouble;
    cout << "Address\t" << &givenDouble << "\tValue\t" << * pointerTogivenDouble << "\n";

    cout << "Enter Char:\n";
    cin >> givenChar;
    cout << "Address\t" << &givenChar << "\tValue\t" << * pointerTogivenChar << "\n";

    cin.ignore();
    cout << "Enter String:\n";
    getline (cin, givenString);
    cout << "Address\t" << &givenString << "\tValue\t" << * pointerTogivenString << "\n";

    return 0;
}
