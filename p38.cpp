//BEST PRACTICE
/*
WHEN PASSING VARIABLES THAT ARE NOT GOING TO BE MODIFIED,
DEFINE VARIABLE AS const so it cannot be changed by the function

Example:
in this fxn, we are passing an integer variable called input
we want the function to use it and not modify it

	int doubleInput(const int input)
*/

//Function definion:
int doubleInput(const int input)
{
	int h = input *2;
	return h;
}

//CODE BELOW WONT COMPILE!

int doubleInput(const int input)
{
	input++;
	//changing input
	int h = input *2;
	return h;
}



