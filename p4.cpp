#include <iostream>
using namespace std;
/*in c++ we can define a variable as a constant =>
** its values does NOT change for the file of the program
** using const int to do that */

int main()
{
    const int weightGoal = 100;
    cout<<"WeightGoal = "<<weightGoal<<"\n";
    //can no longer use weightGoal, since it is "immutable"
    int weightGoal1 = 200;
    cout<<"WeightGoal = " <<weightGoal1<<"\n";
    return 0;
}
