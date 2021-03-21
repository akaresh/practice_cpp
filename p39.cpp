//CLASSES
/*
type of variables
type = class

in C++, a class is a user defined data type. It can have data and functions

EXAMPLE:
Let's create type called 'Student'
class Student
{
		string name;
		int id;
		int gradDate;
};

in C++ clases, the deafult is to make all members private
this means only other members of the class can access the daya

bad = to solve this we can have the functions

we can use function to access the data in a class
functions that acces and/or modify data values in classes are called mutators
we want the functions to be public, for that add public and all members after
it are accessible

class Student
{
		string name;
		int id;
		int gradDate;

	public:
		void setName(string nameIn);
		void setId(int idIn);
		void setGradDate(int dateIn);
		string getName();
		int getId();
		int getGradDate();
		void print();
};


class Student
{
		string name;
		int id;
		int gradDate;

	public:
		void setName(string nameIn);
		void setId(int idIn);
		void setGradDate(int dateIn);
		string getName();
		int getId();
		int getGradDate();
		void print();
};

void Student::setName(string nameIn)
{
	 name = nameIn;
}

void Student::setId(int idIn)
{
	 id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
	 gradDate = gradDateIn;
}

void Student::print()
{
	 cout<<name<<" "<<id<<" "<<gradDate;
}

string Student::getName()
{
	 return name;
}

int Student::getId()
{
	 return id;
}

int Student::getGradDate()
{
	 return gradDate;
}

Print function
Notice that this function prints only the data values with a
space between them. It does not add a newline, or text.
This is standard for C++ basic print functions.
We have to think others might want to use this function
and we should keep it as neutral as possible.

CLASS syntax:
class ClassName
{
	  member1;
	  member2;
	  ...

public:
	 return variable accessFunction1(function parameters);
	 return variable accessFunction2(function parameters);
	  ...
} ;

returnVariable ClassName:: accessFunction1(function parameters)
{
	function statements;
}

returnVariable ClassName:: accessFunction2(function parameters)
{
	function statements;
}

...

Convention is:
capitalize the first letter of the classname
private member are list first = no need for private
Use 'getVariableName' for accessing private variables
Use 'setVariableName' for assigning values to private variables

You will need to signify that the functions are part of the class
definition by using the namespace classname::.

returnVariable ClassName:: accessFunction1(function parameters)
{
	function statements;
}

returnVariable ClassName:: accessFunction2(function parameters)
{
	function statements;
}

*/


//Practice
//conventional to put classes in a header file = like main.hpp
// operator -> used for accessing pointer members of a class.

#include <iostream>
using namespace std;

class Student
{
	string name;
	int id;
	int gradDate;

	public:
		void setName(string nameIn);
		void setId(int idIn);
		void setGradDate(int dateIn);
		string getName();
		int getId();
		int getGradDate();
		void print();
};

void Student::setName(string nameIn)
{
	name = nameIn;
}

void Student::setId(int idIn)
{
	id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
	gradDate = gradDateIn;
}

void Student::print()
{
	cout<<name<<" "<<id<<" "<<gradDate;
}

string Student::getName()
{
	return name;
}

int Student::getId()
{
	return id;
}

int Student::getGradDate()
{
	return gradDate;
}

int main()
{
	int integer1;
	float float1;
	Student student1;
	//creating a case using class Student

	integer1 = 4; //assign a value to integer1
	float1 = 4.333; //assign a value to float1

	student1.setName("Catherine Gamboa"); //assign a value to the student name
	student1.setId(54345); //assign a value to the student id number
	student1.setGradDate(2017); //assign a value to the student grad date

	//Let's print the values of our variables
	cout<<"integer1 = "<<integer1<<"\n";
	cout<<"float1 = "<<float1<<"\n";

	//There are two ways we can print the values of our class:
	//The first is to call the print function we created.
	cout<<"Using the Student::print function\n";
	cout<<"Student1 = ";
	student1.print();
	cout<<"\n\n";

	//The second is to access each member of the class using the get functions
	cout<<"Using the student access functions\n";
	cout<<"Student1 name = "<<student1.getName()<<"\n";
	cout<<"Student1 ID = "<<student1.getId()<<"\n";
	cout<<"Student1 Grad Date = "<<student1.getGradDate()<<"\n";


	return 0;
}







