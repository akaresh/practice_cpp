/*Goal: create a function that searches an array for
**a given value.
*/

#include<iostream>
using namespace std;

int search(int *array, int size, int key);

int main()
{
	const int size = 4;
	int array[] = {345,75896,2,543};
	int searchKey;
	cout<<"enter number: ";
	cin>>searchKey;
	cout<<"Found at: "<<search(array, size, searchKey)<<"\n";
	return 0;
}

int search(int *array, int size, int key){
	int index = -1;
	for(int i=0; i<size; i++)
		if (array[i] == key){
			index = i;
			break;
		}
	return index;

}
