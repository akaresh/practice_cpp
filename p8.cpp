/* we can include our own header files
they have .hpp extension but any extension will also work
Header file vs main program file
- Header files = contain info about how to do a task
- the main program = contains info about what to do

for header file = using "" and not <>, since this header is in our own
local directory
*/

#include "p8.hpp"

int main()
{
	cout << "I am practicing on how to use header files\n";
	return 0;
}
