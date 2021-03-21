//Memory Management

/* Constructors and destructors
COnstructor is a special function that is executed whenever we create a new instance
of a the class. It is used to set initial values f data members of a class

constructors do no return a value, including void
declaration of constructor

ClassName::ClassName()
{
     dataMemberName1 = value;
     dataMemberName2 = value;
     ...
}

Goal: learn to use constructors


#include<iostream>
using namespace std;

//The cats class that we used earlier in the lesson.
class Cats
{
    string name;
    string breed;
    int age;
public:
    Cats(); //declaring the constructor
    void setName(string nameIn);
    void setBreed(string breedIn);
    void setAge(int ageIn);
    string getName();
    string getBreed();
    int getAge();
    void printInfo();
};
//defining the constructor
Cats::Cats()
{
    cout<<"Assigning inital values in the constructor\n";
    name = "Unknown";
    breed = "Unknown"; //the initial value of the breed
    age = 99; //the initial value of the age
}

Destructor
destructors are special class fxns that are called whenever an object goes out of scope
called automatically

Destructors cannot:
	- return a value
	- accept parameters

Destructors must have the same name as the class
Destructors are identified as tilda (~) symbol

classname::~classname()
{
     //tasks to be completed before going out of scope
}

*/
