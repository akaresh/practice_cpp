/*GOAL: Practice writing to the console and learn
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/

#include <iostream>

int main()
{
    using namespace std;
    //sets std library for this specific function
    cout<<"int size = "<<sizeof(int)<<"\n";
    cout<<"int size = "<<sizeof(short)<<"\n";
    cout<<"int size = "<<sizeof(long)<<"\n";
    cout<<"int size = "<<sizeof(char)<<"\n";
    cout<<"int size = "<<sizeof(float)<<"\n";
    cout<<"int size = "<<sizeof(double)<<"\n";
    cout<<"int size = "<<sizeof(bool)<<"\n";

    return 0;
}
